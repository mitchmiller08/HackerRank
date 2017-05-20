#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

void split(const string &s, char delim, vector<string> &elems) {
    stringstream ss;
    ss.str(s);
    string item;
    while (getline(ss, item, delim)) {
        elems.push_back(item);
    }
}


vector<string> split(const string &s, char delim) {
    vector<string> elems;
    split(s, delim, elems);
    return elems;
}

int main(){
    string time;
    cin >> time;
    
    vector<string> splittime = split(time,':');
    
    int hour = stoi(splittime[0]);
    int min = stoi(splittime[1]);
    int sec = stoi(splittime[2]);
    string period = splittime[2].substr(2,2);
    
    if(hour == 12){
        hour -= 12;
    }
    if(period == "PM"){
        hour +=12;
    }
    
    cout << setfill('0') << setw(2) << hour << ":";
    cout << setfill('0') << setw(2) << min << ":";
    cout << setfill('0') << setw(2) << sec;
    
    return 0;
}
