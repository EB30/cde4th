#include <bits/stdc++.h>
//#include "stdc++.h"
using namespace std;

int main(){
    int m; 
    cin >> m;
    while(m--){
        int n = 0;
        int a;
        vector<int> v;
        while(n<4){
            cin >> a;
            v.push_back(a);
            ++n;
        }
        std::sort (v.begin(), v.end());
        cout << v[0] *  v[2] << '\n';
    }
}


