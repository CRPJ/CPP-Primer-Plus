
#include <iostream>

struct pizza
{
    char name[20];
    float diameter;
    float weight;
};

int main()
{
    using namespace std;

    pizza * example = new pizza;
    cout << "Enter pizza's diameter before enter its name: ";
    cin >> example->diameter;
    cout << "Enter pizza's name: ";
    cin >> (*example).name;
    cout << "Enter pizza's weight: ";
    cin >> (*example).weight;

    cout << "Pizza's name is: " << example->name;
    cout << "Pizza's diameter is: " << (*example).diameter;
    cout << "Pizza's weight is: " << (*example).weight;

    return 0;
}
