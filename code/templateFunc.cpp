#include <iostream>

using namespace std;

template <typename T>
T Min(const T& lhs, const T& rhs)
{
  return lhs < rhs ? lhs : rhs;
}

int main()
{
  int a,b;

  cin >> a >> b;
  cout << "Min: " << min(a,b) << endl;

  double c,d;

  cin >> c >> d;
  cout << "Min: " << min(c,d) << endl;

  return 0;
}
