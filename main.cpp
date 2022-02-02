#include <iostream>
using namespace std;

int main() {
    // Input variables
    double totalHoursWorked, overtimeHours, hourlyWage;

    // Take inputs
    cout << "How many hours did you work this week?";
    cin >> totalHoursWorked;
    cout << endl;

    cout << "How many hours overtime?";
    cin >> overtimeHours;
    cout << endl;

    cout << "What is your hourly wage?";
    cin >> hourlyWage;
    cout << endl;

    // Calculate paycheck
    double hoursWorked = totalHoursWorked - overtimeHours;
    double regularHoursPaymentTotal = hoursWorked * hourlyWage;
    double overtimeHoursPaymentTotal = overtimeHours * (hourlyWage * 1.5);
    double totalPayment = regularHoursPaymentTotal + overtimeHoursPaymentTotal;

    // Print information
    cout << "This week I worked " << totalHoursWorked << " and my paycheck is $" << totalPayment;

    return 0;
}
