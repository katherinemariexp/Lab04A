#ifndef EMPCLASS_H
#define EMPCLASS_H

class Employee
{
    private: 
        string employeeName;
        int employeeNumber;
        string hireDate;
        
    publlic:
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
        
        int getNumber()
        {return employeeNumber;}
        
        string getDate()
        {return hireDate;}
};

#endif