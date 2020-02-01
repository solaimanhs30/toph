#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;

    string ch;
    cin>>ch;
    int cnt=0;

    for(int i=0;i<num-1;i++){
        if(ch[i]==ch[i+1])
        {
            cnt++;
                    break;
        }

    }
    if(cnt==0)
        cout<<"No change needed"<<endl;
    else
        cout<<"Change needed"<<endl;

    return 0;
}
