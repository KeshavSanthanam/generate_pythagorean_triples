// Keshav Santhanam
// 6-12-21

#include <iostream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

//#include <boost/lexical_cast.hpp>

using namespace std; 

int main() {
	int m,n;
	cout << "Enter the first number: ";
	cin >> m;
	cout << "Enter the second number: ";
	cin >> n;
	
	int a = abs(m*m - n*n);
	string sA;
	stringstream ssA;  
	ssA << a;  
	ssA >> sA; 
	int b = 2*m*n;
	string sB;
	stringstream ssB;  
	ssB << b;  
	ssB >> sB; 
	int c = m*m + n*n;
	string sC;
	stringstream ssC;  
	ssC << c;  
	ssC >> sC; 
	string triple = sA + ", " + sB + ", " + sC; 
	cout << endl << "The pythagorean triple formed by both inputs is " << triple << "." << endl << endl;
	
	cout << "End Program." << endl;
	return 0; 
}
