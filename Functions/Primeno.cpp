#include <iostream>

using namespace std;
bool isPrime(int n)
{

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << "The number is Prime" << endl;
    }
    else
    {
        cout << "The number is Not Prime" << endl;
    }

    return 0;
}