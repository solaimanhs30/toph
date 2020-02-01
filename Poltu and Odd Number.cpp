#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        long long int l,r;
        cin>>l>>r;
        if(l%2==0)
            l+=1;
        if(r%2==0)
            r-=1;

        long long int n=(r-l)/2+1;
        cout<<"Case "<<i<<": "<<(n*(2*l+(n-1)*2))/2<<endl;
    }

    return 0;

}
