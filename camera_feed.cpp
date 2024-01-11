//#include "camera_feed.h"
//#include "ui_camera_feed.h"

//camera_feed::camera_feed(QWidget *parent) :
//    QMainWindow(parent),
//    ui(new Ui::camera_feed)
//{
//    ui->setupUi(this);
//    for (const QCameraInfo &info : QCameraInfo::availableCameras())
//    {
//        qDebug() << "Camera description: " << info.description();
//    }

//    M_camera.reset(new QCamera(QCameraInfo::defaultCamera()));
//    if (!M_camera->isAvailable())
//    {
//        qDebug() << "Camera is not available!";
//    }

//    //M_camera.reset(new QCamera(QCameraInfo::defaultCamera()));
//    M_camera->setViewfinder(ui->camera_feed_2);


//}

//camera_feed::~camera_feed()
//{
//    delete ui;
//}

//void camera_feed::startcam()
//{
//    M_camera->start();

//}

//void camera_feed::on_start_clicked()
//{
//    startcam();
//}
#include "camera_feed.h"
#include "ui_camera_feed.h"

camera_feed::camera_feed(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::camera_feed)
{
    ui->setupUi(this);
    for (const QCameraInfo &info : QCameraInfo::availableCameras())
    {
        qDebug() << "Camera description: " << info.description();
    }

    M_camera.reset(new QCamera(QCameraInfo::defaultCamera()));
    if (!M_camera->isAvailable())
    {
        qDebug() << "Camera is not available!";
    }

    //M_camera.reset(new QCamera(QCameraInfo::defaultCamera()));
    M_camera->setViewfinder(ui->camera_feed_2);

    // Create a new instance of QCameraImageCapture
    M_imageCapture.reset(new QCameraImageCapture(M_camera.get()));

    // Connect the imageCaptured signal to the slot that will handle the captured image
    connect(M_imageCapture.get(), &QCameraImageCapture::imageCaptured, this, &camera_feed::handleImageCapture);

    // Connect the error signal to the slot that will handle errors
    connect(M_imageCapture.get(), QOverload<int, QCameraImageCapture::Error, const QString &>::of(&QCameraImageCapture::error), this, &camera_feed::handleError);

    // Connect the imageAvailable signal to the slot that will handle the available image
    connect(M_imageCapture.get(), &QCameraImageCapture::imageAvailable, this, &camera_feed::handleImageAvailable);

    // Connect the readyForCaptureChanged signal to the slot that will handle the change in readiness
    connect(M_imageCapture.get(), &QCameraImageCapture::readyForCaptureChanged, this, &camera_feed::handleReadyForCaptureChanged);

    // Connect the imageExposed signal to the slot that will handle the exposed image
    connect(M_imageCapture.get(), &QCameraImageCapture::imageExposed, this, &camera_feed::handleImageExposed);

    // Connect the capture destination to the image capture buffer
    M_imageCapture->setCaptureDestination(QCameraImageCapture::CaptureToBuffer);

    // Start the camera
    M_camera->start();
}

camera_feed::~camera_feed()
{
    delete ui;
}

void camera_feed::startcam()
{
    M_camera->start();

}

void camera_feed::on_start_clicked()
{
    startcam();
}

void camera_feed::handleImageCapture(int id, const QImage &preview)
{
    Q_UNUSED(id);
    Q_UNUSED(preview);
    qDebug() << "Image captured";
}

void camera_feed::handleError(int id, QCameraImageCapture::Error error, const QString &errorString)
{
    Q_UNUSED(id);
    Q_UNUSED(error);
    Q_UNUSED(errorString);
    qDebug() << "Error occurred";
}

void camera_feed::handleImageAvailable(int id, const QVideoFrame &frame)
{
    Q_UNUSED(id);
    Q_UNUSED(frame);
    qDebug() << "Image available";
}

void camera_feed::handleReadyForCaptureChanged(bool ready)
{
    Q_UNUSED(ready);
    qDebug() << "Ready for capture changed";
}

void camera_feed::handleImageExposed(int id)
{
    Q_UNUSED(id);
    qDebug() << "Image exposed";
}
