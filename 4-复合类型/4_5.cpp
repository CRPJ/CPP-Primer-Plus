#include <iostream>

//construct CandyBar struct
struct CandyBar
{
    char name[20];
    float weight;
    int calories;
};

int main()
{
    using namespace std;

    //Create and initialize a Candybar variable named snack
    CandyBar snack =
    {
        "Mocha Munch",
        2.3,
        350
    };

    //print snack's attributes
    cout << "The name of snack is: " << snack.name << endl;
    cout << "The weight of snack is: " << snack.weight << endl;
    cout << "The calories of snack is: " << snack.calories << endl;

    return 0;
}
