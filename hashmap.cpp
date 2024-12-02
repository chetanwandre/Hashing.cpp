
//hashing using map for strings

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    //map<key , frequency> mpp;

//precompute
    unordered_map < char , int > mpp;
    for(int i = 0; i< str.size(); i++){
        mpp[str[i - 'A']]++;
    }

    // for(auto it : mpp){
    //     cout<<it.first<<" >- "<<it.second<<endl;
    // }

//fetching
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<mpp[c - 'A']<<endl;
    }
    
    return 0;
}