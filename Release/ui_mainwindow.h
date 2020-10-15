/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuery;
    QAction *actionClose;
    QAction *actionConnect;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *FilterLabel;
    QLineEdit *FilterEdit;
    QPushButton *pushButton_2;
    QLabel *SortLabel;
    QSpinBox *SortEdit;
    QComboBox *SortBox;
    QPushButton *SortButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddRowButton;
    QPushButton *DeleteRowButton;
    QMenuBar *menuBar;
    QMenu *menuTools;
    QMenu *menuFile;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(612, 338);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionQuery = new QAction(MainWindow);
        actionQuery->setObjectName(QString::fromUtf8("actionQuery"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 421, 251));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(520, 240, 75, 23));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(440, 11, 161, 170));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        FilterLabel = new QLabel(layoutWidget);
        FilterLabel->setObjectName(QString::fromUtf8("FilterLabel"));
        FilterLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(FilterLabel);

        FilterEdit = new QLineEdit(layoutWidget);
        FilterEdit->setObjectName(QString::fromUtf8("FilterEdit"));

        verticalLayout->addWidget(FilterEdit);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        SortLabel = new QLabel(layoutWidget);
        SortLabel->setObjectName(QString::fromUtf8("SortLabel"));
        SortLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(SortLabel);

        SortEdit = new QSpinBox(layoutWidget);
        SortEdit->setObjectName(QString::fromUtf8("SortEdit"));

        verticalLayout->addWidget(SortEdit);

        SortBox = new QComboBox(layoutWidget);
        SortBox->addItem(QString());
        SortBox->addItem(QString());
        SortBox->setObjectName(QString::fromUtf8("SortBox"));

        verticalLayout->addWidget(SortBox);

        SortButton = new QPushButton(layoutWidget);
        SortButton->setObjectName(QString::fromUtf8("SortButton"));

        verticalLayout->addWidget(SortButton);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(440, 200, 158, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        AddRowButton = new QPushButton(layoutWidget1);
        AddRowButton->setObjectName(QString::fromUtf8("AddRowButton"));

        horizontalLayout->addWidget(AddRowButton);

        DeleteRowButton = new QPushButton(layoutWidget1);
        DeleteRowButton->setObjectName(QString::fromUtf8("DeleteRowButton"));

        horizontalLayout->addWidget(DeleteRowButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 612, 21));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        sizePolicy.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuFile->menuAction());
        menuTools->addAction(actionQuery);
        menuFile->addAction(actionConnect);
        menuFile->addAction(actionClose);
        mainToolBar->addAction(actionQuery);
        mainToolBar->addAction(actionConnect);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuery->setText(QCoreApplication::translate("MainWindow", "Query", nullptr));
        actionClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        actionConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        FilterLabel->setText(QCoreApplication::translate("MainWindow", "\320\244\320\270\320\273\321\214\321\202\321\200", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Filter", nullptr));
        SortLabel->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        SortBox->setItemText(0, QCoreApplication::translate("MainWindow", "AscendingOrder", nullptr));
        SortBox->setItemText(1, QCoreApplication::translate("MainWindow", "DescendingOrder", nullptr));

        SortButton->setText(QCoreApplication::translate("MainWindow", "Sort", nullptr));
        AddRowButton->setText(QCoreApplication::translate("MainWindow", "Add row", nullptr));
        DeleteRowButton->setText(QCoreApplication::translate("MainWindow", "DeleteRow", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
