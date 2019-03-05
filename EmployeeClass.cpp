#include <iostream>
#include "EmpClass.h"
#include "ProdWorker.h"

using namespace std;

int main()
{
    ProductionWorker worker("Nick", 5304, "March 02, 2019", 1, 27.00);
    
    cout << "Employee name: " << worker.getName() << endl;
    cout << "Employee number: " << worker.getNumber() << endl;
    cout << "Employee's hire date: " << worker.getDate() << endl;
    cout << "Employee's shift: ";
    cout << worker.getShift() << endl;
    cout << "Employee's hourly pay rate: " << worker.getHourlyPay() << endl;
    
    return 0;
}