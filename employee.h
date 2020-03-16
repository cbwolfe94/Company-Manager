#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee{
    std::string firstName, lastName;
    std::string address;
    int age;
    private:

}

class HourlyEmployee : protected Employee {
    float startingHourlyRate;
}

class SalaryEmployee : protected Employee {
    float startingSalary;
}