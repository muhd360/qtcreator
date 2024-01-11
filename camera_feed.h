#ifndef CAMERA_FEED_H
#define CAMERA_FEED_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QtMultimedia>
#include <QtMultimediaWidgets>

namespace Ui {
class camera_feed;
}

class camera_feed : public QMainWindow
{
    Q_OBJECT

public:
    explicit camera_feed(QWidget *parent = nullptr);
    ~camera_feed();
private slots:
    void on_start_clicked();

private:
    void startcam();
    void stopcam();
private:
    Ui::camera_feed *ui;
    QScopedPointer<QCamera> M_camera;
};

#endif // CAMERA_FEED_H
