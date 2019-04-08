#include <iostream>

int main()
{
    using namespace std;
    const int day_to_hour = 24;
    const int hour_to_minute = 60;
    const int minute_to_second = 60;

    long long total_seconds;

    cout << "Enter the number of seconds: ";
    cin >> total_seconds;
    int seconds = total_seconds % minute_to_second;
    int total_minutes = total_seconds / minute_to_second;
    int minutes = total_minutes % hour_to_minute;
    int total_hours = total_minutes / hour_to_minute;
    int hours = total_hours % day_to_hour;
    int days = total_hours / day_to_hour;

    cout << total_seconds << " seconds = " << days << " days, " << hours
         << " hours, " << minutes << " minutes, " << seconds << " seconds.";

    return 0;
}
