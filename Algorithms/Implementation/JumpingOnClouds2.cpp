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
    int k;
    int energy = 100;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    
    int i = 0;
    if(c[(i+k)%n]==0){
        energy -= 1;
    }
    else{
        energy -= 3;
    }
    i = (i + k) % n;
    while(i != 0){
        if(c[(i+k)%n]==0){
            energy -= 1;
        }
        else{
            energy -= 3;
        }
        i = (i + k) % n;
    }
    
    cout << energy;
    
    return 0;
}
