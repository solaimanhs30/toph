#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;

        if(((a+b)/2)%2==0)
            cout<<"Sadia will be happy."<<endl;
        else
            cout<<"Oops!"<<endl;
    }
    return 0;
}
