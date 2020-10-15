#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    this->setFixedWidth(461);
    this->setFixedHeight(332);

    ui->PassEdit->setEchoMode(QLineEdit::Password);

    cn = false;
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply =  QMessageBox::question(this, "Exit","Вы хотите завершить программу?");

    if(reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }else
    {
        qDebug() << "No!";
    }
}

void Login::on_Connect_clicked()
{
    emit pushdb(ui->ServerNameEdit->text(), ui->LogEdit->text(), ui->PassEdit->text(), ui->NamedbEdit->text());

    if(cn)
    {
        this->close();
    }else
    {
        QMessageBox::warning(this, "Ошибка входа!", "Внимание, некорректно введены данные/Неверное имя/Неверный пароль.");
    }

}
