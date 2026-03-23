#include<iostream>
using namespace std;
class B
{
    int b1;
    int b2;
    public:
    B()
    {
        cout<<"default values";
        b1=0;b2=0;
    }
    B(int b1,int b2)
    {
        cout<<"values get updated";
        this->b1=b1;
        this->b2=b2;
    }
    void display()
    {
        cout<<"values\n"<<b1<<endl<<b2<<endl;
    }
~B()
{
    cout<<"data destroyed\n";
}
};
int main()
{
    B obj1,obj2(23,76);
    obj1.display();
    obj2.display();
    return 0;
}