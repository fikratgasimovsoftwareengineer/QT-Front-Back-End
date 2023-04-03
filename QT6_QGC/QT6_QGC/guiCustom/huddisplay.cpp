#include "huddisplay.h"
#include "ui_huddisplay.h"

hudDisplay::hudDisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hudDisplay)
{
    ui->setupUi(this);
    plot = new QwtPlot(ui->hud_view);

   /* scene = new QGraphicsScene(this);
    view = ui->hud_view(scene);*/

    scene = new QGraphicsScene(this);
    view = ui->hud_view;
    view->setFixedSize(800, 600);
    view->setBackgroundBrush(QColor(0,0,0));


    QPixmap compassMap(":/icons8-compass.gif");

    QGraphicsPixmapItem *compassBackground = new QGraphicsPixmapItem(compassMap);
    scene->addItem(compassBackground);


    QGraphicsEllipseItem* compassOuterCircle = new QGraphicsEllipseItem(-100, -100, 200, 200);
    QPen pen(Qt::white);
    pen.setWidth(2);
    compassOuterCircle->setPen(pen);
    scene->addItem(compassOuterCircle);

    QGraphicsLineItem* compassNeedle = new QGraphicsLineItem(0, 0, 0, -90);
    QPen needlePen(Qt::red);
    needlePen.setWidth(3);
    compassNeedle->setPen(needlePen);
    compassNeedle->setTransformOriginPoint(0, 0);
    compassNeedle->setRotation(45);
    scene->addItem(compassNeedle);

    view->setScene(scene);

}

hudDisplay::~hudDisplay()
{
    delete ui;
}

double hudDisplay::getPitchAngleFromTelemetry()
{
    qDebug ()<< "Receiving Pitch";
    return 4.4;
}

double hudDisplay::getRollAngleFromTelemetry()
{
    qDebug() << "Receiving Roll";

    return 5.6;
}

