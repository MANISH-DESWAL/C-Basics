// Static variables :-- 
#include <iostream>
using namespace std;
int main()
{
    //static variable:-- 
    static int x;
    cout << x<< "\n";
    x=x+1;
    cout << x<< "\n";

    //const variable :--
    const int y=100;
    cout << y << "\n";
    /*
    y=y+1;             // error: assignment of read-only variable 'y'
    cout << y << "\n";
    */
    return 0;
}

