#include<iostream>
using namespace std;

int main()
{
   int a[5],i;
   int evensum=0, oddsum=0;

   for(i=0; i<5; i++)
   {
      cout<<"Enter number "<<i+1<<" : ";
      cin>>a[i];
   }

   for(i=0; i<5; i++)
   {
      if(a[i]%2==0)
      {
         evensum = evensum + a[i];
      }
      else
      {
         oddsum = oddsum + a[i];
      }
   }

   cout<<"Sum of even numbers = "<<evensum<<endl;
   cout<<"Sum of odd numbers = "<<oddsum;

   return 0;
}