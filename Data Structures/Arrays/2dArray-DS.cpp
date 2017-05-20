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

int hourglass(int pivotx, int pivoty, vector< vector<int> >& a){
    int sum=0;
    sum = a[pivoty][pivotx] + a[pivoty][pivotx+1] + a[pivoty][pivotx+2] + a[pivoty+1][pivotx+1] + a[pivoty+2][pivotx] + a[pivoty+2][pivotx+1] + a[pivoty+2][pivotx+2];
    return sum;
}


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    int max=-64;
    int dummy=0;
    int maxy=0;
    int maxx=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            dummy = hourglass(i,j,arr);
            if(dummy > max){
                max = dummy;
                maxx=i;
                maxy=j;
            }
        }
    }
    cout << max;
    //cout << endl << maxx << " " << maxy;
    return 0;
}
