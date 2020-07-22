#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->textEdit;
}
Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    obj.putText(ui->plainText->toPlainText());
    obj.convert_Plain();
    ui->chipertext->setPlainText(obj.fixChiper());
}

void Dialog::on_pushButton_2_clicked()
{
    obj.setGeser((ui->textEdit->toPlainText()).toInt());
}

