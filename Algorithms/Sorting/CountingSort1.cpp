#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int _ar_size;
    cin >> _ar_size;
    vector <int> _ar(100,0);
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int temp;
        cin >> temp;
        _ar[temp]++; 
    }
    
    for(int i=0;i<100;i++){
        cout << _ar[i] << " ";
    }
    
    
    return 0;
}
