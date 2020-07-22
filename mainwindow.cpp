#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "dialog_2.h"

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


void MainWindow::on_pushButton_clicked()
{
//    Dialog enkripsi;
//    enkripsi.setModal(true);
//    enkripsi.exec();
   //hide();
    enkripsi = new Dialog(this);
    enkripsi->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    dekripsi = new Dialog_2(this);
    dekripsi->show();
}
