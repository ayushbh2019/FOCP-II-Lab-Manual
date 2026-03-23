#include<iostream>
using namespace std;
void welcome(void);
void welcome(string name);
int main(){
    welcome();
    welcome("ayush");
}
void welcome(){
    cout<<"string name";
}
void welcome(string name){
    cout<<"enter string "<<name;
}