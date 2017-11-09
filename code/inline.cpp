#include <iostream>

using namespace std;

inline int max(int n1, int n2)
{
  return n1 > n2 ? n1 : n2;
}

int main()
{
  int a,b;

  while( (cin >> a >> b) )
    cout << "Max: " << max(a,b) << endl;
  
  return 0;
}
