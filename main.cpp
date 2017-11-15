#include <iostream>
#include <singleobject.h>

using namespace std;

class Test
{
private:
    Test() {}
    Test(const Test& t);
    Test& operator =(const Test& t);
public:
    void print()
    {
        cout << "print" << endl;
    }
    friend class SingleObject<Test>;

};

int main()
{

    Test* p1 = SingleObject<Test>::GetInstance();
    Test* p2 = SingleObject<Test>::GetInstance();

    p1->print();

    cout << "p1=" << p1 << endl;
    cout << "p2=" << p2 << endl;

    return 0;
}
