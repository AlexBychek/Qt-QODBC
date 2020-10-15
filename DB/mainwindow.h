#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <query.h>
#include <login.h>
#include <ui_login.h>

#include <QTabWidget>
#include <QTableView>
#include <QGridLayout>
#include <QMessageBox>
#include <QVector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void tables();

    signals:
    void pushc(bool);
    void pushqueryresult(QString);

private slots:
    void on_actionClose_triggered();
    void on_actionQuery_triggered();
    void getdb(QString sr,QString un,QString pw,QString dn)
    {
        db.close();

        db = QSqlDatabase::addDatabase("QODBC");
        db.setDatabaseName("DRIVER={SQL Server};SERVER="+sr+";DATABASE="+dn+";");
        db.setUserName(un);
        db.setPassword(pw);

        query = QSqlQuery(db);

        emit pushc(db.open());

        tables();
    }

    void getqyery(QString quer)
    {
        qDebug() << quer;

        QString str;

        if(!query.exec(quer))
        {
            qDebug() << query.lastError().databaseText();
            emit pushqueryresult(query.lastError().databaseText());
        }else
        {
            str+=query.executedQuery() + "\n";
            while(query.next())
                   {                  
                        for(int i = 0; i < query.record().count();i++)
                        {
                            str+=(query.value(i).toString() + " ");
                        }
                        str+="\n";
                   }

            qDebug() << query.result();
            emit pushqueryresult(str);
        }
    }

    void on_actionConnect_triggered();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_SortButton_clicked();
    void on_DeleteRowButton_clicked();
    void on_AddRowButton_clicked();

private:
    Ui::MainWindow *ui;

    Query* quer;
    QSqlDatabase db;
    QSqlQuery query;
    Login* login;

    QVector <QTableView*> view;
    QVector <QSqlTableModel*> model;
    QStringList lst;
    QTabWidget *table;
};

#endif // MAINWINDOW_H
