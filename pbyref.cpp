#include<iostream>
using namespace std;
void square(int &x){
	x*=x;
	return;
}
int main(){
	int x;
	cin>>x;
	square(x);
	cout<<x;
}