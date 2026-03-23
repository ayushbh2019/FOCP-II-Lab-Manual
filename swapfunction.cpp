#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;

    cout << "Enter integer values: ";
    cin >> a >> b;

    swap(a, b);

    cout << "After swapping:\n";
    cout << "a = " << a << " b = " << b;

    return 0;
}
