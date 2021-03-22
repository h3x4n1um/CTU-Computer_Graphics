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
    void on_Btn_ngansao_clicked();

    void on_Btn_ngugiac_clicked();

    void on_Btn_bonghoa_clicked();

    void on_Btn_thaicuc_clicked();

    void on_Btn_quocky_clicked();

    void on_Btn_ngoilang_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
