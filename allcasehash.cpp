 //hash characters in string using ASCII values

#include<iostream>
using namespace std;

int main(){
    // int n; 
    // cin>>n;
    string str;
    cin>>str;
    //precompute
    int hash[256] = {0};

    // uppercases
    for(int i = 0; i< str.size(); i++){
        hash[str[i]] += 1;
    }

    //fetching 
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }

    return 0;
}
