
#include <iostream>
using namespace std;

int y=10; // global variable
int main()
{
    // local variable:--
    int x;
    int x1=123;
    cout << "garbage local var" << x << "\n";
    cout << "x1 -" << x1 << "\n";
    
    // gllobal:-- 
    cout << y << "previous is global variable" << "\n";
    

    //using extern keyword
    extern int z;
    cout << z;
     return 0;


}
int z=1000;