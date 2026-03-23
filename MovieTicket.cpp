#include<iostream>
using namespace std;
class MovieTicket
{
    private:
    string movieName;
    int seatNumber;
    int ticketPrice;
    bool isBooked;
    public:
    MovieTicket()
    {isBooked = false;
        ticketPrice=200;
        seatNumber = 2;
    }
    MovieTicket(string krrish, int seat,int cost)
    {
            movieName = krrish;
            seatNumber = seat;
            ticketPrice = cost;
    }
void bookTicket()
{
    isBooked = true;
}
void cancelTicket()
{
    isBooked = false;
}
void displayTicketDetails()
{
    cout<<"Moviename"<<movieName<<endl;
    cout<<"\n seatnumber"<< seatNumber<<endl;
    cout<<"\n ticketPrice"<<ticketPrice<<endl;
    if (isBooked == true)
    {
        cout<<"cancel ticket";
    }
    else
    {
        cout<<"buy ticket";
    }
}
    
~MovieTicket()
{
    cout<<"\n bill ended";
}
int calculatetotalcost(int numberofticket)
{
    return ticketPrice*numberofticket;
}

};
int main()
{
MovieTicket t1;
t1.displayTicketDetails();
cout<<"\n total bill "<<t1.calculatetotalcost(5);
return 0;
}
