#pragma once

#ifndef PAYRROLL_H
#define PAYROLL_H

class Payroll
{
	private:
		double hourlyRate;		//Employee's rate for the week
		double hoursWorked;		//Employee's hours worked this week
		double totalPay;		//Total pay earned this week
		
		//Internal only function to set totalPay
		void initTotalPay();

	public:
		//Constructors
		Payroll();
		Payroll(double, double);

		//Mutators
		void setHourlyRate(double);
		void setHoursWorked(double);

		//Accessors
		//These could be inline
		double getHourlyRate();
		double getHoursWorked();
		double getTotalPay();
};

#endif 
