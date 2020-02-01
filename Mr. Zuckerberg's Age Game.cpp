#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int num;
        cin>>num;

        int cnt=0;
        for(int i=2;i<=sqrt(num);i++){
            if((num%i)==0){
                cnt++;break;
            }
        }
        if(cnt==0)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;

    }
            return 0;


}
