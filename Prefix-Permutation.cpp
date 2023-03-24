////////////////////// QUESTION //////////////////////
/*

https://www.codechef.com/START80C/problems/SUMPERM

*/



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testCases;
	cin>>testCases;
	while(testCases){
	    
	    int n;
	    cin>>n;
	    
	    if(n%2)
	    {
	        cout<<-1<<endl;
	        
	    }
	    
	    else{
	        
	        int k=2,j=1;
	        for(int i=0;i<n/2;i++){
	            cout<<k<<" "<<j<<" ";
	            k+=2;
	            j+=2;
	        }
	        
	        cout<<endl;
	        
	    }
	    testCases--;
	}
	return 0;
}



////////////////////// ALGORITHM //////////////////////
/*

1. Take the input of the number of test cases.
2. Iterate through the test cases.
3. Take the input of n.
4. If n is odd, then print -1.
5. If n is even, then print the numbers from 2 to n in even positions and the numbers from 1 to n in odd positions.
6. Decrement the number of test cases.

*/