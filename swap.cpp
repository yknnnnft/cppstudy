#include <iostream>

void swapp(int *, int *);
void swapr(int &, int &);

int main()
{
    int a = 1;
    int b = 2;
    std::cout << "a: " << a << std::endl;
    std::cout << "&a: " << &a << std::endl;
    std::cout << "*&a: " << *&a << std::endl;

    int *p;
    p = &b;

    std::cout << "memory: " << p << std::endl;
    std::cout << "data in memory: " << *p << std::endl;

    std::cout << "swapp: " << std::endl;
    swapp(&a, &b); 
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;


    std::cout << "swapr: " << std::endl;
    swapr(a, b); 
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    return 0;
}

void swapp(int *i, int *j)
{
    std::cout << "i: " << i << std::endl;
    std::cout << "*i: " << *i << std::endl;
    int temp = *i;
    *i = *j;
    *j = temp;
    return;
}

void swapr(int &i, int &j)
{
    std::cout << "i: " << i << std::endl;
    std::cout << "&i: " << &i << std::endl;
    int temp = i;
    i = j;
    j = temp;
    return;
}
