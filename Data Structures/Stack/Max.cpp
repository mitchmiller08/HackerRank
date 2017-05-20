#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,x,t,m=0;
    cin >> n;
    stack<int> list;
    stack<int> max;
    
    for(int i=0;i<n;i++){
        cin >> t;
        if(t==1){
            cin >> x;
            list.push(x);
            if(x>m) m=x;
            max.push(m);
        }
        else if(t==2){
            list.pop();
            max.pop();
            if(max.empty()) m=0;
            else m=max.top();
        }
        else if(t==3) cout << max.top() << endl;
    }
    
    return 0;
}
