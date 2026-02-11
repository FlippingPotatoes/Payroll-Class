//Creates and demonstrates a Payroll class
#include <iostream>
#include <iomanip>
#include <string>
#include "Payroll.h"

using namespace std;

int main()
{
	//Initialize array of employees
	const int NUM_EMPLOYEES = 7;
	Payroll allEmployees[NUM_EMPLOYEES];

	//Get the values for all employees
	cout << "Please input the data for the " << NUM_EMPLOYEES << " employees.";
	for (int i = 0; i < NUM_EMPLOYEES; i++)
	{
		double hr;		//Temporary hourlyRate variable
		double hw;		//Temporary hoursWorked variable

		//Prompt user to give values
		cout << "\nWhat is employee " << i + 1 <<"'s hourly rate?: $";
		cin >> hr;
		cout << "How many hours has employee " << i + 1 << " worked?: ";
		cin >> hw;
		//Simple validation to keep hours worked less than or equal to 60
		while (hw > 60)
		{
			cout << "\nError: Hours worked can't be higher than 60.\n";
			cout << "How many hours has employee " << i + 1 << " worked?: ";
			cin >> hw;
		}

		//Set the recieved values
		allEmployees[i].setHourlyRate(hr);
		allEmployees[i].setHoursWorked(hw);
	}

	//Overly formatted header
	cout << left << setw(12) << "Employee #" << "|" << right << setw(10) << "Gross Pay";

	//Loop to display a table of employees and their gross pay
	for (int i = 0; i < NUM_EMPLOYEES; i++)
	{
		cout << "\nEmployee " << left << setw(3) <<  i + 1 << "|"
			<< right << setw(10) << fixed << setprecision(2) << allEmployees[i].getTotalPay();
	}

	cout << "\n\nA Program by Spencer Curtis\n\n";

	return 0;
}