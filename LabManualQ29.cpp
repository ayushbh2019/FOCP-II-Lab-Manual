#include<iostream>
using namespace std;

int main()
{
   int temp[30],i,min;

   for(i=0; i<30; i++)
   {
      cout<<"temperature of the day"<<i+1;
      cin>>temp[i];
   }

   min = temp[0];

   for(i=1; i<30; i++)
   {
      if(temp[i]<min)
      {
         min = temp[i];
      }
   }

   cout<<"minimum temp"<<min;

   return 0;
}
