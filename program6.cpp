// WRITE A PROGRAM OF MALTIPAL INHERITANCE
#include <iostream>
using namespace std;
class base_class
{
public:
    void display()
    {
        cout << "it is the first function of base class " << endl;
    }
};
class base_class2
{
public:
    void display2()
    {
        cout << "it is the second function of base class " << endl;
    }
};
class child_class : public base_class, public base_class2
{
public:
    void display3()
    {
        cout << "it is the child of child  class " << endl;
    }
};
int main()
{
    child_class ch;
    ch.display();
    ch.display2();
    ch.display3();
    return 0;
}
