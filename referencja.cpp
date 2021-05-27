#include <iostream>
#include <string>

using namespace std;

void modifyString(std::string& str)
{
    str = "Other string";

}

// TODO: Implement modifyString()
// It should modify passed string to text "Other string"

int main() {
    std::string str{"Some string"};
    modifyString(str);
    std::cout << str << '\n';
    return 0;
}
