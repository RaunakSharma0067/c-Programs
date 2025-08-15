#include <iostream>
using namespace std;

class a
{
    int a;
public:
    void set_value(int a)
    {
        this->a = a;
    }
    int get_value()
    {
        return this->a;
    }
};

int main()
{
    a obj[5];
   for (int i = 0; i < 5; i++)
    {
        obj[i].set_value(i + 1); 
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Object " << i << " value: " << obj[i].get_value() << endl;
    }

    
    return 0;
}