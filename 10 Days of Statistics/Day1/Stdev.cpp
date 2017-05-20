#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int sum=0;
    double avg,std=0;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    avg = sum / n;
    for(int i=0;i<n;i++){
        std += pow((arr[i] - avg),2);
    }
    std = sqrt(std / n);
    cout << std;
    return 0;
}
