#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{

  char c[100] = "Hello There, I am Mriganka Mousum Gogoi";
  char *ptr = strtok(c, " ");

  while (ptr != NULL)
  {
    cout << ptr << endl;
    ptr = strtok(NULL, " ");
  }

  return 0;
}