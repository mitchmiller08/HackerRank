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

bool integer(float k){
    return k == (float)(int)k;
}

int main(){
    float m1;
    float b1;
    float m2;
    float b2;
    float inter;
    bool test;
    cin >> b1 >> m1 >> b2 >> m2;
    
    inter = (b2-b1) / (m1-m2);
    test = integer(inter);
    if(test==1 && inter > 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
    
    return 0;
}
