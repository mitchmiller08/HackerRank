#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n,count;
    cin >> n;
    vector<int> c(n);
    int pairs[101];
    for(int i=0;i<101;i++){
        pairs[i] = 0;
    }
    
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    
    for(int i=0;i<n;i++){
        pairs[c[i]]++;
    }
    
    for(int i=0;i<101;i++){
        pairs[i] /= 2;
        count += pairs[i];
    }
    
    cout << count;
    
    return 0;
}
