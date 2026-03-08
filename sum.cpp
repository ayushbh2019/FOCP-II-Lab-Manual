#include<iostream>
using namespace std;
int sum (int, int);
int main(){
    int a,b;
    cout<<"enter two integer value";
    cin>>a>>b;
    sum(a,b);
    cout<<"your sum is "<<sum(a,b);
}
int sum (int a,int b)
{
    return a+b;}
