class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        vector<int>arr(21);
        for(int x:bills){
            arr[x]++;
            int rem=x-5;
            if(rem==15){
                if(arr[5]>0 && arr[10]>0){arr[5]--;arr[10]--;}
                else if(arr[5]>2){arr[5]-=3;}
                else{return false;}
            }
            else if(rem==5){
                 if(arr[5]>0){arr[5]--;}
                else{return false;}
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna