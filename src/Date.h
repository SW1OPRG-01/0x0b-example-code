#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
  public:
    Date(int year, int monnth, int day);
    void toNextDate();
    std::string toString();
  private: 
    int year;
    int month;
    int day;
};

#endif