//map hashing
//unordered map

//The average and best case time complexity for both precompute and fetching operations is O(1) for UNORDERED map
//worst case time complexity is O(1) , where n = no. of elements in map data structure

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int , int> mpp;

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


OUTPUT:- 

// 5
// 1 2 1 2 44
// 44 -> 1
// 2 -> 2
// 1 -> 2
// 3
// 44 2 1
// 41
// 2
// 2
