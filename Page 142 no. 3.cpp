#include<iostream>
#include <iomanip>
using namespace std ;

int main()
{
 double score1, score2, score3, score4, score5, average ;
 
 cout << "This is a program to calculate the average test score" << endl << endl ;

 cout << "Please input score 1: " ;
 cin >> score1;
 cout << "Please input score 2: " ;
 cin >> score2;
 cout << "Please input score 3: " ;
 cin >> score3;
 cout << "Please input score 4: " ;
 cin >> score4;
 cout << "Please input score 5: " ;
 cin >> score5 ;

 average = (score1 + score2 + score3 + score4 + score5) / 5 ;

 cout << setprecision(1) << fixed ;
 cout << "The average score is: " << average << endl << endl ;

 return 0 
 ;
}
