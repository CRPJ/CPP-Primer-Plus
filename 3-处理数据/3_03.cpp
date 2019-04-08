#include <iostream>

int main()
{
    using namespace std;
    const double degree_to_minute = 60.0;
    const double minute_to_second = 60.0;
    int degrees;
    int minutes;
    int seconds;

    //数据输入
    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes in arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;

    double final_degree = degrees + minutes / degree_to_minute
    + seconds / degree_to_minute / minute_to_second;

    cout << degrees << " degrees, " << minutes << " minutes, "
         << seconds << " seconds = " << final_degree << " degress.";

    return 0;
}
