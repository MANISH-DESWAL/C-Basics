#include <typeinfo>
#include <iostream>
using namespace std;
int main()
{
    //Type Conversion :-- 
    float x = 10.6;
    int y=x; //implicit conversion from float to int
    bool z=y; //implicit conversion from int to bool
    cout << "x: " << x << "\n"
         << "y: " << y << "\n"
         << "z: " << z << "\n";

    
    //if there are multiple conversions, then the compiler follows the standard conversion sequence
    //e.g. bool -> char -> short int -> int -> unsigned int -> 
    //     -> long -> unsigned long -> long long -> float -> double 
    bool a = true;
    char b = 'A'; 
    auto n=a + b; // bool to char, then char to int
    cout << "a+b: " << a << b <<a + b << typeid(a + b).name() << "\n"; // bool to char, then char to int
    float c = 5.5;
    auto m=n + c; // int to float
    cout << "n+c: " << n << "+" << c << "=" << m << typeid(m).name() << "\n"; // int to float
    

    //without Explicit type conversion (type casting):--
    int p = 15;
    int q = 4;
    cout << "p/q: " << p / q << "\n"; // integer division

    //with Explicit type conversion (type casting):--
    cout << "p/q (with type casting): " << static_cast<double>(p) / q << "\n"; 
    
    return 0;


}