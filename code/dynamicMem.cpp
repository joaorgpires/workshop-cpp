#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int *arr = NULL;

  int size;
  cout << "Array size: ";
  cin >> size;

  arr = new int[size]; // memory allocation
  if(!arr)
  {
    cout << "Couldn't allocate memory!" << endl;
    return 1;
  }
  
  int num;
  cout << "Fill array with: ";
  cin >> num;

  fill(arr, arr+size, num); // fill array with provided number

  cout << "Array: ";
  for(int i=0; i!=size; ++i)
    cout << arr[i] << " ";

  cout << endl;
  delete [] arr; // memory free
  
  return 0;
}
