#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name;
  string nameSep;

  cout << "Name: " << endl;
  getline(cin,name);

  cout << "Name separator: " << endl;
  cin >> nameSep;

  size_t pos = name.find(nameSep);
  if(pos == string::npos)
  {
    cout << nameSep << " not found!" << endl;
    return 1;
  }

  string preName = name.substr(0,pos);
  string posName = name.substr(pos+nameSep.size());

  cout << "preName: " << preName << endl
       << "posName: " << posName << endl;
  
  return 0;
}
