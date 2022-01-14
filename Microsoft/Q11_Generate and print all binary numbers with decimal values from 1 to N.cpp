// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
	// Your code here
	
	vector <string> answer;
	
	string s="";
	
	for(int i=1;i<=N;i++){
	    
	    int a = i;
	    while(a){
	        int b = a%2;
	        s = to_string(b)+s;
	        a = a/2;
	    }
	    answer.push_back(s);
	    s="";
	    
	}
	return answer;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
