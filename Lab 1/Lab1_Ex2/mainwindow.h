#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_BtnDrawSimple_clicked();

    void on_BtnDrawMultiLines_clicked();

    void on_BtnDrawColorExample_clicked();

    void on_BtnDrawPatternExample_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
