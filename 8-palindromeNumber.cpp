//https://leetcode.com/problems/palindrome-number/




bool isPalindrome(int x){
    
   long long c=0,n=x;
    while(x)
    {
        c=c*10+x%10;
        x=x/10;
    }
    
    if(n==c && n>=0)
        return true;
    else
        return false;
}