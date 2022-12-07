#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

  int arr[] = {51, 3, 1, 2, 2, 2, 2, 99, 21};
  int length = sizeof(arr) / sizeof(int);

  int ele;
  // cin >> ele;

  // Lower Bound returns the first occurance of the ele in the array
  auto lb = lower_bound(arr, arr + length, 2);
  cout << "Lower bound of " << ele << " is " << lb - arr << endl;

  // Upper Bound returns the index that is just greater than that of the ele in the array
  auto ub = upper_bound(arr, arr + length, 2);
  cout << "Upper bound of " << ele << " is " << ub - arr << endl;

  // Occurance frequency of the ele = ub - lb
  cout << "Occurance of 2 is " << ub - lb << " Times" << endl;

  return 0;
}
