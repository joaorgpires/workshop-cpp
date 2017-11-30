/* 
 * the following libraries are not needed
 * since bits/stdc++ is being used
 *
 * 
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<int> numbers;
  set<int> seen;
  
  int num;
  while(cin >> num)
  {
    if(seen.find(num) != seen.end())
      continue;

    numbers.push_back(num);
    seen.insert(num);
  }
  
  sort(numbers.begin(), numbers.end());

  for(size_t i=0; i!=numbers.size(); ++i)
    cout << numbers[i] << " ";
  cout << endl;
}
