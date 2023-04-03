#ifndef HUDDISPLAY_H
#define HUDDISPLAY_H

#include <QWidget>
#include <QGraphicsView>
#include "ui_huddisplay.h"
#include <QGraphicsScene>
#include <QColor>
#include <QPolygonF>
#include <QGraphicsPolygonItem>
#include <QGraphicsPolygonItem>
#include <qwt/qwt_plot.h>
#include <qwt/qwt.h>

namespace Ui {
class hudDisplay;
}

class hudDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit hudDisplay(QWidget *parent = nullptr);
    ~hudDisplay();

    double getPitchAngleFromTelemetry();
    double getRollAngleFromTelemetry();


private:
    Ui::hudDisplay *ui;
    QGraphicsScene *scene;
    QGraphicsView *view;
    QGraphicsPolygonItem *horizonItem;
    QwtPlot *plot;



};

#endif // HUDDISPLAY_H
