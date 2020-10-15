#ifndef QUERY_H
#define QUERY_H

#include <QDialog>
#include <QSql>
#include <QSqlQuery>

namespace Ui {
class Query;
}

class Query : public QDialog
{
    Q_OBJECT
public:
    explicit Query(QWidget *parent = 0);
    ~Query();
signals:
    void pushquery(QString);
private slots:
    void on_pushButton_clicked();
    void getresult(QString str);
private:
    Ui::Query *ui;
};

#endif // QUERY_H
