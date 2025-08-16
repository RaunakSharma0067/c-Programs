#include <iostream>
using namespace std;
class a{
public:
int a;
void set_a(int a){
this->a=a;
}
void operator ++(){
++(this->a);
}
};
int main(){
    a obj;
    obj.set_a(10);
    ++obj;
    cout<<obj.a;
    return 0;
}



