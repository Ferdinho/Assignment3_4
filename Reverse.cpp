//============================================================================
// Name        : Reverse.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
// This small program is just printing any number inversely using recution function.


#include <iostream>
using namespace std;

void rev(int num, int helper){
	if(num == 0)
		return ;//this is the base
	helper = num%10;
	cout<<helper;
	rev(num/10,helper); // I'm calling the recurtion function

}

int main(){
	int number;
	int helper=0;
	cout << "Enter a number :";
	cin >> number;
	rev(number,0);
	return 0;
}
