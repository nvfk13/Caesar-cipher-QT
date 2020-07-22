#ifndef DIALOG_H
#define DIALOG_H
#include "header_cipher.h"

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();


private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::Dialog *ui;
    Cipher obj;
};

#endif // DIALOG_H
