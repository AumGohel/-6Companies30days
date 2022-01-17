// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    vector<string> answer;
    
    void helper(int n,int m,string s){
        if(n==0 && m==0){
            answer.push_back(s);
            return;
        }
        if(n>=0){
            helper(n-1,m,s+"(");
        }
        if(m>n){
            helper(n,m-1,s+")");
        }
    }
    
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        helper(n,n,"");
        return answer;
        
    }
};

// { Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends
