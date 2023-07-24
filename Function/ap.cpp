#include <iostream>

using namespace std;

int Ap(int n)
{
    int ap = (3 * n + 7);
    return ap;
}

int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    cout << "The answer is : " << Ap(n) << endl;
    return 0;
}