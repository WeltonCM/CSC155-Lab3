/*
Name: Exercise3_Welton
Author: Christopher Welton
Description: This program reads a .txt file for input, then creates and outputs the results to an 'output.txt' file. 
*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    ifstream inputFile;
    ofstream outputFile;

    inputFile.open("input.txt");
    outputFile.open("output.txt");

    string line;

    if(inputFile.is_open() && outputFile.is_open()) {
        
        while(getline(inputFile, line)){
            bool leapYear = false;
            int year = stoi(line);
            if ( (year < 1582 && year % 4 == 0) || (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ) {
                leapYear = true;
            } 

            outputFile << line << (leapYear ? " is" : " is not") << " a leap year." << "\n";
        }
    } else {
        cout << "Error opening the input and/or output files." << endl;
    }
    inputFile.close();
    outputFile.close();

    return 0;
}