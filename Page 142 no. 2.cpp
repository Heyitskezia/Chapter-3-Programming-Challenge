#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
 double classA = 15, classB = 12, classC = 9 ;
 double totalSalesA, totalSalesB, totalSalesC ;
 double total;
 
 cout << "Ticket price" << endl << endl ;
 cout << "Class A = $ 15" << endl ;
 cout << "Class B = $ 12" << endl ;
 cout << "Class C = $ 9" << endl << endl << endl;
 

 cout << "Class A sold: " ;
 cin >> totalSalesA ;
 cout << "Class B sold: " ;
 cin >> totalSalesB ;
 cout << "Class C sold: " ;
 cin >> totalSalesC ;

 cout << setprecision(2) << fixed;
 cout << "Total sales from Class A: $" << totalSalesA * classA << endl ;
 cout << "Total sales from Class B: $" << totalSalesB * classB << endl ;
 cout << "Total sales from Class C: $" << totalSalesC * classC << endl  ;

 total = (totalSalesA * classA) + (totalSalesB * classB) + (totalSalesC * classC) ;

 cout << setprecision(1) << fixed;
 cout << "Total sales of all class: $" << total << endl ;
 
 return 0;
}
