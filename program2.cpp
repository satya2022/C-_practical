
// WRITE A PROGRAM USING INLINE FUNCTION

#include <iostream>
using namespace std;
inline void display(int num)
{
    cout << num << endl;
}
int main()
{
    // first function call
    display(5);
    // second function call
    display(8);
    // third function call
    display(666);

    return 0;
}