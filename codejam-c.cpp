#include<algorithm>
#include<string>
#include<iostream>
#include<vector>


using namespace std;

int main()
{
  int t;
  int n;
  cin>>t;
  int ans;
  int f,l;
  int tests=1;


  while(tests<=t){
    cin>>n;
    vector<pair<pair<int,int>,int>> v;
    for(int i=1;i<=n;i++){
      cin>>f>>l;
      v.push_back(make_pair(make_pair(f,l),i-1));
    }





    string result(n,'.');


    int jamie=0,cam=0;


    sort(v.begin(),v.end());


    for(int i=0;i<n;i++){
      int start=v[i].first.first;
      int end=v[i].first.second;
      int idx=v[i].second;
      if(start>=cam){
        cam=end;
        result[idx]='C';
      }
      else if(start>=jamie){
        jamie=end;
        result[idx]='J';
      }
      else {
        result="IMPOSSIBLE";
        break;
      }
    }



    cout<<"Case #"<<tests<<": "<<result<<endl;
    tests++;
  }
  return 0;
}
