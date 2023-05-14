#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number you want to check" << endl;
    cin >> n;
    bool isprime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // cout << "The number is not prime" << endl;
            isprime = false;
            break;
        }
    }
    if (isprime == false)
    {
        cout << "The number is not prime" << endl;
    }
    else
    {
        cout << "The number is prime" << endl;
    }

    return 0;
}