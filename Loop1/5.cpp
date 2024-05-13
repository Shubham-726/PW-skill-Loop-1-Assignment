#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no";
    cin >> n;
    int a = 3;
    for (int i = 1; i <= n - 1; i++)
    {
        cout << a << " ";
        a = a * 3;
    }
}