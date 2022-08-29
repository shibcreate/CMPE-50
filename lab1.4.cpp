//============================================================================
// Name        : lab1Q4.cpp
// Author      : Shinika Balasundar
// Description : Reads a variable and finds the factorial of it
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int fac;

	cout << "Enter a number to find the factorial for ";

	//Reads user input into fact integer
	cin >> fac;

	//Decision area for when if fac integer is less than 0, the user must input a correct value - program ends
	if (fac < 0) {
		cout << "Restart and Enter a Positive Number";
	} else if (fac == 0){

		//Case for when factorial is 0
		cout << "Factorial is ";
		cout << 0;

	} else {
		int value = 1;

		//Calculation area for factorial where the value is * to the user input as user input decreases
				for(int i = fac; i > 0; i--){
					value = value * i;
				}

				cout << "Factorial is ";
				cout << value;
	}

	return 0;
}

/*
 * Console Output:
 * Enter a number to find the factorial for 5
 * Factorial is 120
 *
 */
