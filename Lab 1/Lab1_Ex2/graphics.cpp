#include "graphics.h"

#include <QPainter>

graphics::graphics(QWidget *parent) : QWidget(parent)
{

}

void graphics::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    switch (mode){
    case 1:
        DrawLines(painter);
        break;
    case 2:
        DrawMultiLines(painter);
        break;
    case 3:
        DrawColorExample(painter);
        break;
    case 4:
        DrawPatternExample(painter);
        break;
    }
}

void graphics::DrawLines(QPainter& painter)
{
    painter.setPen(Qt::red);
    painter.drawLine(10, 10, 50, 50);
}

void graphics::DrawMultiLines(QPainter& painter)
{
    QPen pen(Qt::black, 2, Qt::SolidLine);
    painter.setPen(pen);
    painter.drawLine(20, 40, 250, 40);

    pen.setStyle(Qt::DashLine);
    painter.setPen(pen);
    painter.drawLine(20, 80, 250, 80);

    pen.setStyle(Qt::DashDotLine);
    painter.setPen(pen);
    painter.drawLine(20, 120, 250, 120);

    pen.setStyle(Qt::DotLine);
    painter.setPen(pen);
    painter.drawLine(20, 160, 250, 160);

    pen.setStyle(Qt::DashDotDotLine);
    painter.setPen(pen);
    painter.drawLine(20, 200, 250, 200);
}

void graphics::DrawColorExample(QPainter& painter)
{
    painter.setPen(QColor("#d4d4d4"));

    painter.setBrush(QBrush("#c56c00"));
    painter.drawRect(10, 15, 90, 60);

    painter.setBrush(QBrush("#1ac500"));
    painter.drawRect(130, 15, 90, 60);

    painter.setBrush(QBrush("#539e47"));
    painter.drawRect(250, 15, 90, 60);

    painter.setBrush(QBrush("#004fc5"));
    painter.drawRect(10, 105, 90, 60);

    painter.setBrush(QBrush("#c50024"));
    painter.drawRect(130, 105, 90, 60);

    painter.setBrush(QBrush("#9e4757"));
    painter.drawRect(250, 105, 90, 60);

    painter.setBrush(QBrush("#5f3b00"));
    painter.drawRect(10, 195, 90, 60);

    painter.setBrush(QBrush("#4c4c4c"));
    painter.drawRect(130, 195, 90, 60);

    painter.setBrush(QBrush("#785f36"));
    painter.drawRect(250, 195, 90, 60);
}

void graphics::DrawPatternExample(QPainter& painter)
{
    painter.setPen(Qt::NoPen);

    painter.setBrush(Qt::HorPattern);
    painter.drawRect(10, 15, 90, 60);

    painter.setBrush(Qt::VerPattern);
    painter.drawRect(130, 15, 90, 60);

    painter.setBrush(Qt::CrossPattern);
    painter.drawRect(250, 15, 90, 60);

    painter.setBrush(Qt::Dense7Pattern);
    painter.drawRect(10, 105, 90, 60);

    painter.setBrush(Qt::Dense6Pattern);
    painter.drawRect(130, 105, 90, 60);

    painter.setBrush(Qt::Dense5Pattern);
    painter.drawRect(250, 105, 90, 60);

    painter.setBrush(Qt::BDiagPattern);
    painter.drawRect(10, 195, 90, 60);

    painter.setBrush(Qt::FDiagPattern);
    painter.drawRect(130, 195, 90, 60);

    painter.setBrush(Qt::DiagCrossPattern);
    painter.drawRect(250, 195, 90, 60);
}
