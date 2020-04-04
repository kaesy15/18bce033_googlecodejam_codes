#include<bits/stdc++.h>
using namespace std;
signed main()
{
    int t,b;
    cin>>t;
    cin>>b;
    while(t--)
    {





        string s="";
        int p;
        for(int i=10;i>0;i--)
        {
            cout<<i<<endl;
            cout.flush();
            cin>>p;
            s+=(p+'0');
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
        char ch;
        cin>>ch;
        if(ch=='N')break;
    }
    return 0;
}
