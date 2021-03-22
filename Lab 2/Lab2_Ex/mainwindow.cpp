#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Btn_ngansao_clicked()
{
    ui->GraphicsPresenter->mode = 1;
    ui->GraphicsPresenter->repaint();
    ui->GraphicsPresenter->mode = 0;
}

void MainWindow::on_Btn_ngugiac_clicked()
{
    ui->GraphicsPresenter->mode = 2;
    ui->GraphicsPresenter->repaint();
    ui->GraphicsPresenter->mode = 0;
}

void MainWindow::on_Btn_bonghoa_clicked()
{
    ui->GraphicsPresenter->mode = 3;
    ui->GraphicsPresenter->repaint();
    ui->GraphicsPresenter->mode = 0;
}

void MainWindow::on_Btn_thaicuc_clicked()
{
    ui->GraphicsPresenter->mode = 5;
    ui->GraphicsPresenter->repaint();
    ui->GraphicsPresenter->mode = 0;
}

void MainWindow::on_Btn_quocky_clicked()
{
    ui->GraphicsPresenter->mode = 6;
    ui->GraphicsPresenter->repaint();
    ui->GraphicsPresenter->mode = 0;
}

void MainWindow::on_Btn_ngoilang_clicked()
{
    ui->GraphicsPresenter->mode = 7;
    ui->GraphicsPresenter->repaint();
    ui->GraphicsPresenter->mode = 0;
}
