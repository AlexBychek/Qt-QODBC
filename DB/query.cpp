#include "query.h"
#include "ui_query.h"
#include <QDebug>

Query::Query(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Query)
{
    ui->setupUi(this);

    this->setFixedWidth(415);
    this->setFixedHeight(255);
}

Query::~Query()
{
    delete ui;
}

void Query::on_pushButton_clicked()
{

    QString str = ui->SqlText->toPlainText();

    emit pushquery(str);

    qDebug() << str;

}

void Query::getresult(QString str)
{
    ui->SqlRes->setText(str);
}
