#include <bits/stdc++.h>
using namespace std;
 
// n ==> Size of circle
// m ==> Number of items
// k ==> Initial position
int lastPosition(int n, int m, int k)
{
    //check weather m will be inside the bount or not
    if (m <= n - k + 1)
        return m + k - 1;
 
    //updating new m value as it goes out of bound
    m = m - (n - k + 1);
 

    return (m % n == 0) ? n : (m % n);
}
 
// Driver code
int main()
{
    int m,n,k;
    cin>>m>>n>>k;
    cout << lastPosition(n, m, k);
    return 0;
}
