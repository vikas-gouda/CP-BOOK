// link  https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        if(m==0){ // size zero 
            return 0;
        }
        
        int i=0;
        int j=0;
        while(i<n){
            if(haystack[i]==needle[j]){ // checks if first char is same or not
                int index=i; // storing the index
                int k=i;
                while(haystack[k]==needle[j] && j<m){ // traversing the haystack and comparing the haystack and needle element
                    k++; //
                    j++;
                }
                
                if(j==m){ // j becomes equal to the the needle.size()
                    return index;
                }
                else{
                    j=0; // again traversing the needle
                }
            }
            i++;// moving one char in haystack
        }
        return -1;
    }
};

