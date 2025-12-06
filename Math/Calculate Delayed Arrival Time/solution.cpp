class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int Arrival_time = 0;
        Arrival_time = arrivalTime + delayedTime;
        
        if(Arrival_time == 24)
        {
            return 0;
        }
        else if(Arrival_time >24)
        {
           
            return Arrival_time -24;
        }
        return Arrival_time;
    }
};
