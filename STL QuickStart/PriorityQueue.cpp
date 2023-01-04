#include <bits/stdc++.h>
using namespace std;
int main()
{
  // -------------  MAX HEAP ------------------
  priority_queue<int> pq; //---------------> Max Heap
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int ele;
    cin >> ele;
    pq.push(ele);
  }

  while (!pq.empty())
  {
    cout << pq.top() << "<--";
    pq.pop();
  }
  cout << endl;

  // -------------  MIN HEAP ------------------

  priority_queue<int, vector<int>, greater<int>> pq1; // ------------>MIN HEAP DECLARATION
  for (int i = 0; i < n; i++)
  {
    int ele;
    cin >> ele;
    pq1.push(ele);
  }

  while (!pq1.empty())
  {
    cout << pq1.top() << "<--";
    pq1.pop();
  }
  cout << endl;
  return 0;
}