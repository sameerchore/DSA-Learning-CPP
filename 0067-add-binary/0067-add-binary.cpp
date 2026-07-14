class Solution {
public:
    string addBinary(string a, string b) {
       string ans;
       reverse(a.begin(),a.end());
       reverse(b.begin(),b.end());
       int n1=a.length(); 
       int n2=b.length();
       int i=0;
       int j=0;
       int carry=0;
       while(i<n1 || j<n2 || carry){
        int sum=0;
        int x=(i<n1)?(int)(a[i]-'0'):0;
        int y=(j<n2)?(int)(b[j]-'0'):0;
         sum=x+y+carry;
        if(sum==3){ans+='1';carry=1;}
        else if(sum==2){ans+='0';carry=1;}
        else if(sum==1){ans+='1';carry=0;}
        else{ans+='0';}
        i++;j++;
       }
         reverse(ans.begin(),ans.end());
       return ans;
    }
};