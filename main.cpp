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

void QuickSort(std::vector<int>& v, int left, int right){
	if(left > right){
		return ;
	}
	
	int pivot_idx = rand()%(right - left) + left;
	int pivot = v[pivot_idx];

	int i = left, j = right;
	while(i <=j){
		while(i <= j && v[i] < pivot){
			++i;
		}

		while(i <= j && v[j] > pivot){
			--j;
		}
		
		if(i <= j){
			swap(v[i], v[j]);
			++i;
			--j;
		}
	}

	QuickSort(v, left, j);
	QuickSort(v, j + 1, right);
	
}
int main() {
	srand(time(nullptr));
	std::vector<int> v{ 12,2,4,122 };
	std::cout << "before sort:"
	for (int x : v) {
		std::cout << x << " " << ;
	}
	std::cout << std::endl;
	QuickSort(v, 0, v.size());
	std::cout << "after sort:"
	for (int x : v) {
		std::cout << x << " " << ;
	}
	std::cout << std::endl;
	return 0;
}