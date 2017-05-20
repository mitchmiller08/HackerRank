#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,count;
    string test;
    cin >> n;
    vector<string> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> test;
        count = 0;
        for(int j=0;j<n;j++){
            if(test == arr[j]) count++;
        }
        cout << count << endl;
    }
    return 0;
}
