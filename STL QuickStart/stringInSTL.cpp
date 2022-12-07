#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

// namespace std;

int main()
{

  string s0 = "Hello";
  string s1("hello World!");

  string s2(s1);

  string name = " Mriganka";

  s0.append(name);
  string s3 = s0;

  if (s0.empty())
  {
    cout << "I am so empty😳" << endl;
  }

  else
  {
    cout << "I am not empty" << endl;
    /* code */
  }

  cout << s0 << endl;
  cout << s1 << endl;
  cout << s2 << endl;
  cout << s3 << endl;

  return 0;
}
