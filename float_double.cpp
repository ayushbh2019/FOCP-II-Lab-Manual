#include<iostream>
using namespace std;
int sum (int,int);
float sum (float,float);
double sum (double,double);
int main()
    {
        int a,b;
        float c,d;
        double e,f;
        cout<<"\n enter two intger";
        cin>>a>>b;
        cout<<"\n your sum is "<<sum(a,b);
        cout<<"\n enter two float";
        cin>>c>>d;
        cout<<"\n your sum is "<<sum(c,d);
        cout<<"\n enter two double";
        cin>>e>>f;
        cout<<"\n your sum is "<<sum(e,f);
        
    }
    int sum(int a, int b)
    {
        return a+b;
    }
    float sum (float c, float d)
    {
        return c+d;
    }
    double sum(double e, double f)
    {
        return e+f;
    }

