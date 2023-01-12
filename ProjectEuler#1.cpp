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


unsigned long long test(unsigned long long x){ return x * (x + 1) / 2;}

int main()
{
  unsigned int num; cin >> num;
  
  while(num--){
      unsigned long long curr;
      cin >> curr;
      curr--;
      long divis_three   =  3 * test(curr /  3);
      long divis_five    =  5 * test(curr /  5);
      long divis_fifteen = 15 * test(curr / 15);

    std::cout << (divis_three + divis_five - divis_fifteen) << std::endl;
      
  }
  return 0;
  
}