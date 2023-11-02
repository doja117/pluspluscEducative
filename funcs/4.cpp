#include<iostream>
#include<vector>

using namespace std;


void ForEach(const vector<int>&values,void(*func)(int)){
    for (int value:values){
        func(value);
    }
}

int main(){
 
    vector<int>v={3,1,4,5};
    ForEach(v,[](int x){cout<<x<<" ";});
}