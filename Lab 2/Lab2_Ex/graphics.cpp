#include "graphics.h"

#include <QtMath>
#include <QPainter>

graphics::graphics(QWidget *parent) : QWidget(parent)
{

}

void graphics::paintEvent(QPaintEvent *){
    QPainter painter(this);

    switch(mode){
    case 1:
        ngansao(painter);
        break;
    case 2:
        ngugiac(painter);
        break;
    case 3:
        bonghoa(painter);
        break;
    case 4:
        thaicuc(painter);
        break;
    case 5:
        thaicuc_mau(painter);
        break;
    case 6:
        quocky(painter);
        break;
    case 7:
        ngoilang(painter);
        break;
    }
}

void graphics::ngansao(QPainter &painter){
    painter.setPen(Qt::NoPen);
    for (int i = 1; i <= 1000; ++i){
        painter.setBrush(QColor(random(255), random(255), random(255)));
        painter.drawEllipse(random(1000), random(1000), 3, 3);
    }
}

void graphics::ngugiac(QPainter &painter){
    painter.setPen(Qt::red);
    QPolygon polygon;
    int x = width()/2;
    int y = height()/2;
    QPoint p(x, y-100);
    QPoint c(x, y);
    polygon << QPoint(p.x(), p.y());
    for (int i = 1; i < 5; ++i){
        QPoint p_new = quay(p, c, i*72);
        polygon << QPoint(p_new.x(), p_new.y());
    }
    painter.drawPolygon(polygon);

    painter.setPen(Qt::blue);
    painter.drawLine(polygon.value(0), polygon.value(3));
    painter.drawLine(polygon.value(0), polygon.value(2));
    painter.drawLine(polygon.value(1), polygon.value(3));
    painter.drawLine(polygon.value(2), polygon.value(4));
    painter.drawLine(polygon.value(1), polygon.value(4));
}

void graphics::bonghoa(QPainter &painter){
    painter.setBrush(QColor(random(255), random(255), random(255)));
    int x = random(width());
    int y = random(height());

    int d = 100;
    int r = d/3;

    QPoint c(x, y);
    QPoint p(x, y-r);
    for (int i = 1; i <= 5; ++i){
        QPoint p_new = quay(p, c, i*72);
        painter.drawEllipse(p_new, r, r);
    }
}

void graphics::thaicuc(QPainter &painter){

}

void graphics::thaicuc_mau(QPainter &painter){

}

void graphics::quocky(QPainter &painter){

}

void graphics::ngoilang(QPainter &painter){

}

QPoint graphics::tinhtien(QPoint p, int tx, int ty){
    return QPoint(
        p.x()+tx,
        p.y()+ty);
}

QPoint graphics::quay(QPoint p, QPoint c, int delta){
    qreal deg = delta * 3.14 / 180;
    return QPoint(
        c.x()
        + (p.x()-c.x())*qCos(deg)
        - (p.y()-c.y())*qSin(deg)
    ,
        c.y()
        + (p.x()-c.x())*qSin(deg)
        + (p.y()-c.y())*qCos(deg));
}

QPoint graphics::tile(QPoint p, QPoint c, int sx, int sy){
    return QPoint(
        p.x()*sx + c.x()*(1-sx),
        p.y()*sy - c.y()*(1-sy));
}

QPoint graphics::doixungx(QPoint p){
    return QPoint(
        p.x(),
        -p.y());
}

QPoint graphics::doixungy(QPoint p){
    return QPoint(
        -p.x(),
        p.y());
}

int graphics::random(int n){
    return rand() % n;
}
