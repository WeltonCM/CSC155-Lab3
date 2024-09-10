
#include<iostream>

using namespace std;

int main() {
    int year;
    bool leapYear = false;
    cout << "Please enter a year: " << endl;
    cin >> year;

    // leap year if: 
    // divisible by 4
    // not a leap year if divisible by 100
    // is a leap year if divisible by 400
    // 1500 is a leap year
    if ( (year < 1582 && year % 4 == 0) || (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ) {
        leapYear = true; 
    }
    // printf("The year %d %s a leap year", year, (leapYear == true ? "is " : "is not "));
    return 0;
}