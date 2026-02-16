
#include <iostream>
#include <vector>

using namespace std;

//Linear Search
int linearSearch (vector<int> & arr, int key, int& steps) {
  steps = 0;
for (int i =0; i < arr.size(); i++ {
steps++;
if (arr[i]== key)
  return i;
}

//Binary Search
int binarSearch (vector<int>& arr, int key, int& steps ) {
  steps = 0;
int low = 0;
int high = arr.size () -1;

while (low<- high) {
int mid = (low +hugh) / 2;

steps++;
if (arr[mid] == key)
  return mid;
if (arr[mid] < key)
  low = mid +1;
else
  high - mid - 1;
}
return -1;
}

int main () {
  const int N = 100000;
vector <int> arr(N);

for (int i = 0, i < N; i++) {
arr[i] = i;
}
int key;
cout << "Enter number to search:" ;
cin >> key;

int linearSteps, binarySteps;

linearSearch(arr, key, linearSteps);
binarySearch (arr, key, binarySteps);

cout << "\nLinear Search Steps:" << linearSteps << endl;
cout << "Binary Search Steps;" << binarySteps << endl;

return 0;
}
