#include <iostream>
using namespace std;

int  main()
{
    int time = 0;
    int hour = 0;
    int min = 0;
    int sec = 0;

    cout << "Enter a time in seconds: ";
    cin >> time;

    hour = time/3600;
    time = time%3600;
    min = time/60;
    time = time%60;
    sec = time;
    cout<< fixed <<"\nThe time is: 0"<<hour<<":"
        <<min<<":"<<sec;

    return 0;
}