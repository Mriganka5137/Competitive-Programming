#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

  // For Binary Search the array needs to be sorted
  int arr[] = {1, 2, 3, 54, 56};
  // Lenght of an array in c++

  int x = sizeof(arr);
  cout << "The Size of the array is " << x << endl;

  int y = sizeof(int);
  cout << "The size of int is " << y << endl;

  int n = x / y;
  cout << "The size of the array is " << n << endl;

  int ele;
  cin >> ele;

  bool present = binary_search(arr, arr + n, ele);

  if (present)
  {
    cout << "Present!" << endl;
  }
  else
  {
    cout << "Absent!" << endl;
  }

  return 0;
}