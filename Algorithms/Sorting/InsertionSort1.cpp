#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void printArray(vector <int> ar){
    for(int i=0;i<ar.size();i++){
        cout << ar[i] << " ";
    }
    cout << endl;
}

void insertionSort(vector <int>  ar) {
    int n = ar.size();
    int e = ar[n-1];
    
    if(e > ar[n-2]){
        return;
    }
    
    for(int i=n-2;i>=0;i--){
        if(ar[i] > e){
            ar[i+1] = ar[i];
            printArray(ar);
        }
        else{
            ar[i+1] = e;
            printArray(ar);
            return;
        }
    }
    
    if(ar[0] > e){
        ar[0] = e;
        printArray(ar);
    }
    

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

    insertionSort(_ar);
    return 0;
}
