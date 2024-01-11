/********************************************************************************
** Form generated from reading UI file 'science.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCIENCE_H
#define UI_SCIENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_SCIENCE
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QScrollArea *SA;
    QWidget *scrollAreaWidgetContents;
    QCustomPlot *MQ135_1;
    QCustomPlot *MQ135_2;
    QCustomPlot *QCustomPlot1;
    QCustomPlot *dht11;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QScrollBar *verticalScrollBar_2;
    QCustomPlot *BMP180;
    QCustomPlot *SHT10_1;
    QCustomPlot *SHT10_2;
    QCustomPlot *loadcell;
    QScrollBar *horizontalScrollBar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SCIENCE)
    {
        if (SCIENCE->objectName().isEmpty())
            SCIENCE->setObjectName(QString::fromUtf8("SCIENCE"));
        SCIENCE->resize(2898, 1419);
        centralwidget = new QWidget(SCIENCE);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(210, 30, 160, 80));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_6 = new QPushButton(verticalLayoutWidget_3);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout_3->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(verticalLayoutWidget_3);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout_3->addWidget(pushButton_5);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(30, 30, 160, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(verticalLayoutWidget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(verticalLayoutWidget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(390, 30, 160, 80));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_8 = new QPushButton(verticalLayoutWidget_4);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout_4->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(verticalLayoutWidget_4);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout_4->addWidget(pushButton_7);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(560, 30, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        SA = new QScrollArea(centralwidget);
        SA->setObjectName(QString::fromUtf8("SA"));
        SA->setGeometry(QRect(10, 120, 1161, 1181));
        SA->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1159, 1179));
        MQ135_1 = new QCustomPlot(scrollAreaWidgetContents);
        MQ135_1->setObjectName(QString::fromUtf8("MQ135_1"));
        MQ135_1->setGeometry(QRect(10, 560, 1111, 371));
        MQ135_2 = new QCustomPlot(scrollAreaWidgetContents);
        MQ135_2->setObjectName(QString::fromUtf8("MQ135_2"));
        MQ135_2->setGeometry(QRect(10, 940, 1101, 221));
        QCustomPlot1 = new QCustomPlot(scrollAreaWidgetContents);
        QCustomPlot1->setObjectName(QString::fromUtf8("QCustomPlot1"));
        QCustomPlot1->setGeometry(QRect(10, 260, 1121, 281));
        dht11 = new QCustomPlot(scrollAreaWidgetContents);
        dht11->setObjectName(QString::fromUtf8("dht11"));
        dht11->setGeometry(QRect(10, 10, 1121, 241));
        dht11->setMinimumSize(QSize(1121, 241));
        SA->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(centralwidget);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(1180, 120, 1021, 1181));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1019, 1179));
        verticalScrollBar_2 = new QScrollBar(scrollAreaWidgetContents_2);
        verticalScrollBar_2->setObjectName(QString::fromUtf8("verticalScrollBar_2"));
        verticalScrollBar_2->setGeometry(QRect(990, 0, 20, 1181));
        verticalScrollBar_2->setOrientation(Qt::Vertical);
        BMP180 = new QCustomPlot(scrollAreaWidgetContents_2);
        BMP180->setObjectName(QString::fromUtf8("BMP180"));
        BMP180->setGeometry(QRect(20, 20, 951, 301));
        SHT10_1 = new QCustomPlot(scrollAreaWidgetContents_2);
        SHT10_1->setObjectName(QString::fromUtf8("SHT10_1"));
        SHT10_1->setGeometry(QRect(20, 340, 951, 271));
        SHT10_2 = new QCustomPlot(scrollAreaWidgetContents_2);
        SHT10_2->setObjectName(QString::fromUtf8("SHT10_2"));
        SHT10_2->setGeometry(QRect(10, 630, 971, 241));
        loadcell = new QCustomPlot(scrollAreaWidgetContents_2);
        loadcell->setObjectName(QString::fromUtf8("loadcell"));
        loadcell->setGeometry(QRect(10, 870, 981, 301));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        horizontalScrollBar = new QScrollBar(centralwidget);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(20, 1330, 2181, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        SCIENCE->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SCIENCE);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 2898, 22));
        SCIENCE->setMenuBar(menubar);
        statusbar = new QStatusBar(SCIENCE);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SCIENCE->setStatusBar(statusbar);

        retranslateUi(SCIENCE);
        QObject::connect(pushButton_4, SIGNAL(clicked(bool)), dht11, SLOT(show()));
        QObject::connect(pushButton_3, SIGNAL(clicked(bool)), QCustomPlot1, SLOT(show()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), MQ135_1, SLOT(show()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), MQ135_2, SLOT(show()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), BMP180, SLOT(show()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), SHT10_1, SLOT(show()));
        QObject::connect(pushButton, SIGNAL(clicked()), SHT10_2, SLOT(show()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), loadcell, SLOT(show()));

        QMetaObject::connectSlotsByName(SCIENCE);
    } // setupUi

    void retranslateUi(QMainWindow *SCIENCE)
    {
        SCIENCE->setWindowTitle(QApplication::translate("SCIENCE", "MainWindow", nullptr));
        pushButton_6->setText(QApplication::translate("SCIENCE", "MQ135-1", nullptr));
        pushButton_5->setText(QApplication::translate("SCIENCE", "MQ135-2", nullptr));
        pushButton_3->setText(QApplication::translate("SCIENCE", "QCustomPlot1", nullptr));
        pushButton_4->setText(QApplication::translate("SCIENCE", "Dht11", nullptr));
        pushButton_8->setText(QApplication::translate("SCIENCE", "BMP180", nullptr));
        pushButton_7->setText(QApplication::translate("SCIENCE", "loadcell 1", nullptr));
        pushButton->setText(QApplication::translate("SCIENCE", "SHT 10.1", nullptr));
        pushButton_2->setText(QApplication::translate("SCIENCE", "SHT 10.2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCIENCE: public Ui_SCIENCE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCIENCE_H
