#include <iostream>

using namespace std;

class Rectangle
{
  /* data-members (private visibility by default) */
  int width, height;

public:
  /* constructors */
  Rectangle() { set(5,5); }
  Rectangle(int w, int h) { set(w,h); }

  /* useful data-functions */

  int get_width() const { return width; }
  int get_height() const { return height; }

  void set(int w, int h) {
    width = w;
    height = h;
  }

  int area() const { return width*height; }
  int perimeter() const { return 2*width + 2*height; }
};

int main()
{
  Rectangle r1;
  Rectangle r2(15,35);

  cout << "Rec 1, area: " << r1.area() << ", perimeter: " << r1.perimeter() << endl;
  cout << "Rec 2, area: " << r2.area() << ", perimeter: " << r2.perimeter() << endl;

  // overload << for fun

  return 0;
}
