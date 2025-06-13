#include <iostream>
#include <vector>
using namespace std;

void PubbleSort(std::vector<int>& v, int size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - 1 - i; ++j) {
			if (v[j] > v[j + 1]) {
				swap(v[j], v[j + 1]);
			}
		}
	}
}

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