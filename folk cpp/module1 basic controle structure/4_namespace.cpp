// 1
// #include <iostream>
// using namespace std;

// // Variable created inside namespace
// namespace first
// {
//     int val = 500;
// }

// // Global variable
// int val = 100;

// int main()
// {
//     // Local variable
//     int val = 200;

//     // These variables can be accessed from
//     // outside the namespace using the scope
//     // operator ::
//     cout << first::val << '\n'; 

//     return 0;
// }

// 2
// Creating namespaces
// #include <iostream>
// using namespace std;
// namespace ns1
// {
//     int value()    { return 5; }
// }
// namespace ns2 
// {
//     const double x = 100;
//     double value() {  return 2*x; }
// }

// int main()
// {
//     // Access value function within ns1
//     cout << ns1::value() << '\n'; 

//     // Access value function within ns2
//     cout << ns2::value() << '\n'; 

//     // Access variable x directly
//     cout << ns2::x << '\n';       

//     return 0;
// }

// 3
// A C++ program to demonstrate use of class
// in a namespace
#include <iostream>
using namespace std;

namespace ns
{
    class geek
    {
    public:
        void display()
        {
            cout << "ns::geek::display()\n";
        }
    };
}

int main()
{
    ns::geek obj;

    obj.display();

    return 0;
}