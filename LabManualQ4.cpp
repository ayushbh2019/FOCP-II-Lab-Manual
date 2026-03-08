#include<iostream>
using namespace std;
int main()
{
    int item_no;
    int quantity;
    float item_price,total_amount,discount_amount,final_amount;
    cout<<"give details for the item purchased"<<endl;
    cin>>item_no>>quantity>>item_price;
    total_amount=(quantity)*(item_price);
    discount_amount = (total_amount)*0.2;
    final_amount = total_amount - discount_amount;
    cout<<"item number"<<item_no<<endl;
    cout<<"no of products"<<quantity<<endl;
    cout<<"the total amount before discount"<<total_amount<<endl;
    cout<<"money saved"<<discount_amount<<endl;
    cout<<"amount after discount"<<final_amount<<endl;

    return 0; 
}
