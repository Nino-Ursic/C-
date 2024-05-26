/********************************************************************************
** Form generated from reading UI file 'second_window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECOND_WINDOW_H
#define UI_SECOND_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_second_window
{
public:
    QAction *actionnew;
    QAction *actionopen;
    QAction *actionsave;
    QAction *actionsave_as;
    QAction *actionundo;
    QAction *actionredo;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menufile;
    QMenu *menuedit;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *second_window)
    {
        if (second_window->objectName().isEmpty())
            second_window->setObjectName("second_window");
        second_window->resize(800, 600);
        second_window->setAutoFillBackground(true);
        second_window->setStyleSheet(QString::fromUtf8(""));
        actionnew = new QAction(second_window);
        actionnew->setObjectName("actionnew");
        actionopen = new QAction(second_window);
        actionopen->setObjectName("actionopen");
        actionsave = new QAction(second_window);
        actionsave->setObjectName("actionsave");
        actionsave_as = new QAction(second_window);
        actionsave_as->setObjectName("actionsave_as");
        actionundo = new QAction(second_window);
        actionundo->setObjectName("actionundo");
        actionredo = new QAction(second_window);
        actionredo->setObjectName("actionredo");
        centralwidget = new QWidget(second_window);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        second_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(second_window);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menufile = new QMenu(menubar);
        menufile->setObjectName("menufile");
        menuedit = new QMenu(menubar);
        menuedit->setObjectName("menuedit");
        second_window->setMenuBar(menubar);
        statusBar = new QStatusBar(second_window);
        statusBar->setObjectName("statusBar");
        second_window->setStatusBar(statusBar);
        toolBar = new QToolBar(second_window);
        toolBar->setObjectName("toolBar");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy);
        second_window->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menufile->menuAction());
        menubar->addAction(menuedit->menuAction());
        menufile->addAction(actionnew);
        menufile->addAction(actionopen);
        menufile->addAction(actionsave);
        menufile->addAction(actionsave_as);
        menuedit->addAction(actionundo);
        menuedit->addAction(actionredo);

        retranslateUi(second_window);

        QMetaObject::connectSlotsByName(second_window);
    } // setupUi

    void retranslateUi(QMainWindow *second_window)
    {
        second_window->setWindowTitle(QCoreApplication::translate("second_window", "MainWindow", nullptr));
        actionnew->setText(QCoreApplication::translate("second_window", "new", nullptr));
        actionopen->setText(QCoreApplication::translate("second_window", "open", nullptr));
        actionsave->setText(QCoreApplication::translate("second_window", "save", nullptr));
        actionsave_as->setText(QCoreApplication::translate("second_window", "save as", nullptr));
        actionundo->setText(QCoreApplication::translate("second_window", "undo", nullptr));
        actionredo->setText(QCoreApplication::translate("second_window", "redo", nullptr));
        label->setText(QCoreApplication::translate("second_window", "File path:", nullptr));
        pushButton->setText(QCoreApplication::translate("second_window", "Save", nullptr));
        menufile->setTitle(QCoreApplication::translate("second_window", "file", nullptr));
        menuedit->setTitle(QCoreApplication::translate("second_window", "edit", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("second_window", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class second_window: public Ui_second_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECOND_WINDOW_H
