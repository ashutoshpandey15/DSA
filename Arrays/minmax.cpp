/**
 * The above C++ code takes an array as input and finds the maximum and minimum values in the array.
 * 
 * @param arr The array of integers that you want to find the maximum and minimum values from.
 * @param n The variable `n` represents the size of the array `arr[]`. It is used to determine the
 * number of elements in the array.
 * 
 * @return The getMax function returns the maximum value in the array, and the getMin function returns
 * the minimum value in the array.
 */
#include <iostream>

using namespace std;

int getMax(int arr[], int n)
{

    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // using the max and min predefined fxn
        maxi = max(maxi, arr[i]);
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }
    return maxi;
}
int getMin(int arr[], int n)
{

    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {

        // using the max and min predefined fxn
        mini = min(mini, arr[i]);
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    return mini;
}

int main()
{
    int size;
    cout << "Enter the size of your array :" << endl;
    cin >> size;
    int num[100];
    // Taking input
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Max Value is : " << getMax(num, size) << endl;
    cout << "Min Value is : " << getMin(num, size) << endl;

    return 0;
}