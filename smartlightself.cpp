#include<iostream>
using namespace std;
class smartlight{
    private:
    string brand;
    int brightness;
    bool isOn;
public:
    smartlight(){           //brightness
        brand="BMW";
        brightness=40;
        isOn = false;
                }
    smartlight(string audi, int b, bool onoff){
        brand= audi;
        brightness = b;
        isOn = onoff;
                                }
void turnOn(){
    isOn = true;
             }
void turnoff(){
    isOn = false;
               }
void increasebrightness(){
    brightness = brightness + 1;}
void decreasebrightness(){
    brightness = brightness - 1;
                         }
void displaystatus(){
cout<<"brand"<<brand<<endl;
cout<<"brightness"<<brightness<<endl;
cout<<"isOn"<<isOn;
if (isOn == true)
cout<<"ON";
else
cout<<"Off";
                    }
~smartlight(){
    cout<<"object destroyed"<<endl;
            
                }
};
int main(){
    smartlight dark1;
    smartlight dark2("Mercedes",99,true);
    dark1.displaystatus();
    dark2.displaystatus();
return 0;
}
