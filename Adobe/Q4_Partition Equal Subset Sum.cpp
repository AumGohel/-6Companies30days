// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<int>> memo;
    bool canParti(int arr[],int n,int pos,long long int sum){
        if(sum==0){
            return true;
        }
        if(pos>=n || sum<0){
            return false;
        }
        if(memo[pos][sum]!=-1){
            return memo[pos][sum];
        }
        
        memo[pos][sum] = canParti(arr,n,pos+1,sum) || canParti(arr,n,pos+1,sum-arr[pos]);
        return memo[pos][sum];
        
    }
    
    int equalPartition(int N, int arr[])
    {
        // code here
        long long int sum = 0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        
        if(sum%2==1){
            return 0;
        }
        
        memo.clear();
        memo.resize(N+1,vector<int>(sum/2+1,-1));
        int ans = canParti(arr,N,0,sum/2);
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends
