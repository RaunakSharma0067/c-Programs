#include <iostream>
using namespace std;
template <class T1,class T2>
class sum{
public:
T1 a;
T2 b;
sum(T1 x , T2 y){
    a=x;
    b=y;
}
void display(){
    cout<<a+b<<endl;
}
};
int main(){
    sum <int,int>obj1(10,20);
    sum <float,float>obj2(10.23,50.23);
    obj1.display();
    obj2.display();
    return 0;
}