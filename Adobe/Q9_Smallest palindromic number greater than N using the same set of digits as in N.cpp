// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string nextPalin(string N) { 
        //complete the function here
        int n=N.size();
        if(n<=3){
            return "-1";
        }
        string half_part=N.substr(0,n/2);
        if(next_permutation(half_part.begin(),half_part.end())){
            
            
            
            string answer = half_part;
            if(n%2==1){
                answer+=N[(n/2)];    
            }
            reverse(half_part.begin(),half_part.end());
            answer+=half_part;
            return answer;
            
        }else{
            return "-1";
        }
        
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution obj;
        cout << obj.nextPalin(s) << endl;
    }
    return 0;
}  // } Driver Code Ends
