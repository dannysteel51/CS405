// Module 2 Assign 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>
#include <iomanip>
#include <iostream>

using namespace std; // This isn't best pratice, but it's easier for this assignment; less clutter in if/else statements in main

int main()
{
	std::cout << "Buffer Overflow Example" << std::endl;

	// TODO: The user can type more than 20 characters and overflow the buffer, resulting in account_number being replaced -
	//  even though it is a constant and the compiler buffer overflow checks are on.
	//  You need to modify this method to prevent buffer overflow without changing the account_order
	//  varaible, and its position in the declaration. It must always be directly before the variable used for input.

	const char MAX_SIZE = 21; // 20 characters + null terminator

	const std::string account_number = "CharlieBrown42";
	char* user_input = new char [MAX_SIZE]; // Allocate memory for user input
	cout << "Enter a value: ";
	cin.getline(user_input, MAX_SIZE); // Get user input, max 20 characters

	if (!cin || cin.fail() || cin.eof()) // Check for input failure
	{
		cin.clear(); // Clear error flags
		cout << "You entered: " << user_input << endl;
		cout << "Input failed. BufferOverflow was detected." << std::endl; // Print error message

	}

	else
	{
		cout << "You entered: " << user_input << std::endl; // Print user input
		cout << "Account Number = " << account_number << std::endl; // Print account number
	}
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
