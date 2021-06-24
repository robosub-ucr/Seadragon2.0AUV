nclude "mainwindow.h"

#include "ui_mainwindow.h"
#include "compass.h"
#include "depth.h"
#include "camera.h"

#include <QPushButton>
#include <QLabel>
#include <QFrame>
#include <QTextBrowser>
#include <QPainterPath>
#include <QTimer>
#include <QDateTime>
#include <ctime>
#include <stdio.h>

#include <QMenuBar>
#include <QMenu>
#include <QActionGroup>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPixmap>
#include <iostream>
#include <QImage>

Q_DECLARE_METATYPE(QCameraInfo)
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QPixmap pix("/Users/eunmikim/Downloads/seadragon_circle_ucryellow.png");
    QPixmap pix2("/Users/eunmikim/Downloads/Postman-pat.jpg");
    ui->setupUi(this);

    ui->pushButton->setText("System View");
    ui->pushButton_2->setText("Roscore");
    ui->pushButton_3->setText("AHRS");
    ui->pushButton_4->setText("TEST");
    ui->pushButton_5->setText("STM32");
    ui->pushButton_6->setText("Camera 1");
    ui->pushButton_7->setText("Camera 2");
    ui->pushButton_8->setText("State Machines");
    ui->pushButton_9->setText("Close Application");
    ui->label_5->setPixmap(pix.scaled(ui->label_5->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    ui->label_video->setPixmap(pix2.scaled(ui->label_video->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));


    QTimer *timer = new QTimer(this);
    connect(timer , SIGNAL(timeout()) , this, SLOT(showTime()));
    timer->start();


void MainWindow::paintEvent(QPaintEvent *event){
class
   
    int array [4] = {45, 90, -45, 90};

  
    srand(time(NULL));

  
    QPainter painter(this);

    Compass c(1100,500);

 
    painter.setBrush(Qt::blue);

    painter.translate(c.getCenterX(),c.getCenterY());

    QBrush brush;


    QPen pen;
    pen.setColor(Qt::white);
    pen.setWidth(3);


    painter.setPen(pen);

    c.setSquareWidth(200); //sets size of compass
    painter.drawRect(QRect(-c.getSquareWidth()/2, -c.getSquareWidth()/2, c.getSquareWidth(), c.getSquareWidth()));

    painter.setBrush(Qt::black);

  
    painter.drawEllipse(-c.getSquareWidth()/2, -c.getSquareWidth()/2, c.getSquareWidth(), c.getSquareWidth());


    c.setNeedleWidth(10);
    c.setNeedleHeight(100);
    QPolygon pointer;
    pointer << QPoint(0, -c.getNeedleHeight()) << QPoint(-c.getNeedleWidth(), 0) << QPoint(c.getNeedleWidth(), 0);

 
    QPainterPath path;
    path.addPolygon(pointer);


    c.setNeedleAngle(array[rand() % 4 + 4]);
    painter.rotate(c.getNeedleAngle());
    painter.drawPolygon(pointer);
    painter.fillPath(path, brush);
    painter.rotate(-c.getNeedleAngle()); 

    c.setTargetAngle(80);
    pen.setBrush(Qt::red);
    painter.setBrush(Qt::red);
    painter.rotate(c.getTargetAngle());
    painter.drawEllipse(-10 , -c.getNeedleHeight() + -10 , 20 , 20);
    painter.rotate(-c.getTargetAngle());

 
    painter.translate(-c.getCenterX(),-c.getCenterY());


    painter.translate(800,250);
    pen.setColor(Qt::black);
    painter.setPen(pen);
    painter.setBrush(Qt::white);

    painter.drawLine(0, 0, 600, 0);
    painter.drawLine(0, 0, 0, -200);

    pen.setColor(Qt::red);
    painter.setPen(pen);
    painter.setBrush(Qt::blue);


    int points = 4;
    int cake[4][2];
    int xStep = 100;
    int yStep = 10;

    for (int i = 1; i <= points; i++){
        painter.drawEllipse(xStep * i, -yStep * i, 10, 10);
        cake[i - 1][0] = xStep * i + 5;
        cake[i - 1][1] = yStep * -i + 5;
        yStep = yStep * 1.7;
    }

    pen.setColor(Qt::blue);
    painter.setPen(pen);

    for (int j = 0; j < points - 1; j++){
        painter.drawLine(cake[j][0], cake[j][1], cake[j + 1][0], cake[j + 1][1]);
    }

    painter.translate(-800,-250);

    Depth d(600,150);
    d.setAngle(-50);
    d.setWidth(60);
    d.setLength(120);
    painter.translate(d.getCenterX(), d.getCenterY());
    painter.rotate(d.getAngle());
    pen.setColor(Qt::black);
    painter.setPen(pen);
    painter.drawLine(0, 0, -115, 0);
    painter.drawLine(0, 0, 115, 0);
    pen.setColor(Qt::blue);
    painter.setPen(pen);
    painter.setBrush(Qt::white);
    painter.drawEllipse(-60, -30, d.getLength(), d.getWidth());
    painter.setBrush(Qt::red);
    painter.drawEllipse(-30, -7, d.getSWidth(), d.getSWidth());
    pen.setColor(Qt::black);
    painter.setPen(pen);
    painter.rotate(d.getAngle());
    painter.translate(-d.getCenterX(),-d.getCenterY());

    QPixmap pix2("/Users/eunmikim/Downloads/anything.jpg");
    ui->label_video->setPixmap(pix2.scaled(ui->label_video->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

}

void MainWindow::showTime(){

    QTime time = QTime::currentTime();

    QString time_text = time.toString("hh : mm : ss");
    if ((time.second() % 2) == 0){
        time_text[3] = ' ';
        time_text[8] = ' ';

    }
    ui->Clock->setText(time_text);

}

void MainWindow::redraw() {

    this->show();


    QTimer *timer =  new QTimer(this);


 
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));

    timer->start(2000);

}



MainWindow::~MainWindow()
{
    delete ui;
}

