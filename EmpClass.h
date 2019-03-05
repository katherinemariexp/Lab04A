#ifndef EMPCLASS_H
#define EMPCLASS_H
#include <iostream>
#include <string>

using namespace std;

class Employee
{
    private: 
        string employeeName;
        int employeeNumber;
        string hireDate;
        
    public:
        Employee()
        {
            employeeName = "";
            employeeNumber = 0;
            hireDate = "";
        }
        
        Employee(string name, int number, string hire)
        {
            employeeName = name;
            employeeNumber = number;
            hireDate = hire;
        }
        
        void setName(string name)
        {employeeName = name;}
        
        void setNumber(int number)
        {employeeNumber = number;}
        
        void setDate(int date)
        {hireDate = date;}
        
        string getName()
        {return employeeName;}
        
        int getNumber() const
        {return employeeNumber;}
        
        string getDate() const
        {return hireDate;}
};

#endif