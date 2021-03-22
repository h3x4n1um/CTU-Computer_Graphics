#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <QWidget>

class graphics : public QWidget
{
    Q_OBJECT
public:
    explicit graphics(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *);

    void ngansao(QPainter &painter);
    void ngugiac(QPainter &painter);
    void bonghoa(QPainter &painter);
    void thaicuc(QPainter &painter);
    void thaicuc_mau(QPainter &painter);
    void quocky(QPainter &painter);
    void ngoilang(QPainter &painter);

    QPoint tinhtien(QPoint p, int tx, int ty);
    QPoint quay(QPoint p, QPoint c, int delta);
    QPoint tile(QPoint p, QPoint c, int sx, int sy);
    QPoint doixungx(QPoint p);
    QPoint doixungy(QPoint p);

    int random(int n);

    int mode = 0;

signals:

};

#endif // GRAPHICS_H
