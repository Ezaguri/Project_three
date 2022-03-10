#include <iostream>

using namespace std;

class Date
{
private:
    int month, day, year;
public:
    // Setter
    Date()
    {
        month = 1;
        day = 1;
        year = 1900;
    }
    Date(int m, int d, int y)
    {
        month = m;
        day = d;
        year = y;
    }
    void setMonth(int m) {
        month = m;
    }
    // Getter
    int getMonth() {
        return month;
    }
    void setDay(int d) {
        day = d;
    }
    // Getter
    int getDay() {
        return day;
    }
    void setYear(int y) {
        year = y;
    }
    // Getter
    int getYear() {
        return year;
    }
    bool isLeapYear(int Year)
    {
        if ((year % 400 == 0 || year % 100 != 0) && (year % 4 == 0))
            return true;

        else
            return false;
    }
    string monthName(int Month)
    {
        string str;
        switch (Month)
        {
        case 1:
            str = "January";
            break;
        case 2:
            str = "Febuary";
            break;
        case 3:
            str = "March";
            break;
        case 4:
            str = "April";
            break;
        case 5:
            str = "May";
            break;
        case 6:
            str = "June";
            break;
        case 7:
            str = "July";
            break;
        case 8:
            str = "August";
            break;
        case 9:
            str = "September";
            break;
        case 10:
            str = "October";
            break;
        case 11:
            str = "November";
            break;
        case 12:
            str = "December";
            break;
        default:
            str = "invalid";


        }
        return str;
    }
    void display()
    {
        cout << month << "/" << day << "/" << year << "\n";
        cout << monthName(month) <<" "<< day << ", " << year << "\n";
        cout << day <<" "<< monthName(month) <<" "<< year << "\n";
        if (isLeapYear(year))
        {
            cout << year << " is a leap year";
        }
        else
        {
            cout << year << " is not a leap year";
        }
    }

};
int main()
{
    Date d1;
    d1.setMonth(12);
    d1.setDay(25);
    d1.setYear(2012);
    d1.display();
    cout << "\n\n";
    Date d2(6, 25, 2000);
    d2.display();
    cout << "\n";
    return 0;
}