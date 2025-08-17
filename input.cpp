/*
 * input.cpp
 *
 *  Created on: Aug 17, 2025
 *      Author: Gavin LaMontagne
 */

/*
 * Program: Create a simple C++ console application that will write a program that will take two string inputs from a user.
 * Your program should concatenate the two strings and then print the resulting output to the screen.
 * Take the two string inputs from the user 3 times for varying string lengths.
 */


#include <iostream>
#include <string>

using namespace std;


// main function
int main(){
	char string1[20];	// char array initialized to 20 so that the variable can accept more than one input/output character at a time.
	char string2[20];	// char array initialized to 20 so that the variable can accept more than one input/output character at a time.

	//For loop created to request string1/string2 input from the user 3 different times, to test different variable lengths.
	for (int i = 0; i < 3; i++){

		cout << "Enter String 1: ";
		cin >> string1;

		cout << "Enter String 2: ";
		cin >> string2;

		cout << "String1 and String2 concatenated... \n";

		strcat(string1, " ");

		cout << strcat(string1, string2);
		cout << "\n\n";
	}

	return 0;
}
