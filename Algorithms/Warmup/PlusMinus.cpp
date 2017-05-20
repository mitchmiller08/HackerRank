#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
    int n;
    int pos=0;
    int neg=0;
    int zer=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    for(int i=0;i<n;i++){
        if(arr[i] < 0){
            neg++;
        }
        else if(arr[i] > 0){
            pos++;
        }
        else{
            zer++;
        }
    }
    
    cout << setprecision(6) << fixed;
    cout << (float)pos / (float)n << '\n';
    cout << (float)neg / (float)n << '\n';
    cout << (float)zer / (float)n << '\n';
    
    return 0;
}
