// WRITE A PROGRAM WITH THE HELP OF A CLASS.
#include <iostream>
using namespace std;

class add
{
private:
    int a, b, c;

public:
    void input()
    {
        cout << "enter value:" << endl;
        cin >> a >> b;
    }
    void sum()
    {
        c = a + b;
    }
    void display()
    {
        cout  << c << endl;
    }
};
int main()
{
    add obj;
    obj.input();
    obj.sum();
    obj.display();
    return 0;
}
