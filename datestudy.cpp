#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    time_t now = time(0);
    char* dt = ctime(&now);

    cout << "local time: " << dt << endl;

    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC time: " << dt <<endl;
    return 0;
}

