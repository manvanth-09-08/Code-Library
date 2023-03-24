/////////////// QUESTION ///////////

/*

Given a string s, find the length of the longest substring without repeating characters.

*/



class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        set<char> se;
        int j=0;
        int max=0;
        for(int i=0;i<s.length();i++){
            if(se.find(s[i])!=se.end()){
                if(se.size()>max)
                    max=se.size();
                for(;s[j]!=s[i];j++)
                    se.erase(s[j]);
                j++;
                cout<<j<<endl;
            }

          se.insert(s[i]);

        }
         if(se.size()>max)
                    max=se.size();
       return max;
    }
};



/////////// ALGORITHM /////////////////
/*

1. Create a set.
2. Create a variable j and initialize it to 0.
3. Create a variable max and initialize it to 0.
4. Iterate through the string.
5. If the set contains the current element, then check if the size of the set is greater than max.
6. If the size is greater than max, then update max to the size of the set.
7. Iterate through the set from j to i and erase the elements.
8. Increment j.
9. Insert the current element into the set.
10. Return max.



*/