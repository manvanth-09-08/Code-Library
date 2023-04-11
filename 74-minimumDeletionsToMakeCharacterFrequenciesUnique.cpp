https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/submissions/

class Solution {
public:
    int minDeletions(string s) {
        int hash[26],i,count=0,countArray[100000];
        //set<int> countFrequency;
        for(i=0;i<26;i++)
            hash[i]=0;
        for(i=0;i<10000;i++)
            countArray[i]=0;
        for(i=0;i<s.length();i++)
        {
            hash[s[i]%97]++;
        }
        
        for(i=0;i<26;i++)
        {
            if(hash[i]){
                if(!countArray[hash[i]])
                    countArray[hash[i]]++;
                else
                {
                   // countArray[hash[i]]--;
                    while(hash[i] && countArray[hash[i]])
                    {
                        
                        count++;
                        hash[i]--;
                       // countArray[hash[i]]++;
                    }
                    countArray[hash[i]]++;
                }
            }
        }
        
//         for(i=0;i<26;i++)
//         {
            
//             if(hash[i]){
//                 if(countFrequency.find(hash[i])==countFrequency.end())
//                 {
//                     countFrequency.insert(hash[i]);  
                    
//                 }
                
//                 else
//                     count++;
//             }
//         }
        
        return count;
        
        
        
        
    }
};