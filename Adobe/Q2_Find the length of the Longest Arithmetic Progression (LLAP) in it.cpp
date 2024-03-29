// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int lengthOfLongestAP(int A[], int n) {
        // code here
        if(n<=2){
            return n;
        }
        
        int dp[n][n];
        
        for(int i=0;i<n;i++){
            dp[i][n-1]=2;
        }
        int ans=2;
        for(int j=n-2;j>=1;j--){
            int i=j-1,k=j+1;
            
            while(i>=0 && k<n){
                
                if((A[i]+A[k])<2*A[j]){
                    k++;
                }
                else if((A[i]+A[k])>2*A[j]){
                    dp[i][j]=2;
                    i--;
                }
                else if((A[i]+A[k])==2*A[j]){
                    dp[i][j]=dp[j][k]+1;
                    ans=max(ans,dp[i][j]);
                    i--;
                    k++;
                }
                
            }
            while(i>=0){
                dp[i][j]=2;
                i--;
            }
            
        }
        return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        Solution ob;
        auto ans = ob.lengthOfLongestAP(A, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
