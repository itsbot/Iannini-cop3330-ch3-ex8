/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Patrick Iannini
 */

/*
Write a program to test an integer value to determine 
if it is odd or even. As always, make sure your output 
is clear and complete. In other words, don’t just output 
yes or no. Your output should stand alone, like The 
value 4 is an even number. Hint: See the remainder (modulo) 
operator in §3.4.
*/


#include <iostream>
using namespace std;

int main() {
    cout << "Enter an integer: ";
    int uInput;
    cin >> uInput;

    int remainder = uInput % 2;

    if (remainder == 0) {
        cout << "The value " << uInput << " is an even number";
    } else {
        cout << "The value " << uInput << " is an odd number";

    }
    
    return 0;
}
