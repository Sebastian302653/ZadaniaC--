#include <iostream>
#include <vector>


using namespace std;

int foo (int* pointer)
{
    int number = static_cast<int>(number);
    return number;

}
int bar (int* pointer)
{
    int number = static_cast<int>(number);
    return number;

}
// TODO: Implement foo() and bar()
// foo() should modify value under passed pointer to 10
// bar() should modify value under passed pointer to 20
// Can we have a pointer to const or a const pointer?

int main() {
    int number = 5;
    number=10;
    std::cout << number << '\n';
    number=20;
    std::cout << number << '\n';
    int* pointer = &number;
    foo(&number);
    bar(pointer);
    return 0;
}
