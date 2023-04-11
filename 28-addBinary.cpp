https://leetcode.com/problems/add-binary/

class Solution {
public:
     string addBinary(string a, string b) {
        stack<char> s;
        int n1=a.size(),n2=b.size();
        if(a.size()>b.size())
        {
            reverse(b.begin(),b.end());
            int a1=a.size()-b.size();
            while(a1--)
            {
                b+='0';
            }
            reverse(b.begin(),b.end());
        }
        else if(b.size()>a.size())
        {
            reverse(a.begin(),a.end());
            int a1=b.size()-a.size();
            while(a1--)
            {
                a+='0';
            }
            reverse(a.begin(),a.end());
        }
        // return b;
        char carry='0';
        int i=a.size()-1;
        while(i>=0)
        {
            if(a[i]=='1' && b[i]=='1')
            {
                if(carry=='1')
                {
                    carry='1';
                    s.push('1');
                }
                else
                {
                    carry='1';
                    // s+='0';
                    s.push('0');
                }
                i--;
            }
            else if(a[i]=='1' && b[i]=='0')
            {
                if(carry=='1')
                {
                    carry='1';
                    // s+='0';
                    s.push('0');
                }
                else
                {
                    carry='0';
                    // s+='1';
                    s.push('1');
                }
                i--;
            }
            else if(a[i]=='0' && b[i]=='1')
            {
                if(carry=='1')
                {
                    carry='1';
                    // s+='0';
                    s.push('0');
                }
                else
                {
                    carry='0';
                    // s+='1';
                    s.push('1');
                }
                i--;
            }
            else if(a[i]=='0' && b[i]=='0')
            {
               if(carry=='1')
                {
                    carry='0';
                    // s+='1';
                    s.push('1');
                }
                else
                {
                    carry='0';
                    // s+='0';
                    s.push('0');
                }
                i--;
            }
            
        }
        if(carry=='1')
        {
            s.push('1');
        }
        string s1="";
        while(!s.empty())
        {
            s1+=s.top();
            s.pop();
        }

        return s1;

    }
};