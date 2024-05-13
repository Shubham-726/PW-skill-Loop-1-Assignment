#include <iostream>
using namespace std;
int main()
{

    int a = 65;
    int i = 1;
    while (i <= 26)
    {
        cout << a << " " << (char)a << endl;
        i++;
        a++;
    }
}