//WRITE A PROGRAM USING FRIND FUNCTION
#include<iostream>
using namespace std;

class A
{
    int a,b;
    public:
    void input()
    {
cout <<"enter values"<<endl;
cin >> a>>b;
    }
    friend void add(A ob);
};
void add(A ob)
{
    int c;
    c=ob.a+ob.b;
    cout<<"sum="<<c<<endl;
}
int main(){
    A kk;
    kk.input();
    add(kk);
}
