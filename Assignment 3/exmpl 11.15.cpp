#include <iostream>
using namespace std;

union Employee
{
	struct
{
	int hoursWorked;
	double hourlyRate;
}hourlyPaid;;
	struct
{
	
	double salary;
	double bonus;
}salaried;

};
  
	int main()
{
	union Employee emp;
	int employeeType;
	int hoursWorked;
	double hoursWorked1,hourlyRate1,salary1,bonus1;
	cout<<"\nEnter the type of Employee <1-salaried, 2-hourlyPaid>: ";
	cin>>employeeType;

if(employeeType == 1)
{
	cout<<"\nEnter salary : ";
	cin>>salary1;
	if(salary1 < 0)
{
	cout<<"\nSalary cannot be negative.Enter again";
	cin>>salary1;
}
  
	emp.salaried.salary = salary1;
	cout<<"\nEnter bonus : ";
	cin>>bonus1;
	if(bonus1 < 0)
{
	cout<<"\nbonus cannot be negative.Enter again";
	cin>>bonus1;
}
	emp.salaried.bonus = bonus1;
	cout<<"\nTotal Pay = "<<(emp.salaried.salary + emp.salaried.bonus);
}
	else if(employeeType == 2)
{
	cout<<"\nEnter HourlyRate : ";
	cin>>hourlyRate1;
	if(hourlyRate1 < 0)
{
	cout<<"\nHourly pay rate cannot be negative.Enter again";
	cin>>hourlyRate1;
}
	emp.hourlyPaid.hourlyRate= hourlyRate1;
	cout<<"\nEnter number of HoursWorked : ";
	cin>>hoursWorked1;
	if(hoursWorked1 < 0 || hoursWorked1 > 80)
{
	cout<<"\nHours Worked cannot be negative or greater than 80.Enter again";
	cin>>hoursWorked1;
}
	emp.hourlyPaid.hoursWorked = hoursWorked1;
	cout<<"\nTotal Pay = "<<(emp.hourlyPaid.hourlyRate * emp.hourlyPaid.hoursWorked);
  
}


   return 0;
}
