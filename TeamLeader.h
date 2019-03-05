#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "ProdWorker.h"
#include <iostream>
#include <string>

using namespace std;

class TeamLeader : public ProductionWorker
{
    private:
        double bonusAmount;
        int requiredTrainingHours;
        int leadersTrainingHours;
    public:
        TeamLeader() : ProductionWorker()
        {
            bonusAmount = 0.00;
            requiredTrainingHours = 0;
            leadersTrainingHours = 0;
        }
        
        TeamLeader(string leaderName, int leaderNumber, string leaderHireDate, 
            int leaderShift, double leaderHourlyPay, double bonus, int reqHours, int trainingHours) :
            ProductionWorker(leaderName, leaderNumber, leaderHireDate, leaderShift, leaderHourlyPay)
            {
                bonusAmount = bonus;
                requiredTrainingHours = reqHours;
                leadersTrainingHours = trainingHours;
            }
            
        void setBonus(double b)
        {bonusAmount = b;}
        
        void setReqHours(int h)
        {requiredTrainingHours = h;}
        
        void setLeadersHours(int lh)
        {leadersTrainingHours = lh;}
        
        double getBonus() const
        {return bonusAmount;}
        
        int getReqHours() const
        {return requiredTrainingHours;}
        
        int getLeadersHours() const
        {return leadersTrainingHours;}
};

#endif