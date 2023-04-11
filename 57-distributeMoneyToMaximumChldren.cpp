https://leetcode.com/problems/distribute-money-to-maximum-children/

class Solution {
public:
    int distMoney(int money, int children) {
        
        if(children > money)
        {
            return -1;
        }
        if(money < 8)
        {
            return 0;
        }
        int count = money/8;
        int r  = money%8;
        if(count == children && r == 0)
        {
            return children;
        }
        if(count >= children)
        {
            return children-1;
        }
        if(r ==4 && (children-count)==1)
        {
            return count-1;
        }
        if(r >= (children-count))
        {
            return count;
        }
        int left = children-count;
        while(r < left)
        {
           left++;
           r +=8;
           count--;
        }
       return count;
    }
};