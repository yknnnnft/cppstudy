#include <iostream>

using namespace std;

void swap(int &i, int &j);

int main()
{
    int i = 1;
    int j = 2;
    swap(i, j);
    cout << "i: " << i << endl;
    cout << "j: " << j << endl;
    return 0;
}

void swap(int &i, int &j)
{
    int temp;
    temp = i;
    i = j;
    j = temp;
    return;
}
