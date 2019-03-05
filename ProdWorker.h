#ifndef PRODWORKER_H
#define PRODWORKER_H
#include "EmpClass.h"

class ProductionWorker: public Employee
{
    private:
        int shift;
        double hourlyPayRate;
    public:
        ProductionWorker() : Employee()
        {
            shift = 0;
            hourlyPayRate = 0.0;
        }
        
        ProductionWorker(string workerName, int workerNumber, string workerHire, int s, double hourlyPay) :
            Employee(workerName, workerNumber, workerHire)
        {
            shift = s;
            hourlyPayRate = hourlyPay;
        }
        
        void setShift(int s)
        {shift = s;}
        
        void setHourlyPayRate(double hourlyPay)
        {hourlyPayRate = hourlyPay;}
        
        int getShift() const
        {
            if (shift == 1)
            { cout << "Day Shift - ";}
            else if (shift == 2)
            {cout << "Night Shift - ";}
            else
            {cout << "Please enter a valid shift";}
            
            return shift;
            
        }
        
        double getHourlyPay() const
        {return hourlyPayRate;}
        
        
};

#endif