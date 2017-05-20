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
    int t;
    cin >> t;
    unordered_map<char,int> brackets = {
        {'(',1},
        {'{',2},
        {'[',3},
        {')',10},
        {'}',20},
        {']',30}
    };
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        stack<char> bracket;
        bool test = true;
        for(int i=0;i<s.length();i++){
            if(brackets[s[i]]<4) bracket.push(s[i]);
            else if(!bracket.empty()){
                if(brackets[bracket.top()] * 10 == brackets[s[i]]) bracket.pop();
                else test = false;
            }
            else if(bracket.empty()) test = false;
        }
        if(!bracket.empty()) test = false;
        if(test) cout << "YES" << endl;
        else if(!test) cout << "NO" << endl;
    }
    return 0;
}
