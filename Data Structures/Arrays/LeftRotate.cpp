#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,d;
    cin >> n >> d;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    rotate(arr.begin(), arr.begin() + d, arr.end());
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
