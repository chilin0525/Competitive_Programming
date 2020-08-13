#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(cin>>t){
        map<int,int> rec;
        int t2=t;
        for(int i=2;i<=sqrt(t2);i++){
            if(t==1)break;
            while(t%i==0){
                ++rec[i];
                t=t/i;
            }
        }

        if(t!=1){
            rec[t];
        }

        bool flag = false;
        for(auto &tmp:rec){
            if(flag)cout<<" * ";
            flag=true;
            if(tmp.second==1||tmp.second==0){
                cout<<tmp.first;
            }
            else{
                cout<<tmp.first<<"^"<<tmp.second;
            }
        }
        cout<<endl;
    }
    return 0;
}
