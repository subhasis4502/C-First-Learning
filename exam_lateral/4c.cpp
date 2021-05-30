#include <iostream>
using namespace std;

class Test {
   public:
      int a;
   mutable int b;
   Test(int x=0, int y=0): a{x}, b{y} {}
   void set_a(int x=0) {
      a = x;
   }
   void set_b(int y=0) {
      b = y;
   }
   void display() {
      cout << "a: "<<a<<" b: "<<b<<endl;
   }
};
int main() {
   const Test t(10,20);
   cout<<t.a<<" "<<t.b<<"\n";
   t.b=100; //b still can be changed, because b is mutable.
   cout<<t.a<<" "<<t.b<<"\n";
   return 0;
}