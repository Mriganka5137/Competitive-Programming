#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
  string name;
  int age;

  Person()
  {
  }

  Person(string n, int a)
  {
    name = n;
    age = a;
  }
};

class PersonCompare
{
public:
  bool operator()(Person A, Person B)
  {
    return A.age > B.age;
  }
};

int main()
{
  int n;
  cin >> n;

  priority_queue<Person, vector<Person>, PersonCompare> pq;

  for (int i = 0; i < n; i++)
  {
    int age;
    string name;
    cin >> name >> age;

    Person p(name, age);
    pq.push(p); //----------------> O(Log n)
  }
  int k = 3;

  for (int i = 0; i < k; i++)
  {
    Person p = pq.top(); //--------->  O(1)
    cout << p.name << " " << p.age << endl;
    pq.pop(); //----------------> O(Log n)
  }

  return 0;
}