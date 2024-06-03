#include <iostream>
#include<ctime>
using namespace std;

int findSequence(int arr[], int start, int end, int sum, int minSum, int minIndex) {
	if (start == end) {
		return minIndex;
	}
	if (sum < minSum) {
		minSum = sum;
		minIndex = start;
	}
	return findSequence(arr, start + 1, end, sum - arr[start] + arr[start + 10], minSum, minIndex);
}

int main() {
	int arr[20];
	srand(time(0));
	for (int i = 0; i < 20; i++) {
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < 20; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	int minSum = 0;
	for (int i = 0; i < 10; i++) {
		minSum += arr[i];
	}
	int minIndex = 0;
	minIndex = findSequence(arr, 0, 10, minSum, minSum, minIndex);
	cout << "Min sum: " << minSum << endl;
	cout << "Min index: " << minIndex << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[minIndex + i] << " ";
	}
	cout << endl;
	return 0;
}