//my solution for the problem "Sum of Round Numbers" from Codeforces
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=1;
        string s=to_string(n);
        int div=0;
        for(int i=s.length()-1;i>=0;i--){
            int x=s[i]-'0';
            if(x!=0){div++;}
        }
        cout<<div<<endl;
        while(n>0){
            int x=n%10;
            if(x!=0){
                cout<<x*cnt<<" ";
            }
            n/=10;
            cnt*=10;
        }
        cout<<endl;
    }
}

//optimal ans 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=1;
        string s=to_string(n);
        int div=0;
        for(int i=s.length()-1;i>=0;i--){
            int x=s[i]-'0';
            if(x!=0){div++;}
        }
        cout<<div<<endl;
        while(n>0){
            int x=n%10;
            if(x!=0){
                cout<<x*cnt<<" ";
            }
            n/=10;
            cnt*=10;
        }
        cout<<endl;
    }
}