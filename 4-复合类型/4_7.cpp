#include <iostream>

//construct struct
struct pizza
{
    char name[20];
    float diameter;
    float weight;
};

int main()
{
    using namespace std;

    pizza example;
    cout << "Enter the name of Pizza company: ";
    cin.getline(example.name, 20);
    cout << "Enter the diameter of Pizza: ";
    cin >> example.diameter;
    cout << "Enter the weight of Pizza: ";
    cin >> example.weight;

    cout << "The name of pizza company is: " << example.name << endl;
    cout << "The diameter of pizza is: " << example.diameter << endl;
    cout << "The weight od pizza is: " << example.weight << endl;

    return 0;
}
