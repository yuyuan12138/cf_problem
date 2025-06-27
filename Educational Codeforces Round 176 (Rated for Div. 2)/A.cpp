#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string> 
#include <string.h>
#include <cstring>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include <list>
#include <bitset>
#include <forward_list>
#include <deque>
#include <set>
#include <tuple>
#include <utility>
#include <numeric>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <chrono>
#include <random>
#include <complex>
#include <functional>
#include <cassert>
#include <climits>
#include <limits>
#include <tuple>
#include <cstdint>
#include <array>

using namespace std;

#define ll long long

inline void speedup() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve(){
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    
    if(n % 2 == 1){
        cnt++;
        n -= k;
    }
    k -= 1;
    if(n == 0){
        cout << cnt << "\n";
        return ;
    }
    if(n <= k){
        cout << cnt + 1 << "\n";
    }else if(n % k == 0){
        cout << cnt + n / k << "\n";
    }else{
        cout << cnt + 1 + n / k << "\n";
    }
    return ;
}

int main() {
    speedup();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}