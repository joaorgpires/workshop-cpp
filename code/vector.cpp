#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> input;

  int num;
  
  do
  {
    cin >> num;
    if(num != 0)
      input.push_back(num);
  } while(num != 0);

  cout << "1-pop back" << endl
       << "2-insert at the beginning" << endl
       << "3-exit" << endl;
  
  int op;
  
  do
  {
    cin >> op;
    
    switch(op)
    {
    case 1:
      cout << "Removing " << input.back() << " from the back" << endl;
      input.pop_back();
      break;
    case 2:
      cout << "Num: "; cin >> num;
      cout << "Inserting " << num << " in the first position" << endl;
      input.insert(input.begin(), num);
      break;
    }
    
  }while(op != 3);

  cout << "Vec size: " << input.size() << endl;
  cout << "Final array: " << endl;

  for(vector<int>::const_iterator it = input.begin(); it != input.end(); ++it)
    cout << *it << " ";

  cout << endl;
  return 0;
}
