#ifndef COMPANY_H
#define COMPANY_H
#include "employee.h"
#include <string>

class Company {
public:
	Company(std::string companyName);
	void hireNewEmployee();
	void fireEmployee();
	void viewEmployeeList();
	void giveEmployeeRaise();
private:
	
	std::string m_companyName;
};

#endif
