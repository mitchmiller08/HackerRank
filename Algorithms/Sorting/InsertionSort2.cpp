#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
#include <vector>
using namespace std;

void printArray(vector <int> ar){
    for(int i=0;i<ar.size();i++){
        cout << ar[i] << " ";
    }
    cout << endl;
}

void insertionSort(vector<int>&  ar, int index) {
    int e = ar[index];
    
    if(e > ar[index-1]){
        return;
    }
    
    for(int i = index-1;i >= 0;i--){
        
        if(e < ar[i]){
            ar[i+1] = ar[i];
        }
        else{
            ar[i+1] = e;
            return;
        }
        
    }
    
    if(ar[0] > e){
        ar[0] = e;
    }
    
    return;    

}
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }
    
    for(int i=1;i<_ar.size();i++){
        insertionSort(_ar,i);
        printArray(_ar);
    }
    
    return 0;
}
