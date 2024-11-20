/* Write a Program that Calculates the final velocity of an object by taking following 
values from the user: vi , a , t  Formula => vf = vi + at */
#include <iostream>
using namespace std;
int main()
{
    int vi , a, t ;
    cout << "Enter initial velocity (vi), acceleration (a) and time (t): ";
    cin >> vi >> a >> t;
    cout << "Final velocity (vf) = " << vi + a*t << endl;
    return 0;
}