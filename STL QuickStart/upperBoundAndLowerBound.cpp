#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

  int arr[] = {10, 20, 30, 40, 40, 40, 50, 50, 70, 100};
  cout << arr << endl;

  int length = sizeof(arr) / sizeof(int); //------------------> Length of the array

  int ele;
  cin >> ele;

  // --------------------------- Upper Bound and Lower bound only works with sorted array

  // Lower Bound returns the first occurance of the ele in the array
  auto lb = lower_bound(arr, arr + length, ele);
  cout << lb << endl;
  cout << "Lower bound of " << ele << " is " << lb - arr << endl;

  // Upper Bound returns the index that is just greater than that of the ele in the array
  auto ub = upper_bound(arr, arr + length, ele);
  cout << ub << endl;
  cout << "Upper bound of " << ele << " is " << ub - arr << endl;

  // Occurance frequency of the ele = ub - lb
  cout << "Occurance  is " << ub - lb << " Times" << endl;

  return 0;
}
