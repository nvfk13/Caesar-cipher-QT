#include "header_cipher.h"
Cipher::Cipher(QString text  , int geser)
{
    this->text = text;
    this->geser = geser;
}
void Cipher::putText(QString text)
{
    this->text = text;
}
void Cipher::setGeser(int geser)
{
    this->geser = geser;
}
void Cipher::convert_Plain()
{
    for (int i = 0; i < text.length(); i++)
    {
        if((text[i] < 'A' || text[i] > 'Z') && (text[i] < 'a' || text[i] > 'z'))
                    continue;
        if((text[i] >=  'A' && text[i] <= 'Z') || (text[i] >=  'a' && text[i] <= 'z'))
            text[i] = QChar(text[i].toLatin1() + geser);
        if(text[i] > 'Z' && text[i] < 'a' || text[i] > 'z')
            text[i] = QChar(text[i].toLatin1() - 26);
    }
}
void Cipher::convert_Cipher()
{
    for (int i = 0; i < text.length(); i++)
    {
        if((text[i] < 'A' || text[i] > 'Z') && (text[i] < 'a' || text[i] > 'z'))
                    continue;
        if((text[i] >=  'A' && text[i] <= 'Z') || (text[i] >=  'a' && text[i] <= 'z'))
            text[i] = QChar(text[i].toLatin1() -  geser);
        if(text[i] < 'A'   || text[i] < 'a' && text[i] > 'Z')
            text[i] = QChar(text[i].toLatin1() + 26);
    }
}
QString Cipher::fixChiper()
{
    return text;
}
