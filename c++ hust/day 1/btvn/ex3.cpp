#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float total_line = 1050;
    float commented_line = 1050 * 0.36;
    float nocomment_line = total_line - commented_line;

    cout << total_line << "\n"
         << commented_line << "\n"
         << nocomment_line;
    return 0;
}
