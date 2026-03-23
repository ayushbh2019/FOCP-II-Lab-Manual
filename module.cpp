#include<iostream>
using namespace std;
class Student
{private:
    int rollno;
    string name;
    int marks1;
    int marks2;
    int marks3;
public:

void inputdetails()
{
cout <<"rollno, name, marks1, marks2, marks3";
cin>>rollno>>name>>marks1>>marks2>>marks3;
}
int calculatetotal(){
    return(marks1+marks2+marks3);
}
void displaydetails(){
    cout<< "\n roll no:"<<rollno<<"\n name:"<<name<<"\nmarks1:"<<marks1<<"\nmarks2"<<marks2<<"\nmarks3"<<marks3;
    cout<<"\n Total : "<<calculatetotal();
}
};
int main(){
    Student s1;
    s1.inputdetails();
    s1.displaydetails();
    return 0;
}

