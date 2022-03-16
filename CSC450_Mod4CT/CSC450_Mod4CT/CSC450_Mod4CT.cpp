
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Initialize variables and pointers
    double stdHours;
    double* stdHoursPtr = new double[1];
    double payRate;
    double* payRatePtr = new double[1];
    double otHours;
    double* otHoursPtr = new double[1];
    
    //Get info from user
    cout << "Please enter the number of Standard Hours worked: ";
    cin >> stdHours;
    *stdHoursPtr = stdHours;
    cout << "Please enter the number of Overtime Hours worked: ";
    cin >> otHours;
    *otHoursPtr = otHours;
    cout << "Please enter your Rate of Pay: ";
    cin >> payRate;
    *payRatePtr = payRate;
    
    //Calculate total pay using values found by pointers
    double totalPay = (*stdHoursPtr * *payRatePtr) + (*otHoursPtr * (1.5 * *payRatePtr));

    //Print info about paycheck
    cout << "\nYour Pay Stub:\n------------------------------------" << endl;

    cout << "Standard Hours: " << endl;
    cout.setf(ios::fixed);
    cout << setw(30) << setprecision(2) << *stdHoursPtr << endl;

    cout << "Standard Pay Rate: " << endl;
    cout << setw(30) << *payRatePtr << endl;

    cout << "Overtime Hours: " << endl;
    cout << setw(30) << *otHoursPtr << endl;

    cout << "Overtime Pay Rate: " << endl;
    cout << setw(30) << (*payRatePtr * 1.5) << endl;

    cout << "Total Pay: " << endl;
    cout << setw(30) << totalPay;

    //Print variable values
    cout << "\n\nVariable Values via Direct Access:\n------------------------------------" << endl;
    cout << "Standard Hours: \n" << setw(30) << stdHours << endl;
    cout << "Overtime Hours: \n" << setw(30) << otHours << endl;
    cout << "Pay Rate: \n" << setw(30) << payRate << endl;

    //Print values found by pointers
    cout << "\n\nVariable Values via Pointer Access:\n------------------------------------" << endl;
    cout << "Standard Hours: \n" << setw(30) << *stdHoursPtr << endl;
    cout << "Overtime Hours: \n" << setw(30) << *otHoursPtr << endl;
    cout << "Pay Rate: \n" << setw(30) << *payRatePtr << endl;

    //Delete pointers to clear memory
    delete[] stdHoursPtr;
    delete[] otHoursPtr;
    delete[] payRatePtr;

    cout << "Done\n";

    return 0;
}
