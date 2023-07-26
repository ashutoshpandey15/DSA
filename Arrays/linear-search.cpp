#include <iostream>

using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)

        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[5] = {1, 2, 5, 6, 7};
    cout << "Enter the Key you want to search :" << endl;
    int key;
    cin >> key;
    bool found = search(arr, 6, key);
    if (found)
    {
        cout << "The key is present" << endl;
    }
    else
    {
        cout << "The key is not present" << endl;
    }
    return 0;
}