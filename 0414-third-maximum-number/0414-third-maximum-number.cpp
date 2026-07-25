class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long fmax=LONG_MIN;
        long long smax=LONG_MIN;
        long long tmax=LONG_MIN;
        long long temp=tmax;
        bool fg=true;

        for(int x:nums){
            if(x>fmax){
                tmax=smax;
                smax=fmax;
                fmax=x;
            }
            else if(x>smax && x!=fmax){
                tmax=smax;
                smax=x;
            }
            else if((x>=tmax && x!=smax)&& x!=fmax){
                tmax=x;
                fg=false;
            }
        }
 
        if(tmax==temp && fg){return fmax;}
        return tmax;
    }
};