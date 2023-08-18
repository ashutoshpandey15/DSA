// To find pivot point in sorted and rotated array


#include<iostream>
using namespace std;

int pivot(int arr[],int size){

    int start = 0;
    int end=size-1;
    int mid = start+(end-start)/2;

    while (start<end)
    {
        if (arr[mid]>arr[0])
        {
            start=mid+1;
        }
        else{
            end=mid;
        }
        
     mid = start+(end-start)/2;
        
    }
    return start;


}


int main()
{
    int test[5]={1,2,3,7,9};
    cout<< " The pivot point is :"<< pivot(test,5) <<endl;
    return 0;
}