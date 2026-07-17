class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int task_finished = INT_MAX;
        int time = 0;
        for(int i=0 ;i<tasks.size() ;i++)
        {
            time =0;
            for(int j=0 ;j<tasks[0].size() ;j++)
            {
                time += tasks[i][j];
            }
            task_finished = min(task_finished , time);
        }
        return task_finished;
    }
};
