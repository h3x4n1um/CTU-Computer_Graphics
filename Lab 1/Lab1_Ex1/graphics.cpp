#include "graphics.h"

#include <QPainter>

graphics::graphics(QWidget *parent) : QWidget(parent)
{
}

void graphics::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawRect(0, 0, 100, 100);
}
