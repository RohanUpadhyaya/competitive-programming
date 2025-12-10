#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    vector<char>lists(s.begin(), s.end());
    vector<int>list1;

     if (lists.size() == 1){
            list1.push_back(lists.size());
            int maxcount = *max_element(list1.begin(), list1.end());
            cout<<maxcount<<"\n";
        return 0;}
    
    int count = 1;

    for(int i = 1;i<lists.size();i++){
    
        if(lists[i] == lists[i-1]){
            count++;
            
        }

        else{
            count = 1;
        }
        
        list1.push_back(count);

    }
    int maxcount = *max_element(list1.begin(), list1.end());
    cout<<maxcount<<"\n";

    return 0;
}