// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void findJumps(int, int);


 // } Driver Code Ends
//User function Template for C++

// Function to find number of jumps
// N : number inscribed on the last stone.
// X : number on which we have to reach
#define eq(X) ((X%2) ? ((X-1)-((X-1)/2)) : ((X)-(X/2)))
void findJumps(int N, int X){
    
    // Your code here
    cout<< min(eq(X), (N/2+1)-eq(X)-1)<<endl;        
}

// { Driver Code Starts. --v

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        long long N, X;
        cin >> N >> X;
        
        findJumps(N, X);
    }
    
    return 0;
}  // } Driver Code Ends