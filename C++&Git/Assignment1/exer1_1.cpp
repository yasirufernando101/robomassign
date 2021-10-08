// I/O stream library from std, for using cin and cout
#include <iostream>
using namespace std;

struct Date {
    int day;
    int hour;
    int min; 
    int sec;
};

// the starting of program
int main()
{
    struct Date t;
    // the input, number of seconds
    long secRaw = 0;

    // the output, how many days, hours, minutes, seconds
    t.day = 0;
    t.hour = 0;
    t.min = 0;
    t.sec = 0;

    // get input from the console
    cout << "Enter the number of seconds: " << endl;
    cin >> secRaw;

    // create temporary variable
    int n = secRaw;
    
    // Write your code under this line */
    t.day = n / (24 * 3600);
    n = n % (24 * 3600);
    t.hour = n / 3600;
    n = n % 3600;
    t.min = n / 60;
    n = n % 60;
    t.sec = n;
    // Write your code above this line

    // output the result
    cout << secRaw << " seconds = " << t.day << " days, " << t.hour << " hours, " << t.min << " mins, " << t.sec << " secs." << endl;

    // end of the program
    return 0;
}
/*
uint8_t: 0-255
int8_t: 256-255
int16_t - 65536-65535

difference is the data type
2022 - int
/*