//https://leetcode.com/problems/string-to-integer-atoi/


class Solution {
public:
    int myAtoi(string s) {
        long long result=0;
        int i=0;
        while(s[i]==' ')
            i++;
        bool isNegative=false;
        bool isChar=false;

        if(s[i]=='-'){
              isNegative=true;
              isChar=true;
              i++;
              
        }
         
        {
            if(s[i]=='+' && !isChar)
            i++;

             if(s[i]<'0' || s[i]>'9')
                return 0;

            else{
                while(s[i]>='0' && s[i]<='9' && i<s.length())
                {
                    int x=s[i]-'0';
                    cout<<x<<endl;
                    
                    result=result*10+x;
                    if(result>INT_MAX)
                    {
                          if(isNegative)
                            return INT_MIN;

                            return INT_MAX;
                    }
                    i++;
                }
            }
             

        }

        if(isNegative)
        return result*-1;

        return result;
    }
};