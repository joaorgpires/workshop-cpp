#include <iostream>

using namespace std;

class Box
{
public:
  
  /* constructors  */
  
  Box(int h, int l, int b)
  {
    set(h,l,b);
  }

  /* destructor */
  
  ~Box()
  { }
  
  /* util */
  
  void set(int h, int l, int b)
  {
    height = h;
    length = l;
    breadth = b;
  }

  int volume() const { return height*length*breadth; }

  /* setters */

  void setHeight(int h)  { set(h,length,breadth); }
  void setLength(int l)  { set(height,l,breadth); }
  void setBreadth(int b) { set(height,length,b);  }

  /* getters */
  
  int getHeight() const  { return height;  }
  int getLength() const  { return length;  }
  int getBreadth() const { return breadth; }
  
private:
  int height;
  int length;
  int breadth;
};


void printBox(const Box& b)
{
  cout << "Box(" << b.getHeight() << "," << b.getLength()
       << "," << b.getBreadth() << ") -> " << b.volume() << endl;
}


int main()
{ 
  Box b1(1,2,3);

  printBox(b1);
  
  b1.set(4,5,6);
  printBox(b1);

  b1.setBreadth(1);
  printBox(b1);

  /*
  Box b2(b1);
  printBox(b2);
  */

  return 0;
}
