#include <iostream>

using namespace std;

int main()
{
    cout << "Array Program" << endl;
    int Age[15] = {2, 3, 5};
    cout << "Age at 2nd index is : " << Age[1] << endl;

    // Printing the above array
    cout << "The Elements of the array are as follows : " << endl;
    int n = 15;
    for (int i = 0; i <= n; i++)
    {
        cout << Age[i];
    }
    return 0;
}