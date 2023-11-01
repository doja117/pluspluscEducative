#include<iostream>
using  namespace std;
void function1 () {
  cout << "global = " << global << endl;
}

int global = 3;

void function2 () {
  cout << "global = " << global << endl;
}
int main() {
  cout << "global = " << global << endl;
  function1();
  function2();
}