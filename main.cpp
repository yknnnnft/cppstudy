#include <iostream>
using namespace std;
const int MAX = 4;

#include <iomanip>
using std::setw;

int main()
{
    const char *names[MAX] =
    {
        "LI",
        "ZHANG",
        "WANG",
        "CHEN",
    };

    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of names[" << i << "] = ";
        cout << names[i] << endl;

    }

    int a = 1;
    int &b = a;
}
