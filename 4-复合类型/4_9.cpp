#include <iostream>
#include <string>

struct CandyBar
{
    std::string name;
    float weight;
    int calories;
};

int main()
{
    using namespace std;
    CandyBar * example = new CandyBar [3];

    //初始化结构体数组时加上结构体名称
    example[0] = CandyBar{"Mocha Munch", 2.3, 350};
    example[1] = CandyBar{"Oreo", 1.01, 30};
    example[2] = CandyBar{"Candy", 0.11, 11};

    cout << "example[0].name = " << example[0].name << endl;
    cout << "example[0].weight = " << example[0].weight << endl;
    cout << "example[0].calories = " << example[0].calories << endl;

    cout << "example[1].name = " << example[1].name <<endl;
    cout << "example[1].weight = " << example[1].weight << endl;
    cout << "example[1].calories = " << example[1].calories << endl;\

    cout << "example[2].name = " << example[2].name << endl;
    cout << "example[2].weight = " << example[2].weight << endl;
    cout << "example[2].calories = " <<example[2].calories << endl;

    return 0;
}
