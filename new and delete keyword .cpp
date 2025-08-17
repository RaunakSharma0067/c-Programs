#include <iostream>
using namespace std;
#include <string.h>
class A{
    public:
    void display()
    {
        cout<<"I'm Display() In Class A"<<endl;
    }
};

int main(){
    A *obj = new A();
    obj->display();
    delete obj;
    return 0;
}