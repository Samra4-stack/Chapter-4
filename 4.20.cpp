/*Write a program that inputs radius from user and Calculate Area and Circumference of
circle using the formula  Area = pie*r^2 & Circumference = 2*pie*r */
#include <iostream>
using namespace std;
int main()
{
    int radius;
    float pie = 3.14159;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle is: " << pie * radius * radius << endl;
    cout << "Circumference of the circle is: " << 2 * pie * radius << endl;
    return 0;
}