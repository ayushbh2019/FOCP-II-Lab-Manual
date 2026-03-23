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
    {
        movieName = "Krrish";
        seatNumber = 2;
        ticketPrice = 200;
        isBooked = false;
    }

    MovieTicket(string name, int seat, int cost)
    {
        movieName = name;
        seatNumber = seat;
        ticketPrice = cost;
        isBooked = false;
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
        cout << "Movie Name: " << movieName << endl;
        cout << "Seat Number: " << seatNumber << endl;
        cout << "Ticket Price: " << ticketPrice << endl;

        if (isBooked == true)
            cout << "Ticket Status: Booked" << endl;
        else
            cout << "Ticket Status: Not Booked" << endl;
    }

    int calculatetotalcost(int numberofticket)
    {
        return ticketPrice * numberofticket;
    }

    ~MovieTicket()
    {
        cout << "Bill ended" << endl;
    }
};

int main()
{
    MovieTicket t1;
    t1.displayTicketDetails();
    cout << "Total bill: " << t1.calculatetotalcost(5) << endl;
    return 0;
}
