class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int fmin=INT_MAX;
        int smin=INT_MAX;
        int fmax=INT_MIN;
        int smax=INT_MIN;
        int tmax=INT_MIN;
        for(int x: nums){
            if(x>=fmax){
                tmax=smax;
                smax=fmax;
                fmax=x;
            }
            else if(x>=smax){
                tmax=smax;
                smax=x;
            }
            else if(x>=tmax){
                tmax=x;
            }

            if(x<=fmin){
                smin=fmin;
                fmin=x;
            }
            else if(x<=smin){
                smin=x;
            }
        }
        long long p1=fmax*smax*tmax;
        long long p2=fmin*smin*fmax;
    
        return (p1>p2)? p1:p2;
    }
};