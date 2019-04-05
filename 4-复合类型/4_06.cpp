
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

    //结构体数组不能声明之后再初始化，必须声明的同时初始化
    CandyBar example[3] =
    {
        {"Mocha Munch", 2.3, 350},
        {"Oreo", 1.01, 30},
        {"Candy", 0.11, 11}
    };
    //example[0] = {"Mocha Munch", 2.3, 350};
    //example[1] = {"Oreo", 1.01, 30};
    //example[2] = {"Candy", 0.11, 11};

    cout << "example[0].name = " << example[0].name << endl;
    cout << "example[0].weight = " << example[0].weight << endl;
    cout << "example[0].calories = " << example[0].calories << endl;

    cout << "example[1].name = " << example[1].name << endl;
    cout << "example[1].weight = " << example[1].weight << endl;
    cout << "example[1].calories = " << example[1].calories << endl;

    cout << "example[2].name = " << example[2].name << endl;
    cout << "example[2].weight = " << example[2].weight << endl;
    cout << "example[2].calories = " << example[2].calories << endl;

    return 0;
}
