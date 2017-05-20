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
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    int as=0;
    int bs=0;
    int i=0;
    vector<int> a;
    vector<int> b;
    
    a.push_back(a0);
    a.push_back(a1);
    a.push_back(a2);
    b.push_back(b0);
    b.push_back(b1);
    b.push_back(b2);
    
    for(i=0;i<3;++i){
        if(a[i]>b[i]){
            ++as;
        }
        else if(a[i]<b[i]){
            ++bs;
        }
    }
        
    cout << as << " " << bs;
    
    return 0;
}
