class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        int tot=0;

        if(n>24){
            tot+=4*(n-24)+48;
        }
        else if(n>16){
            tot+=3*(n-16)+24;
        }
        else if(n>8){
            tot+=2*(n-8)+8;
        }
        else{tot=n;}

        return tot;
    }
};
