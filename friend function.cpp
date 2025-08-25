#include <iostream>
using namespace std;
class b;
class a {
    int arr[3][3];

public:
    void set_matrix() {
        int j;
        cout << "enter 3*3 matrix" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    friend void operator+(a ob1, b ob2);
};

class b {
    int arr[3][3];
public:
    void set_matrix() {
        cout << "enter 3*3 matrix" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    friend void operator+(a ob1, b ob2);
};

void operator+(a ob1, b ob2) {
    cout << "sum of matrix=" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ob1.arr[i][j] + ob2.arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    a ob1;
    b ob2;
    ob1.set_matrix();
    ob2.set_matrix();
    ob1 + ob2;
    return 0;
}