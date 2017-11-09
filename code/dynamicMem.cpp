#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int *arr = NULL;

  int size;
  cout << "Array size: "; cin >> size;

  arr = new int[size];
  if(!arr)
  {
    cout << "Couldn't allocate memory!" << endl;
    return 1;
  }
  
  int num;
  cout << "Fill with: "; cin >> num;

  fill(arr, arr+size, num);

  cout << "Array: ";
  for(int i=0; i!=size; ++i)
    cout << arr[i] << " ";

  cout << endl;
  delete [] arr;
  
  return 0;
}
