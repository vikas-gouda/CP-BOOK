// link  https://leetcode.com/problems/guess-number-higher-or-lower/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        int low = 1;
        int high = n;
        int mid = low + (high -low)/2;
        int ans =-1;
        while(low<=high)
        {
            
            int num = guess(mid);
            
            if(num == 0)
            {
                ans = mid;
                break;
            }
            else if(num ==-1)
            {
                high = mid-1;
            }
            else if( num == 1)
            {
                low = mid+1;
            }
            mid = low + (high -low)/2;
        }
        
        return ans;
    }
};
