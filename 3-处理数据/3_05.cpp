#include <iostream>

int main()
{
    using namespace std;
    long long world_population;
    int US_population;

    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the population of US: ";
    cin >> US_population;

    //double proportion = double (US_population * 1.0 / world_population);
    double proportion = (double) US_population / (double) world_population;

    cout << "The population of the US is " << proportion * 100 << "% of the world population.";

    return 0;
}
