#include <iostream>
#include "company.h"
#include "employee.h"
#include <string>

Employee* topEmployee = NULL;

Company::Company(std::string companyName) {
	std::string m_companyName = companyName;
}

void Company::hireNewEmployee() {
	int choice;
	HourlyEmployee* tempHourlyEmployee = NULL;
	SalaryEmployee* tempSalaryEmployee = NULL;
	Manager* tempManager = NULL;
	Executive* tempExecutive = NULL;



	std::cout << "Enter 1 for Hourly Employee, 2 for Salary Employee, 3 for Manager, or 4 for Executive: ";
	std::cin >> choice;

	switch (choice) {
		case 1:
			tempHourlyEmployee = new HourlyEmployee;	
			tempHourlyEmployee->nextEmployee = topEmployee;
			topEmployee = tempHourlyEmployee;
			//tempHourlyEmployee->printSalary();
			//std::cout << topEmployee->nextEmployee << std::endl;
			break;

		case 2:
			tempSalaryEmployee = new SalaryEmployee;
			tempSalaryEmployee->nextEmployee = topEmployee;
			topEmployee = tempSalaryEmployee;
			break;

		case 3:
			tempManager = new Manager;
			tempManager->nextEmployee = topEmployee;
			topEmployee = tempManager;
			break;

		case 4:
			tempExecutive = new Executive;
			tempExecutive->nextEmployee = topEmployee;
			topEmployee = tempExecutive;
			break;
	}
	return;
};

void Company::fireEmployee(){
	int IDNumber;
	std::cout << "Enter employee ID number for employee to be fired: " << std::endl;
	std::cin >> IDNumber;
	Employee* temp = topEmployee, *prev;

	if (temp!= NULL && temp->m_IDNumber == IDNumber) {
		topEmployee = topEmployee->nextEmployee;
		delete temp;
		std::cout << "Employee has been fired." << std::endl;
		return;
	}	

	while (temp != NULL && temp->m_IDNumber != IDNumber) {
		prev = temp;
		temp = temp->nextEmployee;
	}	
	
	if (temp == NULL) {
		std::cout << "Employee can not be found." << std::endl;
		return;
	}
	
	prev->nextEmployee = temp->nextEmployee;
	delete temp;
	std::cout << "Employee has been fired." << std::endl;
	return;
	
}

void Company::giveEmployeeRaise() {
	int IDNumber;
	std::cout << "Enter employee ID number for employee to be given a raise: " << std::endl;
	std::cin >> IDNumber;
	Employee* temp = topEmployee, *prev;

	if (temp!= NULL && temp->m_IDNumber == IDNumber) {
		temp->changeYearlySalary();
		std::cout << "Employee has been given a raise." << std::endl;
		return;
	}	

	while (temp != NULL && temp->m_IDNumber != IDNumber) {
		temp = temp->nextEmployee;
	}	
	
	if (temp == NULL) {
		std::cout << "Employee can not be found." << std::endl;
		return;
	}
	
	temp->changeYearlySalary();	
	std::cout << "Employee has been given a raise." << std::endl;
	return;
}

void Company::viewEmployeeList() {
	Employee* temp = topEmployee;
	while(temp != NULL) {
		std::cout << temp->getSalary() << std::endl;
		temp->getEmployeeInfo();	
		temp = temp->nextEmployee;
		
	}	
}
