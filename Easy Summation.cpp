#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        long long int num;
        cin>>num;

        cout<<"Case "<<i<<": "<<(num*(2*1+(num-1)*2))/2<<endl;
    }
    return 0;
}
