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
    int q;
    cin >> n >> k >> q;
    k = k%n;
    vector<int> a(n);
    vector<int> i(q);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    for(int a0 = 0; a0 < q; a0++){
        int m;
        cin >> i[a0];
    }
    
    rotate(a.rbegin(),a.rbegin()+k,a.rend());
    
    for(int a0 = 0; a0<q;a0++){
        cout << a[i[a0]] << endl;
    }
    
    return 0;
}
