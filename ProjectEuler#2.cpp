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
int main()
{
  unsigned int num; cin >> num;
  while (num--)
  {
    unsigned long long curr; cin >> curr;

    unsigned long long total = 0,f1 = 1, f2 = 2;
  

    while (f2 <= curr)
    {
      if (f2 % 2 == 0) total += f2;

      unsigned long long nextF = f1 + f2;
      f1 = f2;
      f2 = nextF;
    }

    cout << total << endl;
  }
  return 0;
}
