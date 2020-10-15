/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *ServerNameLabel_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *ServerNameLabel;
    QLabel *LogLabel;
    QLabel *PassLabel;
    QLabel *NamedbLabel;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *ServerNameEdit;
    QLineEdit *LogEdit;
    QLineEdit *PassEdit;
    QLineEdit *NamedbEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Connect;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(461, 332);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 441, 281));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        ServerNameLabel_2 = new QLabel(layoutWidget);
        ServerNameLabel_2->setObjectName(QString::fromUtf8("ServerNameLabel_2"));
        ServerNameLabel_2->setStyleSheet(QString::fromUtf8("font-size: 30px;\n"
"font-family: \"Times New Roman\", Times, serif;"));
        ServerNameLabel_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(ServerNameLabel_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ServerNameLabel = new QLabel(layoutWidget);
        ServerNameLabel->setObjectName(QString::fromUtf8("ServerNameLabel"));
        ServerNameLabel->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"font-family: \"Times New Roman\", Times, serif;"));

        verticalLayout->addWidget(ServerNameLabel);

        LogLabel = new QLabel(layoutWidget);
        LogLabel->setObjectName(QString::fromUtf8("LogLabel"));
        LogLabel->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"font-family: \"Times New Roman\", Times, serif;"));

        verticalLayout->addWidget(LogLabel);

        PassLabel = new QLabel(layoutWidget);
        PassLabel->setObjectName(QString::fromUtf8("PassLabel"));
        PassLabel->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"font-family: \"Times New Roman\", Times, serif;"));

        verticalLayout->addWidget(PassLabel);

        NamedbLabel = new QLabel(layoutWidget);
        NamedbLabel->setObjectName(QString::fromUtf8("NamedbLabel"));
        NamedbLabel->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"font-family: \"Times New Roman\", Times, serif;"));

        verticalLayout->addWidget(NamedbLabel);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ServerNameEdit = new QLineEdit(layoutWidget);
        ServerNameEdit->setObjectName(QString::fromUtf8("ServerNameEdit"));

        verticalLayout_2->addWidget(ServerNameEdit);

        LogEdit = new QLineEdit(layoutWidget);
        LogEdit->setObjectName(QString::fromUtf8("LogEdit"));

        verticalLayout_2->addWidget(LogEdit);

        PassEdit = new QLineEdit(layoutWidget);
        PassEdit->setObjectName(QString::fromUtf8("PassEdit"));

        verticalLayout_2->addWidget(PassEdit);

        NamedbEdit = new QLineEdit(layoutWidget);
        NamedbEdit->setObjectName(QString::fromUtf8("NamedbEdit"));

        verticalLayout_2->addWidget(NamedbEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        layoutWidget1 = new QWidget(Login);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(267, 300, 181, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Connect = new QPushButton(layoutWidget1);
        Connect->setObjectName(QString::fromUtf8("Connect"));

        horizontalLayout_2->addWidget(Connect);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Connect to Server", nullptr));
        ServerNameLabel_2->setText(QCoreApplication::translate("Login", "SQL Server Connect", nullptr));
        ServerNameLabel->setText(QCoreApplication::translate("Login", "Server name:", nullptr));
        LogLabel->setText(QCoreApplication::translate("Login", "Login:", nullptr));
        PassLabel->setText(QCoreApplication::translate("Login", "Password:", nullptr));
        NamedbLabel->setText(QCoreApplication::translate("Login", "Name DB:", nullptr));
        Connect->setText(QCoreApplication::translate("Login", "Connect", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Login", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
