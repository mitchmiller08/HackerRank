#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int min;
    int max=0;
    int count;
    int dummy1;
    int dummy2;
    int dummy3=0;
    cin >> n;
    count = n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       if(arr[arr_i] < min){
           min = arr[arr_i];
       }
       if(arr[arr_i] > max){
           max = arr[arr_i];
       }
    }
    cout << count << endl;
    while(count > 0){
        dummy1 = 0;
        dummy2 = max;
        dummy3 = 0;
        for(int i=0;i<n;i++){
            arr[i] = arr[i] - min;
            if(arr[i] <= 0){
                arr[i] = 0;
                dummy1++;
            }
            if(arr[i] < dummy2 && arr[i] > 0){
                dummy2 = arr[i];
            }
            if(arr[i] > dummy3){
                dummy3 = arr[i];
            }
        }
        count = n - dummy1;
        if(count > 0){
            cout << count << endl;
        }
        min = dummy2;
        max = dummy3;
    }
    
    return 0;
}
