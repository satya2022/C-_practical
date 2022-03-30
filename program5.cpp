//WRITE APROGRAM USING CONSTRUCTOR
#include<iostream>
using namespace std;

class wall{
    private:
    double length;
    public:
    wall()
{
    length = 5.5;
    cout << "wall length: " << length <<endl;
}
};
int main(){
    wall wall1;
    return 0;
}