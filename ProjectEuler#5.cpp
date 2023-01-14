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
long long GCD(int a, int b)
{
    long curr = min(a, b);
    while (curr > 0) {
        if (a % curr == 0 && b % curr == 0) {
            break;
        }
        curr --;
    }
    return curr; 
}
long long test(int n){
    long lcm = 1;
    for (long i = 1; i <= n; i++) {
        lcm = (lcm * i) / GCD(lcm, i);
    }
    return lcm;
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << test(n) << endl;
    }
    return 0;
}
