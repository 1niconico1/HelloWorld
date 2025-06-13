#include <iostream>
#include <vector>
using namespace std;

int main() {
	std::vector<int> v{ 12,2,4,122 };
	std::cout << "before sort:"
	for (int x : v) {
		std::cout << x << " " << ;
	}
	std::cout << std::endl;
	std::sort(v.begin(), v.end());
	std::cout << "after sort:"
	for (int x : v) {
		std::cout << x << " " << ;
	}
	std::cout << std::endl;
	return 0;
}