#include "graphics.h"

#include <QPainter>

graphics::graphics(QWidget *parent) : QWidget(parent)
{

}


void graphics::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    switch(mode){
    case 1:
        drawExercise1(painter);
        break;
    case 2:
        drawExercise2(painter);
        break;
    case 3:
        drawExercise3(painter);
        break;
    case 4:
        drawExercise4(painter);
        break;
    }
}


void graphics::drawExercise1(QPainter &painter)
{
    QPointF center(width()/2.0, height()/2.0);
    int radius = qMin(width(), height())/3;
    QPointF leftCorner = center - QPointF(sqrt(radius*radius/2.0), sqrt(radius*radius/2.0));
    qreal edge = sqrt(radius*radius*2.0);

    QPen pen;
    pen.setColor("#f79646");
    pen.setWidth(5);
    painter.setPen(pen);
    painter.drawEllipse(center, radius, radius);

    pen.setColor("#4f81bd");
    painter.setPen(pen);
    painter.drawRect(leftCorner.x(), leftCorner.y(), edge, edge);

    pen.setWidth(1);
    painter.setPen(pen);
    painter.drawLine(center - QPointF(0, radius*1.5), center + QPointF(0, radius*1.5));
    painter.drawLine(center - QPointF(radius*1.5, 0), center + QPointF(radius*1.5, 0));
}

void graphics::drawExercise2(QPainter &painter)
{
    QPointF center(width()/2.0, height()/2.0);
    int radius = qMin(width(),height())/2;
    QPointF lCenter(center - QPointF(radius/2.0, 0));
    QPointF rCenter(center + QPointF(radius/2.0, 0));

    QPen pen;
    pen.setWidth(5);
    pen.setColor(Qt::red);
    painter.setPen(pen);

    painter.drawEllipse(center, radius, radius);
    painter.drawArc(center.x()-radius, center.y()-radius/2, radius, radius,0,-180*16);
    painter.drawArc(center.x(), center.y()-radius/2, radius, radius,0,180*16);
    painter.drawEllipse(lCenter, radius/10, radius/10);
    painter.drawEllipse(rCenter, radius/10, radius/10);
}

void graphics::drawExercise3(QPainter &painter)
{
    QPointF center(width()/2.0, height()/2.0);

    int edge = 0;
    if (width() > height()) edge = height()/2;
    else edge = width()/2;

    QPointF house[] = {
        QPointF(center.x()-edge/2.0, center.y()+edge),
        QPointF(center.x()-edge/2.0, center.y()),
        QPointF(center.x(), center.y()-edge/2.0),
        QPointF(center.x()+edge/2.0, center.y()),
        QPointF(center.x()+edge/2.0, center.y()+edge)
    };
    QPointF door[] = {
        QPointF(center.x(), center.y()+edge),
        QPointF(center.x(), center.y()+edge/2.0),
        QPointF(center.x()-edge/3.0, center.y()+edge/2.0),
        QPointF(center.x()-edge/3.0, center.y()+edge)
    };

    QPointF mid_left_triangle = (QPointF(center.x()-edge/2.0, center.y()) + QPointF(center.x(), center.y()-edge/2.0))/2;
    QPointF quad_left_triangle = (QPointF(center.x()-edge/2.0, center.y()) + mid_left_triangle)/2;
    QPointF chimney[] = {
        mid_left_triangle,
        QPointF(mid_left_triangle.x(), center.y()-9*edge/20.0),
        QPointF(quad_left_triangle.x(), center.y()-9*edge/20.0),
        quad_left_triangle

    };

    QPen pen;
    pen.setWidth(5);
    pen.setColor("#7878f8");
    painter.setPen(pen);

    painter.drawPolygon(house, 5);
    painter.drawPolyline(door, 4);
    painter.drawPolyline(chimney, 4);
    painter.drawRect(center.x()+2*edge/10.0, center.y()+2*edge/10.0, 2*edge/10.0, 2*edge/10.0);
}

void graphics::drawExercise4(QPainter &painter)
{
    int edge = qMin(width(), height())/8;
    int x_delta = 0;
    int y_delta = 0;
    if (width() > height()) x_delta = qAbs(width() - height())/2;
    else y_delta = qAbs(width() - height())/2;
    for (int i = 0; i < 8; ++i){
        for (int j = 0; j < 8; ++j){
            (i + j)%2 ? painter.setBrush(QColor("#4b4848")) : painter.setBrush(QColor("#dbd6d6"));
            painter.drawRect(i*edge + x_delta, j*edge + y_delta, edge, edge);
        }
    }
}
