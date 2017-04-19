#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    int i, j;
    srand((unsigned)time(NULL));
    for (i = 0; i < 10; i++)
    {
        j = rand();
        std::cout << "rand: " << j << std::endl;

    }
    return 0;
}
