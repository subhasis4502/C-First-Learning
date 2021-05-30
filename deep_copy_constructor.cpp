#include <iostream>
#include <string>

using namespace std;

class Deep
{
private:
    int *data;

public:
    void set_data(int d) { *data = d; }
    int get_data() { return *data; }
    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
};

Deep::Deep(int d)
{
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source)
    : Deep(*source.data)
{
    cout << "Copy constructor - Deep copy" << endl;
}

Deep::~Deep()
{
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_deep(Deep s)
{
    cout << s.get_data() << endl;
}

int main()
{
    Deep obj1{100};
    display_deep(obj1);

    Deep obj2{obj1};
    obj2.set_data(1000);
    display_deep(obj1);
    display_deep(obj2);
    return 0;
}