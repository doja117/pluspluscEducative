#include<iostream>
using namespace std;

char min(char c1,char c2){
    return (int)c1>(int)c2 ? c2 : c1;
}
int min(int x,int y){
    return x>y ? y:x;
}

int min(int x,int y,int z){
    return min(x,y)>z ? z:min(x,y);
}

int main(){
    cout<<min('a','e')<<"\n";
    cout<<min(2,4)<<"\n";

    cout<<min(4,2,7);

}