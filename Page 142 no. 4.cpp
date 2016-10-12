#include<iostream>
#include<string>

using namespace std;

int main()
{
 string month1, month2, month3;
 double rainFall1, rainFall2, rainFall3;
 double average;

 cout << "Please enter a month: ";
 cin >> month1;
 cout << "Please enter the amount of rain that fell in that month (in inches): " ;
 cin >> rainFall1;
 cout << "Please enter a month: ";
 cin >> month2;
 cout << "Please enter the amount of rain that fell in that month (in inches): " ;
 cin >> rainFall2;
 cout << "Please enter a month: ";
 cin >> month3;
 cout << "Please enter the amount of rain that fell in that month (in inches): " << endl ;
 cin >> rainFall3;

 average = (rainFall1 + rainFall2 + rainFall3) / 3 ;

 cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is: " << average << endl ;

 return 0;
}
