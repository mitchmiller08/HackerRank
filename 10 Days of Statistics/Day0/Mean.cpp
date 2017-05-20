#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,temp,mode;
    double avg,med,last;
    int sum=0;
    int max=0;
    int count=0;
    vector<int> hist(100000,0);
    
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> temp;
        sum += temp;
        hist[temp]++;
    }
    
    for(int i=0;i<100000;i++){
        if(hist[i]>max){
            max = hist[i];
            mode = i;
        }
        count += hist[i];
        if(n%2 == 1){
            if(count <= n/2 && count+hist[i+1] > n/2) med = i+1;
        }
        else{
            if(count == n/2) med = (last + double(i+1))/2;
            else if(count < n/2 && count+hist[i+1] > n/2) med = i+1;
        }
        if(hist[i]!=0) last=i;
    }
    
    avg = sum / double(n);
    
    cout << avg << endl << med << endl << mode;

    return 0;
}
