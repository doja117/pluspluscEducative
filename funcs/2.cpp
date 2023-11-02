#include<iostream>
using namespace std;


int square(int x){
    return x*x;
}
int main(){
    typedef int(*ReturnSqure)(int);
    ReturnSqure rs=square;
    cout<<rs(4);
}