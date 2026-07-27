class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int tot=1;
        int c=0;
        int zi=0;
        for(int i=0;i<n;i++){
            if(nums[i] !=0)tot*=nums[i];
            else{
                zi=i;
                c++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                 cout<<nums[i];
                 nums[i]=tot/nums[i];
            }
            if(c==1){
                nums[i]=0;     
                nums[zi]=tot;
            }
            else if(c>=2){
                nums[i]=0;
            }
            
        }
        return nums;
    }
};