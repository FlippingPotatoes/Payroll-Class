#include "Payroll.h"
#include <iostream>

using namespace std;

//Only called by other methods when initializing
//or changing a value.
void Payroll::initTotalPay()
{
	totalPay = hourlyRate * hoursWorked;
}

Payroll::Payroll()
{
	hourlyRate = 0.0;
	//calls setHoursWorked to use its logic and conveniently 
	//initialize total pay as well
	setHoursWorked(0.0);
}
//Default and otherwise constructor
Payroll::Payroll(double hr = 0.0, double hw = 0.0)
{
	hourlyRate = hr;
	//calls setHoursWorked to use its logic and conveniently 
	//initialize total pay as well
	setHoursWorked(hw);
}

//Mutator for hourlyRate, also recalculates total pay's value
void Payroll::setHourlyRate(double hr)
{
	//This would be a could spot to prevent negatives
	//and such but it doesn't ask for it.
	hourlyRate = hr;
	initTotalPay();
}

//Mutator for hours worked, only accepts less or equal to 60 hours,
//and recalculates total pay's value
void Payroll::setHoursWorked(double hw)
{
	if (hw <= 60)
	{
		hoursWorked = hw;
		initTotalPay();
	}
	else
	{
		cout << "Error: Hours worked cannot be greater than 60";
		exit(EXIT_FAILURE);
	}
}

//Simple accessor for hourlyRate
double Payroll::getHourlyRate()
{
	return hourlyRate;
}

//Simple accessor for hoursWorked
double Payroll::getHoursWorked()
{
	return hoursWorked;
}

//Simple accessor for TotalPay.
//Could calculate the value here if 
//book didn't want a data member.
double Payroll::getTotalPay()
{
	return totalPay;
}

