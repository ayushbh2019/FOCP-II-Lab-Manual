<<<<<<< HEAD
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


=======
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


>>>>>>> c42ec45e17a73f20e7928ba8e30bfbc54e406d1c
}