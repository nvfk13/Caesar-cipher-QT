#include <QString>
#ifndef HEADER_CIPHER_H
#define HEADER_CIPHER_H

class Cipher{
    QString text;
    int geser;
public:
    Cipher(QString text = "" , int geser = 5);
    void putText(QString text);
    void setGeser(int geser);
    void convert_Plain();
    void convert_Cipher();
    QString fixChiper();
};

#endif // HEADER_CIPHER_H
