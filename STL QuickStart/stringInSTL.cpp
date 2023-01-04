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

  char a[] = {'a',
              'b',
              'c', '\0'};

  string s4(a);
  /*
  if (s0.empty())
  {
    cout << "I am so empty😳" << endl;
  }

  else
  {
    cout << "I am not empty" << endl;
  }


  cout << s0 << endl;
  cout << s1 << endl;
  cout << s2 << endl;
  cout << s3 << endl;
  cout << s4 << endl;
  cout << name << endl;

  */

  // Clear or Erase
  cout << s0.length() << endl;
  s0.clear(); //-------------> Erase the string class
  cout << s0.length() << endl;

  // Compare
  /*It compares the strings lexographically
    If both are equal it returns a 0 value;
    Otherwise it returns either < 0 or > 0 values
  */
  s0 = "Mango";
  s1 = "Apple";
  cout << s0.compare(s1) << endl;
  cout << s1.compare(s0) << endl;
  cout << s1.compare(s1) << endl;

  // Opeartor Overloaded
  if (s1 > s0)
    cout << "Apple is lexographically greater than apple" << endl;
  else
    cout << "Mango is greater" << endl;

  //  Access in String
  cout << s1[0] << endl;

  // Find Substring
  /*It returns the start index of the substring we are trying to find*/
  string s = "I want to eat pork biriyani.";
  int index = s.find("pork");
  cout << index << endl;

  // Remove a substring
  string word = "pork";
  int len = word.length();

  cout << s << endl;
  s.erase(index, len); // Removes from a given index to the length specified
  cout << s << endl;

  // Iterate over all the characters in a string

  // For loop
  for (int i = 0; i < word.length(); i++)
  {
    cout << word[i] << "-";
  }
  cout << endl;

  // Iterator
  for (auto it = word.begin(); it != word.end(); it++)
  {
    cout << *it << ":";
  }
  cout << endl;

  // For Each Loop
  for (auto c : word)
  {
    cout << c << ".";
  }

  cout << endl;

  return 0;
}
