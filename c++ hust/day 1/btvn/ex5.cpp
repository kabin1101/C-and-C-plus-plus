#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float pound = 60, stone = pound / 14, kilogram = stone * 6.35;

    cout << stone << "\n"
         << kilogram << endl;
    return 0;
}
