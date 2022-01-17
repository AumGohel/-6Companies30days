// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string amendSentence (string s)
    {
        // your code here
        string answer="";
        int n= s.length();
        
        for(int i=0;i<n;i++){
            
            if(s[i]>=65 && s[i]<=90){
                if(i!=0){
                    answer+=" ";    
                }
                
                answer+=tolower(s[i]);
            }else{
                answer+=s[i];
            }
        }
        return answer;
    }
};

// { Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.amendSentence (s) << endl;
	}
}  // } Driver Code Ends
