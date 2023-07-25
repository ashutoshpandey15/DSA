#include <iostream>

using namespace std;

void printingArray(int arr[], int size)
{
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    cout << "Array Program" << endl;
    int Age[15] = {2, 3, 5};
    cout << "Age at 2nd index is : " << Age[1] << endl;

    // Printing the above array
    cout << "The Elements of the array are as follows : " << endl;
    int n = 10;
    printingArray(Age, 5);
    return 0;
}