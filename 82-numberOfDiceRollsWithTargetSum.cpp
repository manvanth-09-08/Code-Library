https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/

class Solution {
public:
    int mod=1e9+7;
    int dp[32][1011];
    int f(int remainingDice, int k, int target)
    {
        if(target==0 && remainingDice==0) return 1;
        if(target<=0 || remainingDice<=0) return 0;
        if(dp[remainingDice][target]!=-1) return dp[remainingDice][target];
        int ans=0;
        for(int x=1; x<=k; x++)
        {
            ans=(ans%mod+f(remainingDice-1,k,target-x)%mod)%mod;
        }
        return dp[remainingDice][target]=ans;
    }
    int numRollsToTarget(int n, int k, int target) 
    {
        memset(dp,-1,sizeof(dp));
        return f(n,k,target);
    }
};