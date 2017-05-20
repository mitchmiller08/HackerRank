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
    int n;
    int m;
    int max;
    int current=0;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0;c_i < m;c_i++){
       cin >> c[c_i];
    }
    
    sort(c.begin(),c.end());
    
    max = c[0];
    
    for(int i=c[0]+1;i<c[m-1];i++){
        if(i - c[current] <= c[current+1] - i){
            if(i - c[current] > max){
                max = i - c[current];
            }
        }
        else{
            if(c[current+1] - i > max){
                max = c[current+1] - i;
            }
        }
        if(i == c[current+1]){
            current++;
        }
    }
    if(n-1 - c[m-1] > max){
        max = n-1 - c[m-1];
    }

    cout << max;
    
    return 0;
}
