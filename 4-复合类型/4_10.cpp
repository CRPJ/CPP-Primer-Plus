#include <iostream>
#include <array>

int main()
{
    using namespace std;
    array<double, 3> grade;
    cout << "Please enter your first 40-meter race result: ";
    cin >> grade[0];
    cout << "Please enter your second 40-meter race result: ";
    cin >> grade[1];
    cout << "Please enter your second 40-meter race result: ";
    cin >> grade[2];

    double average_grade;
    average_grade = (grade[0] + grade[1] + grade[2]) / 3;

    cout << "Your average grade in 40-meter race is: " << average_grade;

    return 0;
}
