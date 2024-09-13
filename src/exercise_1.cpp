/*Implement a program that takes a positive integer as user-input and returns the sum of all posi􀆟ve integers
up to and including the given integer.
Use a while-loop for calculating the sum.*/
#include <iostream>
using namespace std;

int main() {
 // 
int n;
cout << "Enter a positive integer"
cin >> n; 

int total_sum =0;
int counter =1;

while (counter <=n) {
total_sum +=counter;
counter++;

cout << "the sum of all targets from 1 to " << n <<< "is" << total_sum << endl;
return 0;
}
