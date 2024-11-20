/*Write a Program that inputs two numbers, swaps these values without using third variable
and displays them. */
// Write a Program that input two numbers, swaps the values and then display them.
#include<iostream>
using namespace std;
int main()
{
    int a, b , c;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    a = a + b ; // Swapping values by using a third variable
    b = a - b ;
    a = a - b ; // Subtracting the third variable from the first to get the second value 
   
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;  // Return 0 to indicate the program ended successfully.
}