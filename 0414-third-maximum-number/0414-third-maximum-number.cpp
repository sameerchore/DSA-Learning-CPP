class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long fmax=-999999999999999999;
        long long smax=-999999999999999999;
        long long tmax=-999999999999999999;
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