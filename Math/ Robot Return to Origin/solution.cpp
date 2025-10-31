class Solution {
public:
    bool judgeCircle(string moves) {
        int ans = 0 ;
        int r=0 , l=0 , d=0 ,u =0 ; // count of right , left , down and up .
        for(int i = 0; i < moves.size(); i++)
        {
            char c = moves[i];
            switch( c)
            {
                case 'U' : u++;
                        break;
                case 'D' : d++;
                        break;
                case 'L' : l++;
                        break;
                case 'R' : r++;
                        break;
            }
        }
        if(r==l && d==u)
        {
            return true;
        }
        else
        {
            return false;
        }
            

        
        return 0;
    }
};
