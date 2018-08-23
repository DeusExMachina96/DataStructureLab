/*
* Class: CS 3305/Section 08L
*Term: Fall 2018
*Name: Jessy Redington
*Instructor: Monisha Verma
*Assignment: Lab1-Exercise 2
*/

#include <iostream>   // Needed to use IO functions
using namespace std;

int main(int argc, char **argv)
{

int input;
int sum;

cout << "Please enter a positive integer:";
cin >> input;
int a = 1;

    for (int i=a; i <= input; i++){
        sum += i;
    }


cout << "Sum = " << sum;

	return 0;
}

