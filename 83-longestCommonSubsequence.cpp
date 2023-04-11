https://leetcode.com/problems/longest-common-subsequence/

class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        int x=s1.length(),y=s2.length();
        int a[x+1][y+1];
        for(int i=0;i<=x;i++)   
            a[i][0]=0;
        
         for(int i=0;i<=y;i++)   
            a[0][i]=0;
            
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=y;j++)
            {
                if(s1[i-1]==s2[j-1])
                    a[i][j]=a[i-1][j-1]+1;
                else
                    a[i][j]=max(a[i-1][j],a[i][j-1]);
            }
        }
        
        return a[x][y];
    }
};