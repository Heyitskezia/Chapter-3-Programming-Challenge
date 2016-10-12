#include<iostream>
using namespace std ;

int main() {
	
 double capacity, miles, average ;

 cout << "Enter the number of size of the tank: " ;
 cin >> capacity;
 
 
 cout << "Enter the number of miles per tank of gas: " ;
 cin >> miles ; 
 
 average = miles / capacity ;

 cout << "The number of miles that may be driven per gallon of gas is " << average << endl << endl ;

 return 0;
}
