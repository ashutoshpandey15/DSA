#include <iostream>
using namespace std;

void merge(int arr1[],int n , int arr2[],int m,int arr3[]){
    int i =0;
    int j =0;
    int k=0;
    // array ke index jitne hai utne dalne ke liye 
    while (i<n && j<m)
    {
        if (arr1[i]<arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }

        else {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
        
    }

    //copy kardo first array ke elements ko
     while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
     }
     //copy karo 2nd array ke elemets ko 
     while(i<m){
        arr3[k] = arr2[j];
        k++;
        j++;
     }
    


}


void print ( int ans[],int n){

    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout << endl; 

}

int main()
{


    int arr1[4]={1,4,6,8};
    int arr2[3]={2,3,5};
    int arr3[7]={0};

    merge(arr1,4,arr2,3,arr3);
    print(arr3,7);

    return 0;
}