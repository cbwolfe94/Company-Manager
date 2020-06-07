#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee{
public:
	Employee();
	void getEmployeeInfo();
	std::string m_firstName, m_lastName;
    	std::string m_address;
   	int m_age;
	int m_IDNumber;
	Employee* nextEmployee;
	std::string getEmployeeFirstName();
	std::string getEmployeeLastName();
	std::string getEmployeeAddress();
	int getEmployeeAge();
	int getEmployeeIDNumber();
	int virtual getSalary();
	void virtual changeYearlySalary();
private:
	void setEmployeeIDNumber();	
	void setEmployeeFirstName();	
	void setEmployeeLastName();
	void setEmployeeAddress();
	void setEmployeeAge();

};

class HourlyEmployee : public Employee {
public:
	HourlyEmployee();
	int getSalary();
	void changeYearlySalary();
private:
	int m_yearlySalary;

};

class SalaryEmployee : public Employee {
public:
	SalaryEmployee();
	int getSalary();
	void changeYearlySalary();
private:
	int  m_yearlySalary;
};

class Manager : public Employee {
public:
	Manager();
	int getSalary();
	void changeYearlySalary();
private:
	int m_yearlySalary;
};

class Executive : public Employee {
public:
	Executive();
	int getSalary();
	void changeYearlySalary();
private:
	int m_yearlySalary;
};

#endif
