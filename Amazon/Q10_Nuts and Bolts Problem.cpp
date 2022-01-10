// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    set<int> nuts1;
        set<int> bolts1;
        
        for(int i=0;i<n;i++){
            nuts1.insert(nuts[i]);
            bolts1.insert(bolts[i]);
        }
        auto itr=nuts1.begin();
        for(int i=0;i<n;i++){
            if(nuts1.find(bolts[i])!=nuts1.end() && bolts1.find(nuts[i])!=bolts1.end())
                {
                    nuts[i]= *itr;
                    bolts[i]= *itr;
                }
                itr++;
        }        
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
