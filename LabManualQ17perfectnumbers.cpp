//for perfect number
#include<iostream>
using namespace std;

int main()
{
   int n,i,sum=0;

   cout<<"enter number"<<endl;
   cin>>n;

   for(i=1; i<n; i++)
   {
      if(n%i==0)
      {
         sum = sum + i;
      }
   }

   if(sum==n)
   {
      cout<<"It is Perfect number";
   }
   else
   {
      cout<<"It is not Perfect number";
   }

   return 0;
}