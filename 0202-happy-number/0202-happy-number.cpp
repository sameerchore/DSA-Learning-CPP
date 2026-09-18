class Solution {
public:
    bool isHappy(int n) {
        int sum=n;
        while(sum>9){
            int num=sum;
            int tot=0;
            while(num>0){
                int rem=num%10;
                tot+=rem*rem;
                num/=10;
            }
            sum=tot;
        }
        if(sum==7 || sum==1)return true;
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna