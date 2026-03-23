#include<iostream>
using namespace std;
class student{
    string student_details; //rno, regno,course,name
    float m1,m2,m2;
    string student_entry;
public:
void student_entry(){}
//void student_detail();

void display(){
        cout<<"enter students details"<<student_details<<endl;
        cout<<"enter marks"<<student_marks<<endl;
        cout<<"enter student entry"<<student_entry<<endl;


}
void student_performance(){
cout<<"\n enter student details";
cin>>student_details>>student_marks>>student_entry;

}
    
};
int main(){
   student ayush;
   ayush.display();
}