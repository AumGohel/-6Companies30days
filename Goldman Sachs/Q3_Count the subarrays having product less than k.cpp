class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long int left=0,right=0,count=0,product=1;
        while(right<n){
            product*=a[right];
            while(left<n and product>=k){
                product=product/a[left];
                left++;
            }
            if(product<k)
            count+=right-left+1;
           
            right++;
        }
        return count;
    }
};
