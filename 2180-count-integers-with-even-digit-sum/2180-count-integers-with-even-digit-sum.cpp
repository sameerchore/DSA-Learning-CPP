class Solution {
public:
    int countEven(int num) {
        int cnt=0;
       for(int i=1;i<=num;i++){
        int sum=i;
        int tot=0;
        while(sum>0){
            tot+=sum%10;
            sum/=10;
        }
        if(tot%2==0)cnt++;
       } 
       return cnt;
    }
};