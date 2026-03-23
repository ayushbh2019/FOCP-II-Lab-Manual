#include<iostream>
using namespace std;
class car{
    int car_year;
    string car_type;
    string car_colour;
public:
    string car_brand;
void display(){
cout<<"enter car brand"<<car_brand<<endl;
cout<<"enter year of manufacture"<<car_year<<endl;
cout<<"enter type of car"<<car_type<<endl;
cout<<"enter car colour"<<car_colour<<endl;}
void car_entry(){
    cout<<"\n Brand Car_year car type color ";
cin>>car_brand>>car_year>>car_type>>car_colour;}

};
int main()
{
    car c1;
    c1.car_entry();
    c1.car_brand="BMW";
    c1.display();
    return  0;
}
