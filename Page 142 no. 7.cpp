#include<iostream>
#include<iomanip>
#include<string>

using namespace std ;

int main()
{
 string movieTitle ;
 double adultTickets, childTickets, grossBox, netBox, distributorPay ;
 double adultPrice = 10.00, childPrice = 6.00 ; 

 cout << "Please enter the name of the movie: " ;
 cin >> movieTitle ;
 cout << "Please enter number of adult tickets sold: " ;
 cin >> adultTickets ;
 cout << "Please enter number of child tickets sold: " ;
 cin >> childTickets ;

 grossBox = (adultTickets * adultPrice) + (childTickets * childPrice) ;
 netBox = grossBox * 0.20;  //Assume the teather keeps 20% of the box office profit
 distributorPay = grossBox - netBox ;

 
 cout << left << setw(30) << "Movie Title:" << right << setw(24) << '"' << movieTitle << '"' << endl ;
 cout << left << setw(30) << "Adult Tickets Sold:" << right << setw(20) << " " << setw(5) << adultTickets << endl ;
 cout << left << setw(30) << "Child Tickets Sold:" << right << setw(20) << " " << setw(5) << childTickets << endl ;
 cout << setprecision(2) << fixed ;
 
 cout << left << setw(30) << "Gross Box Office Profit:" << right << setw(20) << "$" << setw(8) << grossBox << endl ;
 cout << left << setw(30) << "Net Box Office Profit:" << right << setw(20) << "$" << setw(8) << netBox << endl ;
 cout << left << setw(30) << "Amount Paid to Distributor:" << right << setw(20) << "$" << setw(8) << distributorPay << endl << endl ;


 return 0 ;
}

