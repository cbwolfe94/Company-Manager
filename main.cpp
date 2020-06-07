#include <iostream>
#include "employee.h"
#include "company.h"
#include <string>

int main(){
	int choice;
	std::string companyName;
	std::cout << "Enter company name: " << std::endl;
	std::getline (std::cin, companyName);

	std::cout << "Created new company." << std::endl;
	Company newCompany = Company(companyName);
	
	while(1) {
		std::cout << "Enter a 1 for hiring a new employee, 2 for firing an employee, 3 for giving a raise, 4 for displaying company employee list, or 5 for exit. ";
		std::cin >> choice;
			
		switch(choice) {
			case 1:
				newCompany.hireNewEmployee();
				break;
			
			case 2:
				newCompany.fireEmployee();
				break;

			case 3:
				newCompany.giveEmployeeRaise();
				break;

			case 4:
				newCompany.viewEmployeeList();
				break;

			case 5:
				exit(0);
		}

	}
	return 0;
}
