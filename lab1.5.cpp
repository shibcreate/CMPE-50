//============================================================================
// Name        : lab1Q5.cpp
// Author      : Shinika Balasundar
// Description : Program that finds all prime numbers between 3 and user-input
//============================================================================

#include <iostream>
using namespace std;

//Function declaration where it checks if the number is prime and prints the number
void isPrime(int k);

int main() {

	//User defined "end" number for 3 - end to calculate prime
	int k;

	cout << "Enter a number ";
	cin >> k;


	//Checks if each number between 3 to user-defined end int "k" is a prime number
	for(int start = 3; start < k; start++){
		isPrime(start);
	}

	return 0;
}

void isPrime(int k){

	//Creates a state boolean for prime to true - standard
	bool checkPrime = true;

	//If the number is 2 or 3 it will automatically print
	if(k == 2 || k == 3){
		cout << k;
		cout << " is a prime number";
		cout << endl;
	} else {
		//Checks values from 2 to user-end integer k and sees if the set k is divisible by any of the numbers in the middle, if so - it is not prime
		for(int i = 2; i < k; i++){
			if(k % i == 0){
				checkPrime = false;
			}
		}

		//After the for loop, if there was no divisible numbers (checkPrime = true) the number is printed as prime, if there was - there is no action
		if(checkPrime){
			cout << k;
			cout << " is a prime number";
			cout << endl;
		}
	}
}

/*
 * Console Output:
 *
 * Enter a number 16
 * 3 is a prime number
 * 5 is a prime number
 * 7 is a prime number
 * 11 is a prime number
 * 13 is a prime number
 *
 */
