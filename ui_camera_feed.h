/********************************************************************************
** Form generated from reading UI file 'camera_feed.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_FEED_H
#define UI_CAMERA_FEED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <qcameraviewfinder.h>

QT_BEGIN_NAMESPACE

class Ui_camera_feed
{
public:
    QWidget *centralwidget;
    QCameraViewfinder *camera_feed_2;
    QPushButton *start;
    QPushButton *stop;
    QPushButton *pushButton_3;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *camera_feed)
    {
        if (camera_feed->objectName().isEmpty())
            camera_feed->setObjectName(QString::fromUtf8("camera_feed"));
        camera_feed->resize(1559, 956);
        centralwidget = new QWidget(camera_feed);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        camera_feed_2 = new QCameraViewfinder(centralwidget);
        camera_feed_2->setObjectName(QString::fromUtf8("camera_feed_2"));
        camera_feed_2->setGeometry(QRect(20, 160, 1531, 531));
        start = new QPushButton(centralwidget);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(20, 20, 231, 81));
        stop = new QPushButton(centralwidget);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setGeometry(QRect(280, 20, 291, 81));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(600, 20, 301, 81));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 120, 67, 17));
        camera_feed->setCentralWidget(centralwidget);
        menubar = new QMenuBar(camera_feed);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1559, 22));
        camera_feed->setMenuBar(menubar);
        statusbar = new QStatusBar(camera_feed);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        camera_feed->setStatusBar(statusbar);

        retranslateUi(camera_feed);
        QObject::connect(start, SIGNAL(clicked()), camera_feed_2, SLOT(show()));

        QMetaObject::connectSlotsByName(camera_feed);
    } // setupUi

    void retranslateUi(QMainWindow *camera_feed)
    {
        camera_feed->setWindowTitle(QApplication::translate("camera_feed", "MainWindow", nullptr));
        start->setText(QApplication::translate("camera_feed", "START FEED", nullptr));
        stop->setText(QApplication::translate("camera_feed", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("camera_feed", "PushButton", nullptr));
        label->setText(QApplication::translate("camera_feed", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class camera_feed: public Ui_camera_feed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_FEED_H
