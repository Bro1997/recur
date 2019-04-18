#include <iostream>
using namespace std;


int fun(int a, int b)
   {
   if(a == b)
   return a;
      else
      {
      int c = (a+b) / 2;
      return fun(a, c) + fun(c+1, b);
      }//end else
   }//end fun
   
   int main()
   {
	   fun(4, 4);
	   return 0;
   }//end int main

