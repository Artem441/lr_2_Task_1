#include "date.h"

#include <QMessageBox>
#include <QMainWindow>

Date::Date() {}

int Date::stringIntoNumber(std::string str)
{
    std::string PartOfDate;
    std::string Month;
    int Sum = 0;
    int buffer = 0;
    int age;
    int month;
    bool isLeap = false;
    for (int i = 0; i < str.length(); ++i) {
        if ((str[i] == '.') && (buffer == 0)) {
            ++i;
            Sum += std::stoi(PartOfDate);
            //qDebug()<<PartOfDate;
            PartOfDate.clear();
            ++buffer;

        }
        else if ((str[i] == '.') && (buffer == 1)) { // можно ли было вручную как-то красивее сделать
            ++i;
            ++buffer;
            Month = PartOfDate;
            month = std::stoi(Month);
            //qDebug()<<PartOfDate;
            PartOfDate.clear();

        }
        else if ((buffer == 2) && (i == str.length()-1)) {
            PartOfDate += str[i];
            //qDebug()<<PartOfDate;
            age = std::stoi(PartOfDate);
            if (age % 4 == 0) {
                isLeap = true;
            }
            break;
        }
        PartOfDate += str[i];
    }
    buffer = age / 4;
    Sum += buffer; // учет 1 доп дня в високосном году
    Sum += age * 365;// осталось учесть месяц
    if (month > 1) {
        Sum += 31;
    }
    if (month > 2) {
        if (isLeap == true) {
            Sum += 29;
        }
        else {
            Sum += 28;
        }
    }
    if (month > 3) {
        Sum += 30;
    }
    if (month > 4) {
        Sum += 31;
    }
    if (month > 5) {
        Sum += 30;
    }
    if (month > 6) {
        Sum += 31;
    }
    if (month > 7) {
        Sum += 31;
    }
    if (month > 8) {
        Sum += 30;
    }
    if (month > 9) {
        Sum += 31;
    }
    if (month > 10) {
        Sum += 30;
    }
    if (month > 11) {
        Sum += 30;
    }
    return Sum;
}

int Date::Duration(Date* date)
{
    int duration;
    int date1 = stringIntoNumber(date->getDate1());
    int date2 = stringIntoNumber(date->getDate2());
    duration = abs(date1-date2);
    return duration;
}

Date* Date::NextDay()
{
    std::string PartOfDate, str = this->FullDate;
    int buffer = 0;
    int age;
    int month;
    int day;
    bool leap = this->leapYear;
    date = new Date;
    qDebug() << str;
    for (int i = 0; i < str.length(); ++i) {
        if ((str[i] == '.') && (buffer == 0)) {
            ++i;
            day = std::stoi(PartOfDate);
            PartOfDate.clear();
            ++buffer;

        }
        else if ((str[i] == '.') && (buffer == 1)) { // можно ли было вручную как-то красивее сделать
            ++i;
            ++buffer;
            month = std::stoi(PartOfDate);
            PartOfDate.clear();

        }
        else if ((buffer == 2) && (i == str.length()-1)) {
            PartOfDate += str[i];
            age = std::stoi(PartOfDate);
            break;
        }
        PartOfDate += str[i];
    }
    if (((month == 1) || (month == 3) || (month == 5) || (month == 7)
        || (month == 8) || (month == 10))
        && (day == 31))
    {
        month += 1;
        day = 0;
    }
    else if ((month == 12) && (day == 31)) {
        age += 1;
        month = 0;
        day = 0;
    }
    else if (((month == 4) || (month == 6) || (month == 9) || (month == 11)) && (day == 30)) {
        day = 0;
        month += 1;
    }
    else if ((month == 2) && (leap == true) && (day == 29)) {
        day = 0;
        month += 1;
    }
    else if ((month == 2) && (leap == false) && (day == 28)) {
        day = 0;
        month += 1;
    }
    else {
        day += 1;
    }
    std::string result;
    PartOfDate = std::to_string(day);
    if (day <= 9) {
        result += '0';
    }
    result += PartOfDate;
    result += '.';
    if (month <= 9) {
        result += '0';
    }
    PartOfDate = std::to_string(month);
    result += PartOfDate;
    result += '.';
    qDebug() << age;
    if (age <= 9) {
        result += "000";
    }
    else if (age <= 99) {
        result += "00";
    }
    else if (age <= 999) {
        result += "0";
    }
    result += std::to_string(age);
    date->FullDate = result;
    return date;
    delete date;
}

