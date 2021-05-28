#include<iostream>
#include<memory>


using namespace std;

void foo (std::shared_ptr<int> number)
{
    *number = 20;
    std::cout << *number << '\n';
    std::cout <<  number.use_count() << '\n';

}

int main()
{
    std::shared_ptr<int> number = std::make_shared<int>(10);
    std::cout << *number << '\n';
    foo(number);
    std::cout << *number << '\n';
    std::cout << number.use_count() << '\n';


    return 0;
}
