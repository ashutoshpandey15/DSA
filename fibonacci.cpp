#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of series you want to print" << endl;
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << " " << b << endl;
    for (int i = 1; i <= n; i++)
    {
        int sum = a + b;
        cout << sum << endl;
        a = b;
        b = sum;
    }

    return 0;
}