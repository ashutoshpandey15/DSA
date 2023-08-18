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
        if (arr[mid]==key)      //if key = mid then store the val in ans and check left as we want to find the first occ
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

        mid = start + (end-start)/2;
        
    }
    return ans;
}
int lastOcc(int arr[],int size,int key){

    int start = 0;
    int end =size-1;
    int mid = start + (end-start)/2;
    int ans =-1;

    while (start<=end)
    {
        if (arr[mid]==key)      //if key = mid then store the val in ans and check right as we want to find the last occ
        {
            ans = mid;
            start=mid+1;
        }
        else if (key>arr[mid]){
            start = mid +1;
        }
        else if (key<arr[mid]){
            end=mid-1;
        }

        mid = start + (end-start)/2;
        
    }
    return ans;
}

int main()
{
    
    int even[5]={1,2,3,3,5};
    int fo = firstOcc(even,5,3);
    int lo = lastOcc(even,5,3);
    cout << "The first occ of the number is : " <<fo<<endl;
    cout << "The last occ of the number is : " <<lo<<endl;

    return 0;
}