#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    int n,temp;
    double sum=0;
    double weights=0;
    cin >> n;
    vector<int> vals(n);
    for(int i=0;i<n;i++){
        cin >> vals[i];
    }
    for(int i=0;i<n;i++){
        cin >> temp;
        sum += vals[i]*temp;
        weights += temp;
    }
    
    cout << fixed;
    cout << setprecision(1);
    cout << sum / weights;
    
    return 0;
}
