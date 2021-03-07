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


void MainWindow::on_BtnExcersise1_clicked()
{
    ui->ExercisesPresenter->mode = 1;
    ui->ExercisesPresenter->repaint();
    ui->ExercisesPresenter->mode = 0;
}

void MainWindow::on_BtnExcersise2_clicked()
{
    ui->ExercisesPresenter->mode = 2;
    ui->ExercisesPresenter->repaint();
    ui->ExercisesPresenter->mode = 0;
}

void MainWindow::on_BtnExcersise3_clicked()
{
    ui->ExercisesPresenter->mode = 3;
    ui->ExercisesPresenter->repaint();
    ui->ExercisesPresenter->mode = 0;
}

void MainWindow::on_BtnExcersise4_clicked()
{
    ui->ExercisesPresenter->mode = 4;
    ui->ExercisesPresenter->repaint();
    ui->ExercisesPresenter->mode = 0;
}
