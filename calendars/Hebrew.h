#include <ostream>
#include "calendar_defs.h"

class Hebrew : public Calendar {
public:
    Hebrew(int m, int d, int y): Calendar(m,d,y) {};
    Hebrew(int d);

    operator int();

    int HebrewLeapYear(int year);
    int LastMonthOfHebrewYear(int year);
    int HebrewCalendarElapsedDays(int year);
    int DaysInHebrewYear(int year);
    int LongHeshvan(int year);
    int ShortKislev(int year);
    int LastDayOfHebrewMonth(int month, int year);
};