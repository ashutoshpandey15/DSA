//Binary Search Algo
// first search the mid val of array
// compare with key and check if > or < , acc to that find if the key lies left or right side of the mid val.
// if right/left again find the mid val and compare with key if found return the index
// if not found repeat from starting point



#include<iostream>
using namespace std;


int binarySearch(int arr[],int size,int key){

    int start =0;
    int end =size-1;
    int mid = size + (end-size)/2;

    while(start <= end){


        if(arr[mid]==key){  // checking if mid == key
            return mid;
        }
        if(key>arr[mid]){ // going to right side if key>mid 
            start=mid+1;
        }
        else{
            end=mid-1; // going to left if key<mid 
        }

        mid =start+(end-start)/2;  //update mid 


    }
        return -1;
}


int main()
{
    int odd[5]={2,5,4,8,7};
    int even[6]={1,2,3,4,5,6};

int index = binarySearch(odd,5,8);
cout<< "The index of 8 is :" <<index << endl;
    return 0;
}