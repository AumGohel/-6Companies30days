// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector <int> result(n,1);
       
       stack <int> check_stack;
       
       check_stack.push(0);
       
       for(int i=1;i<n;i++){
           
           while(!check_stack.empty() && price[check_stack.top()]<=price[i]){
               check_stack.pop();
               
           }
           
           int answer_of_i = (check_stack.empty()) ? i+1 : i-check_stack.top();
           
           result[i] = answer_of_i;
           
           check_stack.push(i);
           
       }
       
       return result;
       
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends
