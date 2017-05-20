#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n,q,t,x,y;
    int lastAns=0;
    cin >> n >> q;
    vector< vector<int> > seqList(n,vector<int>(0));
    for(int i=0;i<q;i++){
        cin >> t >> x >> y;
        if(t==1){
           seqList[(x^lastAns)%n].push_back(y); 
        }
        else if(t==2){
            lastAns = seqList[(x^lastAns)%n][y%seqList[(x^lastAns)%n].size()];
            cout << lastAns << endl;
        }
    }
    
    return 0;
}
