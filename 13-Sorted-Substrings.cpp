////////////////////// Question //////////////////////
/*
https://www.codechef.com/problems/SSUBSTR

*/


#include<iostream>
#include<set>
#include<map>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        string s;
        cin>>s;
        
        int count=0;
        for(int j=0;j<x-1;j++)
        {
            if(s[j]=='1' && s[j+1]=='0')
            count++;
            
           
        }
        
        cout<<count<<endl;
    }
}

////////////////////// Algorithm //////////////////////
/*

1. Take the input of the number of test cases.
2. Iterate through the test cases.
3. Take the input of n and the string.
4. Create a variable count and initialize it to 0.
5. Iterate through the string.
6. If the current element is 1 and the next element is 0, then increment count.
7. Print count.
8. Decrement the number of test cases.

*/
