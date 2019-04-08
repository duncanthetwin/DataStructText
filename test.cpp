#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <cctype>
//TA: Abhidip Bhattacharyya
/*  Character sets
    a-z = 97 to 122
    A-Z = 65 to 90
    0-9 = 48 to 57
*/
using namespace std;


struct node
{
  int key;
  node *next;
  node(int k, node *n)
  {
    key = k;
    next = n;
  }
};

int myFunc(int n)
{
  int result = 0;
  if (n <= 1)
  {
    return 1;
  }
  result = myFunc(n-1) + myFunc(n-3);
  return result;
}

int main(int argc, char* argv[])
{
  cout << myFunc(4) << endl;
  return 0;
}
