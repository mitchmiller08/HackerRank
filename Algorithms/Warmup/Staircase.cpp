#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
       string output;
        for(int j=0;j<n-i-1;j++){
            output += ' ';
        }
        for(int j=0;j<i+1;j++){
            output += '#';
        }
        cout << output << endl;
    }
    
    return 0;
}
