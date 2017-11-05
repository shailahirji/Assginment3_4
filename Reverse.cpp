//============================================================================
// Name        :Reverse.cpp
// Author      :Shaila Hirji
// Version     :
// Copyright   : Your copyright notice
// Description : This application prints out a number that user input's in the reverse order using recursive fucntion calls
//============================================================================
#include<iostream>

using namespace std;

void reverse(int);


int main() {

    int number;
    cout << "Enter number:";
    cin >> number;

    reverse(number);// call recursive reverse function

    return 0;
};

/*
 * This is a recursive function that prints a number in the reverse order
 */

void reverse(int number) {

    //base case:
    if (number / 10 == 0) { //reached first digit of the number
        cout << number % 10; //print number
    } else { //more numbers present
        cout << number % 10; //print the last digit
        reverse(number / 10);//recursive call on the remaining number (number without the last digit)

    }

}