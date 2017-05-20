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

void partition(vector <int>  ar) {
   
    int p = ar[0];
    vector <int> less,equal,more;
    equal.push_back(p);
    for(int i=1;i<ar.size();i++){
        
        if(ar[i]<p){
            less.push_back(ar[i]);
        }
        else if(ar[i]>p){
            more.push_back(ar[i]);
        }
        else{
            equal.push_back(ar[i]);
        }
        
    }
    for(int i=0;i<less.size();i++){
        cout << less[i] << " ";
    }
    for(int i=0;i<equal.size();i++){
        cout << equal[i] << " ";
    }
    for(int i=0;i<more.size();i++){
        cout << more[i] << " ";
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

   partition(_ar);
   
   return 0;
}
