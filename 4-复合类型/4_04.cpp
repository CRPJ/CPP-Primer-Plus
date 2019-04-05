#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string first_name;
    string last_name;
    cout << "Enter your first name: ";
    getline(cin, first_name);
    cout << "Enter your last name: ";
    getline(cin, last_name);
    last_name.append(", ");
    last_name.append(first_name);
    cout << "Here's the information in a single string: " << last_name;

    return 0;
}
