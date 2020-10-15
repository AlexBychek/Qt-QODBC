/********************************************************************************
** Form generated from reading UI file 'query.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERY_H
#define UI_QUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Query
{
public:
    QGridLayout *gridLayout;
    QTextEdit *SqlText;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QTextEdit *SqlRes;

    void setupUi(QDialog *Query)
    {
        if (Query->objectName().isEmpty())
            Query->setObjectName(QString::fromUtf8("Query"));
        Query->resize(415, 255);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Query->sizePolicy().hasHeightForWidth());
        Query->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(Query);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        SqlText = new QTextEdit(Query);
        SqlText->setObjectName(QString::fromUtf8("SqlText"));

        gridLayout->addWidget(SqlText, 0, 0, 1, 2);

        pushButton_2 = new QPushButton(Query);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1);

        pushButton = new QPushButton(Query);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        SqlRes = new QTextEdit(Query);
        SqlRes->setObjectName(QString::fromUtf8("SqlRes"));

        gridLayout->addWidget(SqlRes, 1, 0, 1, 2);


        retranslateUi(Query);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Query, SLOT(close()));

        QMetaObject::connectSlotsByName(Query);
    } // setupUi

    void retranslateUi(QDialog *Query)
    {
        Query->setWindowTitle(QCoreApplication::translate("Query", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Query", "Close", nullptr));
        pushButton->setText(QCoreApplication::translate("Query", "Execute", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Query: public Ui_Query {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERY_H
