class Solution {
public:
    int minPartitions(string n) {
        int max=0;
        for(int i=0;i<n.length();i++)
        {
            int x=n[i]%48;
            if(x==9)
            {
                return 9;
            }
            else if(x>max)
                max=x;
        }
        return max;
    }
};