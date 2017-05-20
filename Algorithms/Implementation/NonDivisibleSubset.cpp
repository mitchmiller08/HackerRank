#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    int count = 0;
    cin >> n;
    cin >> k;
    vector<int> s(n);
    int counts[k];
    
    for(int i=0;i<k;i++){
        counts[i] = 0;
    }
    
    for(int c_i = 0;c_i < n;c_i++){
       cin >> s[c_i];
       counts[s[c_i] % k]++;
    }
    
    count = min(counts[0], 1);
    if(k%2 == 0){
        count++;
    }
    
    for(int i=1;i<floor(k/2)+1;i++){
        if(i != k-i){
            count += max(counts[i],counts[k-i]);
        }
    }
    
    cout << count;
    
    return 0;
}
