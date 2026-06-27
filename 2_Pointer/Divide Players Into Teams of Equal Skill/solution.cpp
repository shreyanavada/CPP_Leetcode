class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        if(skill.size() ==  2)
        {
            return skill[0]*skill[1];
        }
        sort(skill.begin() ,skill.end());
        long long n =skill.size();
        long long skill_sum =skill[0]+skill[n-1];
        
        long long mul = skill[0]*skill[n-1];
        long long sum = mul;
        long long p1=1;
        long long p2 = skill.size()-2;
        while(p1<p2)
        {
            if(skill_sum == skill[p1]+skill[p2])
            {
                mul = skill[p1]*skill[p2];
                sum += mul;
                p1++ , p2--;
            }
            else
            {
                return -1;
            }
        }
        return sum;

        
    }
};
