/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *callUpDuration;
    QPushButton *callUpIsLeap;
    QPushButton *openFile;
    QPushButton *callUpNextDay;
    QPushButton *callUpPreviousDay;
    QMenuBar *menubar;
    QMenu *menuDate;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(828, 629);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(180, 30, 611, 531));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 80, 156, 241));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        callUpDuration = new QPushButton(groupBox);
        callUpDuration->setObjectName("callUpDuration");

        gridLayout->addWidget(callUpDuration, 0, 0, 1, 1);

        callUpIsLeap = new QPushButton(groupBox);
        callUpIsLeap->setObjectName("callUpIsLeap");

        gridLayout->addWidget(callUpIsLeap, 4, 0, 1, 1);

        openFile = new QPushButton(groupBox);
        openFile->setObjectName("openFile");

        gridLayout->addWidget(openFile, 1, 0, 1, 1);

        callUpNextDay = new QPushButton(groupBox);
        callUpNextDay->setObjectName("callUpNextDay");

        gridLayout->addWidget(callUpNextDay, 2, 0, 1, 1);

        callUpPreviousDay = new QPushButton(groupBox);
        callUpPreviousDay->setObjectName("callUpPreviousDay");

        gridLayout->addWidget(callUpPreviousDay, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 828, 36));
        menuDate = new QMenu(menubar);
        menuDate->setObjectName("menuDate");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuDate->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Functions", nullptr));
        callUpDuration->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\275\320\270\321\206\320\260 \320\262 \320\264\320\275\321\217\321\205", nullptr));
        callUpIsLeap->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\321\201\320\276\320\272-\321\213\320\271 \320\270\320\273\320\270 \320\275\320\265\321\202", nullptr));
        openFile->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        callUpNextDay->setText(QCoreApplication::translate("MainWindow", "NextDay", nullptr));
        callUpPreviousDay->setText(QCoreApplication::translate("MainWindow", "PreviousDay", nullptr));
        menuDate->setTitle(QCoreApplication::translate("MainWindow", "Date", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
