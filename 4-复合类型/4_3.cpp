#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char first_name[80];
    char last_name[20];
    cout << "Enter your first name: ";
    cin.getline(first_name, 20);
    cout << "Enter your last name: ";
    cin.getline(last_name, 20);
    strcat(first_name, ", ");
    strcat(first_name, last_name);

    cout << "Here's the information in a single string: " << first_name;

    return 0;
}
