#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <QWidget>

class graphics : public QWidget
{
    Q_OBJECT
public:
    explicit graphics(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *);
    void drawExercise1(QPainter& painter);
    void drawExercise2(QPainter& painter);
    void drawExercise3(QPainter& painter);
    void drawExercise4(QPainter& painter);

    int mode = 0;
signals:

};

#endif // GRAPHICS_H
