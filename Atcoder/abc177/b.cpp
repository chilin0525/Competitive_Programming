#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0), ios::sync_with_stdio(0);
    
    string a,b;
    while(cin>>a>>b){
        int answer=10e6;
        int times=a.length()-b.length();
        for(int i=0;i<=times;i++){
            int rec=0;
            for(int j=0;j<b.length();j++){
                if(a[j+i]!=b[j])++rec;
            }
            answer=min(answer,rec);
        }
        cout<<answer<<endl;
    }
    
    return 0;
}