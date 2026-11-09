class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {

        int g_count = 0;
        int p_count = 0;
        int m_count = 0;

        int g_last = 0;
        int p_last = 0;
        int m_last = 0;

        int sum = 0;

        for(int i = 0; i < garbage.size(); i++)
        {
            for(int j = 0; j < garbage[i].size(); j++)
            {
                if(garbage[i][j] == 'G')
                {
                    g_count++;
                    g_last = i;
                }
                else if(garbage[i][j] == 'P')
                {
                    p_count++;
                    p_last = i;
                }
                else if(garbage[i][j] == 'M')
                {
                    m_count++;
                    m_last = i;
                }
            }
        }

        sum = g_count + p_count + m_count;

        for(int i = 0; i < g_last; i++)
            sum += travel[i];

        for(int i = 0; i < p_last; i++)
            sum += travel[i];

        for(int i = 0; i < m_last; i++)
            sum += travel[i];

        return sum;
    }
};
