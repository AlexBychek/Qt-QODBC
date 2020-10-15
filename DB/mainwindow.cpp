#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setFixedWidth(612);
    this->setFixedHeight(332);

     login = new Login();
     quer = new Query();

     connect(this, SIGNAL(pushc(bool)),  login, SLOT(connectt(bool)));
     connect(login, SIGNAL(pushdb(QString,QString,QString,QString)), this, SLOT(getdb(QString,QString,QString,QString)));
     connect(quer, SIGNAL(pushquery(QString)), this, SLOT(getqyery(QString)));
     connect(this, SIGNAL(pushqueryresult(QString)), quer, SLOT(getresult(QString)));

   table = new QTabWidget(this);

   ui->gridLayout->addWidget(table);
}


MainWindow::~MainWindow()
{
    delete ui;
    delete quer;
    delete login;
    for(int i = 0; i < view.size(); i++)
    {
        delete view[i];
        delete model[i];
    }

}

void MainWindow::on_actionQuery_triggered()
{
    quer->show();
}

void MainWindow::on_actionClose_triggered()
{
    close();
}

void MainWindow::on_actionConnect_triggered()
{
    login->show();
}

void MainWindow::tables()
{
    table->clear();

    lst = db.tables();
    int size = lst.length() - 2;
    if(lst[0] == "sysdiagrams")
    {
        for(int i = 0; i < size; i++)
        {
            lst[i] = lst[i+1];
        }
    size--;
}

    model.clear();
    view.clear();


    for(int i = 0; i < size; i++)
    {
        QTableView *tb = new QTableView(this);
        QSqlTableModel* mod = new QSqlTableModel();

        view.push_back(tb);
        model.push_back(mod);

        model[i]->setTable(lst[i]);

        model[i]->select();
        model[i]->setEditStrategy(QSqlTableModel::OnFieldChange);
        view[i]->setModel(model[i]);
        view[i]->resizeColumnsToContents();

        table->addTab(view[i], lst[i]);
   }
}

void MainWindow::on_pushButton_clicked()
{
    tables();
}

void MainWindow::on_pushButton_2_clicked()
{
    int i = table->currentIndex();

    qDebug() << i;

    if(ui->FilterEdit->text().length() > 0)
    {
        model[i]->setFilter(ui->FilterEdit->text());
    }
}


void MainWindow::on_SortButton_clicked()
{
    qDebug() << "Test";

    int i = table->currentIndex();

    qDebug() << i;

     qDebug() <<ui->SortBox->currentIndex();

    if(ui->SortBox->currentIndex() == 0)
         model[i]->setSort(ui->SortEdit->text().toInt(), Qt::AscendingOrder);
    else
         model[i]->setSort(ui->SortEdit->text().toInt(), Qt::DescendingOrder);

    qDebug() << ui->SortEdit->text().toInt();

    model[i]->select();
}


void MainWindow::on_DeleteRowButton_clicked()
{
    int i = table->currentIndex();

    int j =  view[i]->currentIndex().row();
    if(j >= 0)
    {
        qDebug() << "deletin row: " << model[i]->removeRow(j);
    }else
    {
         qDebug() << "no row select: ";
    }
}

void MainWindow::on_AddRowButton_clicked()
{
    int i = table->currentIndex();

    qDebug() << "insert row" << model[i]->insertRow(model[i]->rowCount());
}
