//tO FIND 1ST AND LAST OCCURANCE OF ELEMENT IN AN ARRAY WHIHCH IS SORTED


#include<iostream>
using namespace std;

int firstOcc(int arr[],int size,int key){

    int start = 0;
    int end =size-1;
    int mid = start + (end-start)/2;
    int ans =-1;

    while (start<=end)
    {
        if (arr[mid]==key)
        {
            ans = mid;
            end = mid-1;
        }
        else if (key>arr[mid]){
            start = mid +1;
        }
        else if (key<arr[mid]){
            end=mid-1;
        }

        int mid = start + (end-start)/2;
        
    }
    return ans;
}

int main()
{
    
    int even[6]={1,3,2,3,3,4};
    int fo = firstOcc(even,6,3);
    cout << "The first occ of the number is : " <<fo<<endl;

    return 0;
}