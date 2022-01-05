class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        
        int repeting,missing;
        
        for(int i=0;i<n;i++){
            if(arr[abs(arr[i])-1]<0){
                repeting=abs(arr[i]);
            }
            else{
                arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
            }
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                missing=i+1;
                break;
            }
        }
        
        int *ans_vec=new int[2];
        ans_vec[0] = repeting;
        ans_vec[1] = missing;
        return ans_vec;
    }
};
