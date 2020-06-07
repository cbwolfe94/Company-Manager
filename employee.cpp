#include <cstdio>
#include <iostream>
#include <iterator>
#include "employee.h"
#include <string>

Employee::Employee(){
	setEmployeeFirstName();
	setEmployeeLastName();
	setEmployeeAddress();
	setEmployeeAge();
	setEmployeeIDNumber();
}

std::string Employee::getEmployeeFirstName() {
	return m_firstName;
}

std::string Employee::getEmployeeLastName() {

	return m_lastName;
}

std::string Employee::getEmployeeAddress() {
	return m_address;
}

int Employee::getEmployeeAge() {
	return m_age;
}

int Employee::getEmployeeIDNumber() {
	return m_IDNumber;
}

int Employee::getSalary() {
	return 0;
}

int HourlyEmployee::getSalary() {
	return m_yearlySalary;
}

int SalaryEmployee::getSalary() {
	return m_yearlySalary;
}

int Manager::getSalary() {
	return m_yearlySalary;
}

int Executive::getSalary() {
	return m_yearlySalary;
}
void Employee::changeYearlySalary() {
	return;
}

void HourlyEmployee::changeYearlySalary() {
	int newSalary;
	std::cout << "Enter new salary for employee: " << std::endl;
	std::cin >> newSalary;
	m_yearlySalary = newSalary;
}


void SalaryEmployee::changeYearlySalary() {
	int newSalary;
	std::cout << "Enter new salary for employee: " << std::endl;
	std::cin >> newSalary;
	m_yearlySalary = newSalary;
}
void Manager::changeYearlySalary() {
	int newSalary;
	std::cout << "Enter new salary for employee: " << std::endl;
	std::cin >> newSalary;
	m_yearlySalary = newSalary;
}
void Executive::changeYearlySalary() {
	int newSalary;
	std::cout << "Enter new salary for employee: " << std::endl;
	std::cin >> newSalary;
	m_yearlySalary = newSalary;
}

void Employee::setEmployeeFirstName() {
	std::cin.ignore();
	std::cout << "Enter new employees first name: "<< std::endl;
	std::getline(std::cin, m_firstName);
}

void Employee::setEmployeeLastName() {
	
	std::cout << "Enter new employees last name: " << std::endl;
	std::getline (std::cin, m_lastName);
		
}

void Employee::setEmployeeAddress() {
	std::cout << "Enter new employees address: " << std::endl;
	std::getline (std::cin, m_address);
}

void Employee::setEmployeeAge() {
	std::cout << "Enter new employees age: " << std::endl;
	std::cin >> m_age;
	
}

void Employee::setEmployeeIDNumber() {
	std::cout << "Enter new employees ID number: "<< std::endl;
	std::cin >> m_IDNumber;
}

void Employee::getEmployeeInfo() {
	std::cout << getEmployeeFirstName() << " " << getEmployeeLastName() << " " << getEmployeeIDNumber() << " " << getEmployeeAge() << std::endl;
	std::cout << getEmployeeAddress() << std::endl;
	std::cout << std::endl;

}

HourlyEmployee::HourlyEmployee():Employee() {
	 m_yearlySalary = 40000;
}


SalaryEmployee::SalaryEmployee():Employee() {
	m_yearlySalary = 60000; 
}


Manager::Manager():Employee() {
	m_yearlySalary = 100000;
}


Executive::Executive():Employee() {
	m_yearlySalary = 150000;	
}

