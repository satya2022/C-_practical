//WRITE A PROGRAM USING DESTRUCTOR
#include<iostream>
using namespace std;
class helloworld{
    public:
helloworld(){
cout<<"constructor is called"<<endl;
}
~ helloworld(){
cout<<" destructor is called"<<endl;
}
//member function
void display(){
    cout<<"form member function"<<endl;
}
};
int main(){
    helloworld obj;
    obj.display();
    return 0;
}
