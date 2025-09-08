#include <iostream>
using namespace std;
#include <string.h>
void get_choice(int choice)
{
    if (choice == 1)
    {
        throw 10;
    }
    else if (choice == 2)
    {
        throw 12.25;
    }
    else
    {
        throw "exception";
    }
}

int main()
{
    try
    {
        get_choice(3);
    }
    catch (int x)
    {
        cout << "Exception Handled 1:" << x << endl;
    }
    catch (double y)
    {
        cout << "Exception Handled 2:" << y << endl;
    }
    catch (...)
    {
        cout << "Exception Handled 2:" << endl;
    }
    return 0;
}