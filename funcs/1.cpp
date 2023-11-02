#include<iostream>
using namespace std;

void HelloWorld(){
	cout<<"Hello World";
}
void add2(int x,int y){
	cout<<x+y<<"\n";
}
int main(){
	void(*adder)(int x,int y)=add2;
	adder(1,3);
	auto fn=&HelloWorld;
	fn();
}
