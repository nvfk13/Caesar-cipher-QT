#include "dialog_2.h"
#include "ui_dialog_2.h"

Dialog_2::Dialog_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_2)
{
    ui->setupUi(this);
    ui->textEdit;
}

Dialog_2::~Dialog_2()
{
    delete ui;
}

void Dialog_2::on_pushButton_clicked()
{
    obj.putText(ui->chipertext->toPlainText());
    obj.convert_Cipher();
    ui->plaintext->setPlainText(obj.fixChiper());
}

void Dialog_2::on_pushButton_2_clicked()
{
    obj.setGeser((ui->textEdit->toPlainText()).toInt());
}
