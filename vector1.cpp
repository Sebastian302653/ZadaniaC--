#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	std::vector<int> vec = { 1, 2, 4, 5, 6 };
	auto it = std::remove(vec.begin(), vec.end(), 1);
    vec.erase(it, vec.end());
	vec.push_back(5);
	vec.emplace_back(12);
	std::cout << "vec contains: " << vec.size() << " elements.\n";
    std::cout << "Maximum size of a 'vector' is: " << vec.max_size() << "\n";
    std::cout << "v = { ";
    for (int n : vec) {
        std::cout << n << ", ";
    }
    std::cout << "}; \n";
    vec.clear();
    std::cout << "Clear\n";
    std::cout << "After clear:";
   std::cout << "v = { ";
    for (int n : vec) {
        std::cout << n << ", ";
    }
    std::cout << "}; \n";
    std::cout << "vec size: " << vec.size() << " elements.\n";
}



