#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a,n,i,sum = 0,sumk;

    cin>>n;

    sumk = (n*(n+1))/2;

    for( i=1;i<n;i++){

        cin>>a;
        
        sum = (sum + a);

    }
    cout<<(sumk-sum)<<"\n";

    return 0;
}