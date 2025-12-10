#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin>>n;
    if (n.size() ==1){
        cout<<n.size()<<"\n";
        return 0;
    }
    int count = 1;
    int maxcount =1;
    for(int i=1;i<n.size();i++){
     if (n[i] == n[i-1]){
        count++;
     }

    else {
    count = 1;}
    maxcount = max(count , maxcount);
    }
    cout<<maxcount<<"\n";

    return 0;
}