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
    string s;
    long number;
    long length;
    long total;
    cin >> s;
    long n;
    cin >> n;
    
    number = count(s.begin(),s.end(),'a');
    length = s.length();
    
    total = number * floor(n / length);
    string last = s.substr(0,n % length);
    total += count(last.begin(),last.end(),'a');
    
    cout << total;
    
    return 0;
}
