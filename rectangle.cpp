#include<iostream>
using namespace std;
class rectangle
{
    float width;
    float length;
public:
void inputDimensions();
float calculateArea();
float calculatePerimeter();
void displayresult();
rectangle(){
length=0;width=0;}
rectangle(int l,int w){
    length=l;width=w;
}
};
void rectangle::inputDimensions(){
    cout<<"enter the dimensions (width,length)";
    cin>>width>>length;

}
float rectangle::calculateArea(){
    return (width*length);
}
float rectangle::calculatePerimeter(){
    return 2*(width+length);
}
void rectangle::displayresult(){
    cout<<"\n length"<<length<<"\nwidth"<<width;
    cout<<"\n area"<<calculateArea();
    cout<<"\n perimeter"<<calculatePerimeter();
}

int main(){
    rectangle r1,r2(23,78);
    //r1.inputDimensions();
    //cout<<r1.calculateArea();
    //r1.calculatePerimeter();
    r1.displayresult();r2.displayresult();
    return 0;
}
