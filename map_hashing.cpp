// number hashing using map

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    map<int , int> mpp;

    //precompute
    for(int  i = 0; i< n; i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    for(auto it: mpp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    //fetching
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
    }
    return 0;
}



// OUTPUT:-


//                                             > cd "c:\Users\User\OneDrive\Desktop\chetan\C++\" ; if ($?) { g++ hashmap.cpp -o hashmap } ; if ($?) { .\hashmap }
// 5
// 1 2 2 1 44
// 1 -> 2
// 2 -> 2
// 44 -> 1
// 3
// 2 44 1
// 2
// 1
// 2
// PS C:\Users\User\OneDrive\Desktop\chetan\C++>
//  *  History restored 
