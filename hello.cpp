#include <iostream>
// this is comment
using namespace std;
enum color {red, blue, green} c;
int i = 1;
void func();
static int j = 5;
int main()
{
    while (j--)
    {
        cout << "j in main: " << j << endl;
        func();
    }
    return 0;
}

void func()
{
    static int i = 1;
    i++;
    cout << "local i: " << i << endl;
}
