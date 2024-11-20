/* Write a program that will prompt the user to enter the current rates 
of Electricity, gas & petrol per unit.Give Each item's rate an increment of 10%.
Compute & display the new prices per unit of electricity , gas & petrol. */
#include <iostream>
using namespace std;
int main()
{
    int Electricity_bill , gas_bill , petrol_rate ;
    cout << "Enter the current rates for Electricity"<< endl;
    cout<< "Enter gas bill: " << endl;
    cout<< "Enter petrol rate per unit: "<< endl ;
    cin >> Electricity_bill ;
    cin >> gas_bill ;
    cin >> petrol_rate ;
    cout << "New prices for Electricity, gas & petrol rate per unit after 10% increment: "<< endl ;
    Electricity_bill = Electricity_bill + (Electricity_bill * 10/100) ;
    gas_bill = gas_bill + (gas_bill * 10/100) ;
    petrol_rate = petrol_rate + (petrol_rate * 10/100) ;
    cout <<"Your Electricity bill ="<< Electricity_bill << endl;
    cout << "Your gas bill= " << gas_bill<< endl;
    cout<< "New petrol rate= " << petrol_rate<< endl;
    return 0 ;
}