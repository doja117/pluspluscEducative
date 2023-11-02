#include<iostream>
#include<vector>

using namespace std;

void PrintValue(int x){
    cout<<x<<" ";
}
void ForEach(const vector<int>&values,void(*func)(int)){
    for (int value:values){
        func(value);
    }
}

int main(){
    typedef void(*PrintSomething)(int);
    PrintSomething x=PrintValue;
    vector<int>v={3,1,4,5};
    ForEach(v,x);
}