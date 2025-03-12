#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
#include <cmath>



class Date
{
    //Q_OBJECT
public:
    Date();
    int stringIntoNumber(std::string str);
    int Duration(Date* date);
    Date* NextDay();
    Date* PreviousDay();
    bool isLeap(std::string str);
    void setFullDate(std::string str);
    std::string getFullDate();
    void setDate1(std::string str);
    std::string getDate1();
    void setDate2(std::string str);
    std::string getDate2();
    void setleapYear(bool leapYear);
    bool getleapYear();
private:
    bool leapYear;
    int day;
    int month;
    int year;
    int dayInterval;
    std::string FullDate;
    std::string Date1;
    std::string Date2;
    Date* date = nullptr; // в каждом методе один класс просто пререзаписываю поля

};

#endif // DATE_H
