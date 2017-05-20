#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long t;
    long n,m,s;
    cin >> t;
    
    for(long i=0;i<t;i++){
        cin >> n >> m >> s;
        cout << (s + m - 2) % n + 1 << endl;        
    }
     
    
    return 0;
}
