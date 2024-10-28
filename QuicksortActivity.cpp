#include <iostream>
#include <vector>
#include <algorithm> // Needed for std::swap

// ==============================================================
// Helper Functions

template <typename T>
void printArray(const std::vector<T>& arr) {
	for (const T& elem : arr) {
		std::cout << elem << " ";
	}
	std::cout << '\n';
}

// ==============================================================
// Lomuto Partition Scheme

template <typename T>
int lomutoPartition(std::vector<T>& arr, int low, int high) {
	// 1. Choose the last element as the pivot (arr[high])
	// 2. Initialize i to (low-1). i represents the rightmost position of elements smaller than pivot

	for (int j{ low }; j < high; ++j) {
		// 3. Compare current element (arr[j]) with pivot
		// 4. If arr[j] is smaller than pivot:
		//    a. Increment i (expand the "smaller than pivot" section)
		//    b. Swap arr[i] with arr[j] (move smaller element to left section)
	}
	// 5. Place pivot in its final position by swapping arr[i+1] with arr[high]
	// 6. Return (i+1) as the pivot's final position
}

// ==============================================================
// Hoare Partition Scheme

template <typename T>
int hoarePartition(std::vector<T>& arr, int low, int high) {
	// 1. Choose middle element as pivot: arr[mid] where mid = low + (high-low)/2

	// 2. Initialize left index i to (low-1)
	// 3. Initialize right index j to (high+1)

	while (true) {
		// 4. Move i right until finding an element >= pivot:
		//    - Increment i
		//    - Continue while arr[i] < pivot

		// 5. Move j left until finding an element <= pivot:
		//    - Decrement j
		//    - Continue while arr[j] > pivot

		if (i >= j) {
			// 6. If indices crossed, partition is complete
			//    Return j as the partition point
		}

		// 7. If indices haven't crossed, swap arr[i] with arr[j]
	}
}


// ==============================================================
// Quicksort Function (Unified with Comments for Switching)

template <typename T>
void quicksort(std::vector<T>& arr, int low, int high) {
	if (low < high) {
		// 1. Get partition index by calling either lomutoPartition or hoarePartition
		// 2. For Lomuto: recursively sort left part (low to pivotIndex-1)
		//    For Hoare: recursively sort left part (low to pivotIndex)
		// 3. For both: recursively sort right part (pivotIndex+1 to high)
	}
}

// ==============================================================
// Main Function

int main() {
	std::vector<int> data{ 45, 4, 6, 18, 2, 32, 9, 14, 17, 5, 23, 10, 21, 7, 1, 19 };

	std::cout << "Original array: ";
	printArray(data);

	quicksort(data, 0, static_cast<int>(data.size()) - 1); // Correct casting

	std::cout << "Sorted array: ";
	printArray(data);

	return 0;
}

