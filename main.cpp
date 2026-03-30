#include "functions.h"


int main() 
{
   //Task A
   int num;
   cout<<"Enter a number: ";
   cin>>num;
   cout<<"Sum of squares: "<<sumOfSquares(num)<<endl;

   //Task B
   cout<<"\nEnter a number: ";
   cin>>num;
   cout<<"Factorial of the number is "<<findFactorial(num)<<endl;

   return 0;
}