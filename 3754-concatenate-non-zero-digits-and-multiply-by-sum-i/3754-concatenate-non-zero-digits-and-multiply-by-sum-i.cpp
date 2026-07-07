class Solution {
public:
    long long sumAndMultiply(int n) {
        long long modDigit=0;
        long long sum=0;
        int nums=n;
        int i=1;
        while(nums>0){
            int rem=nums%10;
            if(rem!=0){
                modDigit=modDigit+rem*i;
                i*=10;
            }
            sum+=rem;
            nums/=10;
        }
        long long conNum=modDigit*sum;
        return conNum;
    }
};