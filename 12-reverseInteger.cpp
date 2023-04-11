/// Question : https://leetcode.com/problems/reverse-integer/




int reverse(int x){
    long int c=0;
    while(x)
    {
        c=c*10+x%10;
        x=x/10;
        if(c>(pow(2,31)-1) || c<(pow(-2,31)))
            return 0;
    }
    return c;
}