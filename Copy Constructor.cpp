#include <iostream>
using namespace std;
#include <string.h>
class student{
    int sid;
    char sname[20];
    public:
    student(int id , char name[])
    {
        sid=id;
        strcpy(sname,name);
    }
    
    student(student & temp){
        sid = temp.sid;
        strcpy(sname,temp.sname);
    }

    void print_record(){
        cout<<"student id ="<< sid <<endl;
        cout<<"student name =" << sname <<endl;
    }

};
int main(){
    int id;
    char name[20];
    cout<<"enter the id and name";
    cin>>id;
    cin>>name;
    student obj1(id , name);
    obj1.print_record();

    student obj2(obj1);
    obj2.print_record();
    return 0;
}