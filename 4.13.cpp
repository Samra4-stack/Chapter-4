// Write a Program that input two numbers, swaps the values and then display them.
#include<iostream>
using namespace std;
int main()
{
    int a, b , c;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    c = a ; // Swapping values by using a third variable
    a = b;
    b = c;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}