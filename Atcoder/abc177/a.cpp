#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0), ios::sync_with_stdio(0);
    
    long long d,t,s;
    while(cin>>d>>t>>s){
        if(t*s>=d)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    
    return 0;
}
