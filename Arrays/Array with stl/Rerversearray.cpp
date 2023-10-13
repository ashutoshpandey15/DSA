#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v) {               // For reversal

    int s =0;
    int e =v.size()-1;
    while(s<=e){

        swap(v[s],v[e]);
        s++;
        e--;
    }

    return v;


}

void print_vector(vector<int> v){                     // To print the array 
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout << endl;

}


int main()
{

    vector<int> v;

    v.push_back(1);                                             //adding values to array 
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector<int> ans = reverse(v);

    print_vector(ans);






    return 0;
}