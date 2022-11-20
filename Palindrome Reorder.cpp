#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    char letter;
    vector<char>v;
    cin>>s;
    string ans(s.size(),'0');  //initialization is imp**

    map<char,int> m;

    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }

    int cnt=0,alph=0;

    for(auto it : m){
        if(it.second%2!=0){
            cnt++;
            alph=it.second;
            letter=it.first;
        }
        if(it.second%2==0){
            v.push_back(it.first);
      }
    }

    if(cnt!=1 && cnt !=0) cout<<"NO SOLUTION"<<endl;

    else{

        if(cnt==1){
            int bijorstart=((s.size()/2) +1)-((alph-1)/2);

            for(int i=bijorstart-1;i<=bijorstart+(alph-1)-1;i++){
                ans[i]=letter;
            }

            int start=0,endd=s.size()-1;

            for(int i=0;i<v.size();i++){
                    char x=v[i];

                for(int j=0;j<(m[x]/2);j++){
                    ans[start]=x;
                    ans[endd]=x;
                    start++;
                    endd--;
                }
            }
            cout<<ans<<endl;
        }

        else{

            int start=0,endd=s.size()-1;

            for(int i=0;i<v.size();i++){
                    char x=v[i];

                for(int j=0;j<(m[x]/2);j++){
                    ans[start]=x;
                    ans[endd]=x;
                    start++;
                    endd--;
                }
            }
            cout<<ans<<endl;
        }
      }
    }




