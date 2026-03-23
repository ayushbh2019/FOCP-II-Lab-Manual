#include<iostream>
using namespace std;
int main(){
    int price[10];
    int max=0,i;
cout<<"enter the price";
for(i=0;i<10;i++){
cin>>price[i];
}
max=price[0];

for(i=1;i<10;i++){
if (max<price[i])
max=price[i];
}
cout<<"show maximum price"<<max;
