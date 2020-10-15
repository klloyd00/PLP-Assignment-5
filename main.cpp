/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void myFunction(int x, int y) {
  int z = x*y;
  cout << z;
}

int main() {
    int x;
    cout << "Type a number";
    cin >> x;
    int y;
    cout << "Type a number";
    cin >> y;
    
  myFunction(x,y); // call the function
  return 0;
}
