#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float strawberriesKcal = 36, sugarKcal = 40, lemonKcal = 32, strawberriesWeight = 400, sugarWeight = strawberriesWeight, lemonWeight = strawberriesWeight / 20;
    float jamWeight = strawberriesWeight + sugarWeight + lemonWeight;
    float jamKcal = (strawberriesWeight / 100) * strawberriesKcal + (sugarWeight / 100) * sugarKcal + (lemonWeight / 100) * lemonKcal;
    cout << jamWeight << "\n"
         << jamKcal << endl;
    return 0;
}
