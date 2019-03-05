#include <iostream>
#include "TeamLeader.h"

using namespace std;

int main()
{
    TeamLeader Leader("Brian", 4306, "October 09, 2017", 2, 45.32, 5000, 300, 250);
    
    cout << "Leader's name: " << Leader.getName() << endl;
    cout << "Leader's number: " << Leader.getNumber() << endl;
    cout << "Leader's hire date: " << Leader.getDate() << endl;
    cout << "Leader's shift: ";
    cout << Leader.getShift() << endl;
    cout << "Leader's hourly pay rate: " << Leader.getHourlyPay() << endl;
    cout << "Leader's monthly bonus: " << Leader.getBonus() << endl;
    cout << "Required minimum hours of training per year: " << Leader.getReqHours() << endl;
    cout << "Training hours attended by leader: " << Leader.getLeadersHours() << endl;
    
    return 0;
}