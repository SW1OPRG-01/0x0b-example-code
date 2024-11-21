#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
  public:
    Date(int year, int month, int day);
    void toNextDate();
    std::string toString();
};

#endif