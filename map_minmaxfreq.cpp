#include<bits/stdc++.h>
using namespace std;

void min_max(int arr[] , int n){
    //define unordered map
    unordered_map < int , int > mpp;

    //go through the map , define min max freq and element no 
    for(int  i = 0; i< n; i++){
        mpp[arr[i]]++;
    }

    int maxfreq = 0 , minfreq = INT_MAX;
    int maxele = 0, minele = 0;
    //main logic of updating count using if else 
    for(auto it: mpp){
        int key = it.first;
        int cnt = it.second;
        //int cnt = 1; 
        if(cnt > maxfreq){
            maxfreq = cnt;
            maxele = key;
        }
        else if(minfreq < cnt){
            minfreq = cnt;
            minele = key;
        }
    }

    //output the elements
    cout<<"max frequency element is "<<maxele<<endl;
    cout<<"min frequency element is "<<minele<<endl;
}

int main(){
    //input array size and array
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }

    min_max(arr, n);
    return 0;
}