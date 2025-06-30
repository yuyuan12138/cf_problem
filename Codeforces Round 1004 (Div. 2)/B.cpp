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
    int n; cin >> n;
    vector<int> nums(n + 1);
    vector<int> cnt(2005, 0);
    for(int i = 1; i <= n; i++){
        cin >> nums[i];
        cnt[nums[i]]++;
    }
    sort(nums.begin(), nums.end());
    
    for(int i = 1; i <= 2000; i++){
        if(cnt[i] == 1){
            // cout << i << "\n";
            cout << "No\n";
            return ;
        }
        if(cnt[i] == 0) continue;
        cnt[i + 1] += cnt[i] - 2;
    }
    // if(nums[n + 1] % 2 != 0 ){
    //     cout << "No\n";
    //     return ;
    // }
    cout << "Yes\n";
    return ;
}

int main() {
    speedup();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}