Date* Date::PreviousDay()
{
    std::string PartOfDate,str = this->FullDate;
    bool leap = this->leapYear;
    int buffer = 0;
    int age;
    int month;
    int day;
    date = new Date;
    qDebug() << str;
    for (int i = 0; i < str.length(); ++i) {
        if ((str[i] == '.') && (buffer == 0)) {
            ++i;
            day = std::stoi(PartOfDate);
            PartOfDate.clear();
            ++buffer;

        }
        else if ((str[i] == '.') && (buffer == 1)) { // можно ли было вручную как-то красивее сделать
            ++i;
            ++buffer;
            month = std::stoi(PartOfDate);
            PartOfDate.clear();

        }
        else if ((buffer == 2) && (i == str.length()-1)) {
            PartOfDate += str[i];
            age = std::stoi(PartOfDate);
            break;
        }
        PartOfDate += str[i];
    }

    if (((month == 2) || (month == 4) || (month == 6) || (month == 8) || (month == 9) || (month == 11))
        && (day == 1))
    {
        month -= 1;
        day = 31;
    }
    else if ((month == 1)  && (day == 1)) {
        day = 1;
        year -= 1;
        month = 0;
    }
    else if ((month == 3)  && (day == 1) && (leapYear == true))   {
        day = 29;
        month -= 1;
    }
    else if ((month == 3)  && (day == 1) && (leapYear == false))   {
        day = 28;
        month -= 1;
    }
    else if (((month == 5) || (month == 7) || (month == 10) || (month == 12))
               && (day == 1))
    {
        month -= 1;
        day = 30;
    }
    else {
        day -= 1;
    }
    std::string result;
    PartOfDate = std::to_string(day);
    if (day <= 9) {
        result += '0';
    }
    result += PartOfDate;
    result += '.';
    if (month <= 9) {
        result += '0';
    }
    PartOfDate = std::to_string(month);
    result += PartOfDate;
    result += '.';
    qDebug() << age;
    if (age <= 9) {
        result += "000";
    }
    else if (age <= 99) {
        result += "00";
    }
    else if (age <= 999) {
        result += "0";
    }
    result += std::to_string(age);
    date->FullDate = result;
    return date;
    delete date;
}

bool Date::isLeap(std::string str)
{
    int buffer = 0;
    std::string year;
    for (int i = 0; i < str.length(); ++i) {
        if (buffer == 2) {
            year += str[i];
        }
        if (str[i] == '.') {
            ++buffer;
        }
    }
    buffer = std::stoi(year);
    if (buffer % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
}

void Date::setFullDate(std::string str)
{
    this->FullDate = str;
}

std::string Date::getFullDate()
{
    return this->FullDate;
}

void Date::setDate1(std::string str)
{
    this->Date1 = str;
}

std::string Date::getDate1()
{
    return this->Date1;
}

void Date::setDate2(std::string str)
{
    this->Date2 = str;
}

std::string Date::getDate2()
{
    return this->Date2;
}

void Date::setleapYear(bool leap)
{
    this->leapYear = leap;
}

bool Date::getleapYear()
{
    return this->leapYear;
}

short Date::WeekNumber()
{
    QDate currentDate = QDate::currentDate();
    return currentDate.weekNumber();
}

int Date::DaysTillYourBithday(Date bithdaydate)
{
    // тукущую дату нужно засунуть в Qstring
    QDate currentDate = QDate::currentDate();
    QString dateString = currentDate.toString("dd.MM.yyyy");
    std::string result = dateString.toStdString();
    int date1 = stringIntoNumber(result);
    int date2 = stringIntoNumber(bithdaydate.getFullDate());
    qDebug() << result;
    qDebug() << date1;
    qDebug() << date2;

    int a = abs(date1 - date2);

    return a;
}

void Date::setDay(int _day)
{
    this->day = _day;
}




