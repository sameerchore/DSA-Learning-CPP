class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.length();
        int cnt=0;
        int tot=0;
        for(int i=0;i<n;i++){
        int arr[26]={0};
        cnt=0;
           for(int j=i;j<n;j++){
            if(arr[s[j]-'a']!=0){
                arr[s[j]-'a']++;
            }
            else{arr[s[j]-'a']=1;}
            if(arr[s[j]-'a']>2)break;
            cnt++;
        }
        cout<<cnt<<" ";
            tot=max(tot,cnt);
        }
        return tot;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna