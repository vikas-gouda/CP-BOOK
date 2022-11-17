// link  https://leetcode.com/problems/length-of-last-word/


class Solution {
public:
    int  lengthOfLastWord(string s) {
        
        int cnt=0;
        int n = s.length()-1;
        bool k = false;
        for(int i=n; i>=0; i--)
        {
            if(s[i]==' ')
            {
                if(k == true)
                {
                    break;
                }
                continue;
            }
            else
            {
                cnt++;
                k=true;
            }
        }
        
        return cnt;

    }
};
