//============================================================================
// Name        : lab1Q3.cpp
// Author      : Shinika Balasundar
// Description : Reads two integers and finds a^b
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	//Inits two variables
	int a, b;

	//Reads keyboard input to the two variables
	cout << "Enter a Value for a ";
	cin >> a;

	cout << "Enter a Value for b ";
	cin >> b;

	//Utilizes the math library to find the power of a^b and outputs it
	cout << "Value a ^ value b = ";
	cout << pow(a, b);


	return 0;
}


/*
 * Console Output:
 *
 * Enter a Value for a 5
 * Enter a Value for b 2
 * Value a ^ value b = 25
 *
 */
