#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forit(it, a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define rep(i,f,t) for(i=f;i<(int)t;++i)
#define pb push_back
#define mp make_pair
#define all(a) begin(a),end(a)
#define F first
#define S second
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const int inf = 1e9 + 5, N = 2e5 + 5, d1[] = { 0,0,1,-1 }, d2[] = { 1,-1,0,0 };

void connn(string& s){

    for(char& c:s){


        if(c=='1')c='0';

        else if(c=='0')c='1';
    }
}

int main() {

    int t;
    int n;


    cin>>t>>n;
    while(t--){
        int i,j,r=-1,c=-1;
        char l,ok;
        string s(n,'?');
        for(i=1,j=0;j<n/2;i+=2){
            if(i>10 && i%10==1){
                if(c!=-1){

                    cout << c+1 << endl;

                    cin >> l;

                    if(s[c]!=l)connn(s);
                }
                else {cout << "1\n";cin>>l;}
                if(r!=-1){

                    cout << r+1 << endl;

                    cin >> l;

                    if(s[r]!=l)reverse(all(s));
                }
                else {cout << "1\n";cin>>l;}
            }
            else{

                cout << j+1 << endl;

                cin >> s[j];

                cout << n-j << endl;

                cin >> s[n-1-j];

                if(s[j]==s[n-1-j])c=j;

                else if(s[j]!=s[n-1-j])r=j;

                ++j;
            }
        }
        cout << s << endl;


        cin>>ok;

        if(ok=='N')return 0;
    }
}
