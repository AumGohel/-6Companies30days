// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int n=str.length();
        int j=n;
        int ans=0;
        int flag = 0;
        for(int i=n-1;i>=0;i--){
            if(i==0 && str[i]=='-'){
                flag=1;
                continue;
            }
            if(str[i]<'0' || str[i]>'9'){
                return -1;
            }
            int k=str[i]-'0';
            int p=pow(10,(n-i-1));
            ans+=p*k;
        }
        if(flag==1){
            return -ans;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends
