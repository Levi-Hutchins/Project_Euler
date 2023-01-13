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

long long primeFactors(long n){
    long currentLargest = 0;
    while (n % 2 == 0) {
        currentLargest = 2;
        n = n/2;
    }
 
    for (long i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            currentLargest = i;
            n = n / i;
        }
    }
 
    if (n > 2)
        currentLargest = n;
 
    return currentLargest;
}



int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        cout << primeFactors(n) << endl;
            
        
    }
    return 0;
}
