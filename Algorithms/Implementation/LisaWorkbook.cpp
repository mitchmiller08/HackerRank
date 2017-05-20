#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int k;
    int pagenumber=1;
    int special=0;
    cin >> n >> k;
    vector<int> t(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> t[arr_i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=1;j<=t[i];j++){
            if(pagenumber == j){
                special++;
            }
            
            if(j % k == 0 && j != t[i]){
                pagenumber++;
            }
        }
        pagenumber++;
    }
    cout << special;
    
    return 0;
}
