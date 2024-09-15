/*
Name: Lab3_Welton
Author: Christopher Welton
Description: This cpp file takes a four digit year as user input, and tells the user if it is a valid leap year. 
*/

#include<iostream>

using namespace std;

int main() {
    int year;
    bool leapYear = false;
    cout << "Please enter a year: " << endl;
    cin >> year;

    if ( (year < 1582 && year % 4 == 0) || (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ) {
        leapYear = true; 
    } 

    cout << "The year " << year << (leapYear ? " is" : " is not") << " a leap year!" << endl;

    return 0;
}