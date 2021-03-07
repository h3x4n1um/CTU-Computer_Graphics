#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <QWidget>

class graphics : public QWidget
{
    Q_OBJECT
public:
    explicit graphics(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *);
    void DrawLines(QPainter& painter);
    void DrawMultiLines(QPainter& painter);
    void DrawColorExample(QPainter& painter);
    void DrawPatternExample(QPainter& painter);

    int mode = 0;

signals:

};

#endif // GRAPHICS_H
