#include<iostream>
using namespace std;

int main()
{
   int m1,m2,m3,m4,m5,total;
   float per;

   cout<<"marks in sub 1";
   cin>>m1;

   cout<<"marks in sub 2";
   cin>>m2;

   cout<<"marks in sub 3";
   cin>>m3;

   cout<<"marks in sub 4";
   cin>>m4;

   cout<<"marks in sub 5";
   cin>>m5;

   total = m1 + m2 + m3 + m4 + m5;
   per = total / 5.0;

   cout<<"Total marks = "<<total<<endl;
   cout<<"Percentage = "<<per<<endl;

   return 0;
}