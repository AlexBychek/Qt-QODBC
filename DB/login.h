#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QMessageBox>
#include <QDebug>

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT
public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_pushButton_2_clicked();
    void on_Connect_clicked();
    void connectt(bool cn)
    {
        this->cn = cn;
    }

signals:
    void pushdb(QString sr,QString un,QString pw,QString dn);
private:
    Ui::Login *ui;
    bool cn;
};

#endif // LOGIN_H
