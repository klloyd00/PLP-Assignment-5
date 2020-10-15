#include <iostream>
using namespace std;
//Factorial function
int f(int n, int n2){
  
   int y = n*n2;
   return y;
}
int main(){
   int num;
   cout<<"Enter a number: ";
   cin>>num;
   int num2;
   cout<<"Enter a number: ";
   cin >> num2;
   cout<<"Multiplication: "<<f(num,num2);
   return 0;
}