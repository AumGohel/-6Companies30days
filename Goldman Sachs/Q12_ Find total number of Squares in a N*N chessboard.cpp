class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code 
        long long ans = 0;
        if(N==1)
        {
            return 1;
        }
        if(N==2)
        {
            return 5;
        }
        ans = N*N + squaresInChessBoard(N-1);
        return ans;
    }
};
