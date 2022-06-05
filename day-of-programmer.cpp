
/*
    https://www.hackerrank.com/challenges/day-of-the-programmer/problem?isFullScreen=true
    Complete the dayOfProgrammer function in the editor below. It should return a string representing the date of the 256th day of the year given.

    dayOfProgrammer has the following parameter(s):

    year: an integer

    Print the full date of Day of the Programmer during year  in the format dd.mm.yyyy,
    where dd is the two-digit day, mm is the two-digit month, and yyyy is .
    eg. 13.09.2017

*/
#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    string result = "13.09." + std::to_string(year);

    if (year == 1918) {
        result = "26.09.1918";
    } else if (((year <= 1917) && (year%4 == 0)) || ((year%400 == 0) || ((year%4 ==0) & (year%100 != 0)))) {
        result = "12.09." + std::to_string(year);
    }

    cout << result;

    return 0;
}