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





//optimal way of doing this is that by neglacting the duplicates in the arr by using contine property;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;

        for (int x : nums) {
            if (x == first || x == second || x == third)   //this line imp for neglecting the duplicates;;
                continue;

            if (x > first) {
                third = second;
                second = first;
                first = x;
            }
            else if (x > second) {
                third = second;
                second = x;
            }
            else if (x > third) {
                third = x;
            }
        }

        return (third == LLONG_MIN) ? first : third;
    }
};


// Instead of writin
// x != first && x != second
// inside every condition, we remove duplicates first:
// if (x == first || x == second || x == third)
//     continue;
// Now every comparison becomes much simpler.



