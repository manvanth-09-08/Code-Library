https://leetcode.com/problems/string-compression/


class Solution {
public:
    int compress(vector<char>& chars) {
        // vector<char> v;
        int count=1,j=1;
        char aux;
        // v.push_back(chars[0]);
        for(int i=1;i<chars.size();i++){
            if(chars[i]==chars[i-1]){
                cout<<i<<endl;
                count++;
            }

            else{

                if(count>1){
                    if(count>9){
                        string s = to_string(count);
                        for(int x=0;x<s.size();x++)
                             chars[j++]=s[x];
                    }
                    else{
                         char c='0'+count;
                    cout<<"j : "<<j<<endl;
                     chars[j++]=c;
                    }
                   
                     count=1;
                }
                 
                
                chars[j++]=chars[i];



            }
        }

         if(count>1){
                    if(count>9){
                        string s = to_string(count);
                        for(int x=0;x<s.size();x++)
                             chars[j++]=s[x];
                    }
                    else{
                         char c='0'+count;
                    cout<<"j : "<<j<<endl;
                     chars[j++]=c;
                    }
                   
                     count=1;
                }

        return j;
        
    }
};