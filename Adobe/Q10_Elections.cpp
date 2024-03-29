// { Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map<string,int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(arr[i])!=mp.end()){
                mp[arr[i]]++;
            }else{
                mp[arr[i]]=1;
            }
        }
        vector<string> answer;
        int maxi=0;
        string ans;
        for(auto it : mp){
            if(it.second>maxi){
                maxi=it.second;
                ans=it.first;
            }
        }
        string ans2=to_string(maxi);
        answer.push_back(ans);
        answer.push_back(ans2);
        
        return answer;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
  // } Driver Code Ends
