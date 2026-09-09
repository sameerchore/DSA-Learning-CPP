class Solution {
public:
    long long countCommas(long long n) {
        long long cnt =0;
        if(n==1000000000000000)cnt++;
        if(n>=1000000000000){
            cnt+=4*(1+n-1000000000000);
            cnt+=3*(999000000000);
            cnt+=2*(999000000);
            cnt+=999000;

        }
        else if(n>=1000000000){
            cnt+=3*(1+n-1000000000);
            cnt+=2*(999000000);
            cnt+=999000;
        }
        else if(n>=1000000){
             cnt+=2*(1+n-1000000);
             cnt+=999000;

        }
        else if(n>=1000){
             cnt+=(1+n)-1000;
        }

        return cnt;
    }
};

//1000000000000000
// 1000 to 999999
// 1000000 to  999999999
// 1000000000 to 999999999999
// 1000000000000 to 999999999999999

// 999999
//    1000
//       999000

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna