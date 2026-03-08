#include<iostream>
using namespace std;

int main()
{
   int a[5],i;
   int largest, second;

   for(i=0; i<5; i++)
   {
      cout<<"enter the number"<<i+1;
      cin>>a[i];
   }

   largest = a[0];
   second = a[0];

   for(i=0; i<5; i++)
   {
      if(a[i]>largest)
      {
         second = largest;
         largest = a[i];
      }
      else if(a[i]>second && a[i]!=largest)
      {
         second = a[i];
      }
   }

   cout<<"highest number"<<largest<<endl;
   cout<<"second highest= "<<second;

   return 0;
}