#include<iostream>
using namespace std;

class rectangle
{
    float width;
    float length;

public:
    rectangle()
    {
        length = 0;
        width = 0;
    }

    rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    void inputDimensions()
    {
        cout << "Enter width and length: ";
        cin >> width >> length;
    }

    float calculateArea()
    {
        return width * length;
    }

    float calculatePerimeter()
    {
        return 2 * (width + length);
    }

    void displayresult()
    {
        cout << "\nLength: " << length;
        cout << "\nWidth: " << width;
        cout << "\nArea: " << calculateArea();
        cout << "\nPerimeter: " << calculatePerimeter();
    }
};

int main()
{
    rectangle r1, r2(23, 78);

    r1.displayresult();
    r2.displayresult();

    return 0;
}
