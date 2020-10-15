/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

  main() {
      int i = 10, j = 20;
      swapThemByVal(i, j);
      cout << i << "  " << j << endl;     // displays 10  20
      swapThemByRef(i, j);
      cout << i << "  " << j << endl;     // displays 20  10
      ...
   }

   void swapThemByVal(int num1, int num2) {
      int temp = num1;
      num1 = num2;
      num2 = temp;
   }

   void swapThemByRef(int& num1, int& num2) {
      int temp = num1;
      num1 = num2;
      num2 = temp;
   }