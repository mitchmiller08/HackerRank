#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,v,pos;
    cin >> v;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    pos = find(arr.begin(),arr.end(),v) - arr.begin();
    if(pos < arr.size()){
        cout << pos;
    }
    else{
        cout << "Not Found";
    }
    return 0;
}
