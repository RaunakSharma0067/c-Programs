// A pure virtual function is a function declared in the base class with (= 0)
// and no body. It acts like a rule saying that any class inheriting it

#include <iostream>
using namespace std;
class a
{
public:
    virtual void show() = 0;
};

class b : public a
{
public:
    void show()
    {
        cout << "Object of derived class 'b' created from abstract base class 'a' — implementing and displaying the inherited pure virtual function." << endl;
    }
};

int main()
{
    b obj;
    obj.show();
    return 0;
}