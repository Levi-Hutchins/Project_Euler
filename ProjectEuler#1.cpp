/*
  Majority of the following code can be found on HackerRank when 
  attempting Problem number 1.
  You are given sample code and need to write your own algorithm to pass
  the test cases.
*/
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

// Triangluar numbers formula
unsigned long long test(unsigned long long x){ return x * (x + 1) / 2;}

int main()
{
  unsigned int num; cin >> num;
  
  while(num--){
      unsigned long long curr;
      cin >> curr;
      curr--; // 
      long divis_three   =  3 * test(curr /  3); // Sum1 = {x : x % 3 == 0}
      long divis_five    =  5 * test(curr /  5); // Sum2 = {x : x % 5 == 0}
      long divis_fifteen = 15 * test(curr / 15); // Sum3 = {x : x % 15 == 0}

    
      // Since 15 is both divisible by 3 and 5 we need to exclude any multiple of 15 from
      // our total sum
      cout << (divis_three + divis_five - divis_fifteen) << endl;
      
  }
  return 0;
  
}
