
#include<bits/stdc++.h>
using namespace std;

#define size 100001
int mp[size];

void seive()
{
    int i,j;

    mp[1]=1;

    for(i=2;i*i<=size;i++){
        if(mp[i]==0)
        for(j=2;i*j<=size;j++){
            mp[i*j]=1;
        }
    }
}
int main()
{
    seive();

    int t;
    cin>>t;

    while(t--){
        long long int a;
        cin>>a;
        int b=sqrt(a);
        if(b*b==a){
        if(mp[b]==0)
            cout<<"YES."<<endl;
        else
            cout<<"NO."<<endl;
    }
    else cout<<"NO."<<endl;
    }

    return 0;
}
