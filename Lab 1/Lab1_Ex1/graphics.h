#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <QWidget>

class graphics : public QWidget
{
    Q_OBJECT
public:
    explicit graphics(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *);

signals:

};

#endif // GRAPHICS_H
