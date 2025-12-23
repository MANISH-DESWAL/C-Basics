#include <typeinfo>
#include <iostream>
using namespace std;
int main()
{
    //Auto keyword :-- 
    auto a=10;  //int
    auto b=12.4; //Double
    auto c='A'; //char
    auto d="hello"; //string
    cout << "a: " << a << typeid(a).name() << "\n"
         << "b: " << b << typeid(b).name() << "\n"
         << "c: " << c << typeid(c).name() << "\n"
         << "d: " << d << typeid(d).name() << "\n";
}