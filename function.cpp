#include <iostream>
int getValue ()
{
 std::cout << "Enter an integer: ";
 int input;
 std::cin >> input;
 return input;
}
int main ()
{
 int num (getValue ());
 std::cout << "Double of " << num << " is " << num*2 << '\n';
return 0;
}
