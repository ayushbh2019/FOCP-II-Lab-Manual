#include<iostream>
using namespace std;

int main()
{
   int salary[10],i,total=0;
   float average;

   for(i=0; i<10; i++)
   {
      cout<<"Enter salary of employee "<<i+1;
      cin>>salary[i];
   }

   for(i=0; i<10; i++)
   {
      total = total + salary[i];
   }

   average = total / 10.0;

   cout<<"total salary"<<total<<endl;
   cout<<"average salary"<<average;

   return 0;
}