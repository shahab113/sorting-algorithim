#include<iostream>
#include<vector>

using namespace std;



void bubble_sort(vector<int> &v){
    
    int n = v.size();

    for(int i = 0; i<n-i; i++){
        for(int j = 0; j<n-i-1; j++){
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);
            }
        }
    }      
}


   

int main(){

    vector<int> v= {2,7,3,4};

    bubble_sort(v);

    for(auto i:v){
        cout<<i<<" ";
    }

    return 0;

}