#include <iostream>

using namespace std;

//For Public Inheritence
class Base
{
public:
    int a; //Accessible by both base and derived class as public
protected:
    int b; //Accessible by both base and derived class as protected
private:
    int c; //Accessible only by base class as private
};

//For Public Inheritence
class Derived1: public Base{

    //'a' is Accessible by both base and derived class as public

    //'b' is Accessible by both base and derived class as protected

    //'c' is Accessible only by base class as private
};

//For Protected Inheritence
class Derived2: protected Base{
    
    //'a' is Accessible by both base class as public and derived class as protected

    //'b' is Accessible by both base and derived class as protected

    //'c' is Accessible only by base class as private
};

//For Private Inheritence
class Derived3: private Base{

    //'a' is Accessible by both base class as public and derived class as private

    //'b' is Accessible by both base class as private and derived class as private

    //'c' is Accessible only by base class as private
};

int main()
{
    Base base;
    base.a = 10; //Accessible as public
    base.b = 20; //Not Accessible as protected
    base.c = 30; //Not Accessible as private

    Derived1 d1;
    d1.a = 10; //Accessible as public
    d1.b = 20; //Not Accessible as protected
    d1.c = 30; //Not Accessible as private

    Derived2 d2;
    d2.a = 10; //Not Accessible as protected
    d2.b = 20; //Not Accessible as protected
    d2.c = 30; //Not Accessible as private

    Derived3 d3;
    d3.a = 10; //Not Accessible as private
    d3.b = 20; //Not Accessible as private
    d3.c = 30; //Not Accessible as private
    return 0;
}