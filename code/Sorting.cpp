#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Person
{
  string name;
  unsigned age;

  Person(string name, unsigned age)
    : name(name), age(age) {}
};

/* custom comparator for sort() */
bool age_compare(const Person& lhs, const Person& rhs)
{
  return lhs.age < rhs.age;
}

/* print vector v */
void print_vec(const vector<Person>& v)
{
  for(vector<Person>::const_iterator it=v.begin(); it!=v.end(); ++it)
    cout << it->name << ", " << it->age << endl;
}

int main()
{
  vector<Person> input;
  
  input.push_back( Person("Pedro",24)  );
  input.push_back( Person("Joana",21)  );
  input.push_back( Person("Manuel",35) );
  input.push_back( Person("Rita",15)   );
  
  vector<Person> v1(input);
  sort(v1.begin(), v1.end(), age_compare);
  print_vec(v1);
  
  return 0;
}
