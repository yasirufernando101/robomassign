// I/O stream library from std, for using cin and cout
#include <iostream>
using namespace std;

struct Date {
    int hour;
    int min;
    int sec;
};
// the starting of program
int main()
{
    struct Date t;
    // the input, a float number of hours
    float hourRaw = 0;

    // the output, how many hours, minutes, seconds
    t.hour = 0, t.min = 0, t.sec = 0;

    // get input from the console
    cout << "Enter the float number of hours: " << endl;
    cin >> hourRaw;

    /* Write your code under this line */
    t.hour = hourRaw;
    t.min = (hourRaw - t.hour) * 60;
    t.sec = (((hourRaw - t.hour)*60)-t.min);
    /* Write your code above this line */

    // output the result
    cout << hourRaw << " hours = " << t.hour << " hours, " << t.min << " mins, " << t.sec << " secs." << endl;

    // end of the program
    return 0;
}