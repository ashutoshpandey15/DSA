#include <iostream>

using namespace std;

int getSum(int arr[], int n)
{
    int Sum;
    for (int i = 0; i < n; i++)
    {
        Sum += arr[i];
    }
    return Sum;
}

int main()
{

    int size;
    cin >> size;

    int num[100];
    // Taking input
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "The Sum of Arrays is : " << getSum(num, size) << endl;
    return 0;
}