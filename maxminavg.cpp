#include<iostream>
using namespace std;
void computeperformance(int m[], int n)
{
    int max=m[0],min=m[0],avg=m[0];
    for(int i=1;i<10;i++)
    {if (max<m[i])
    {
        max=m[i];
    }
     if (min>m[i])
    {
        min=m[i];
    }
avg+=m[i];
    }
    cout<<"enter maximum value "<<max<<endl;
    cout<<"enter minimum value "<<min<<endl;
    cout<<"enter average value "<<avg/10<<endl;
}
int main()
{
int marks[10]={23,56,78,45,64,28,49,87,50,79};
computeperformance (marks,10);
return 0;
}
