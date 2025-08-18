#include <iostream>
using namespace std;
class circle{
    public:
    float r , pi=3.14;   
    void setarea(float r)
    {
        this->r=r;
    }
    float getarea();
};
    inline float circle::getarea(){
    return (pi*(r*r));
}
int main(){
    float radius;
    circle obj;
    cout<<"enter radius of circle"<<endl;
    cin>>radius;
    obj.setarea(radius);
    cout<<obj.getarea();
    return 0;
}