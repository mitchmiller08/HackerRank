#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int k;
    int charge;
    int total=0;
    int share;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
       total += a[a_i];
    }
    cin >> charge;
    
    share = (total - a[k]) / 2;
    
    if(charge != share){
        cout << charge - share;
    }
    else{
        cout << "Bon Appetit";
    }
    
    return 0;
}
