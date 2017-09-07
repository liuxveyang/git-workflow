#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char *argv[argc])
{
  int i;

  for (i = 0; i < 1010; ++i) {
    // change (1) of feature b
    cout << "feature b: for i = " << i << "\n";
  }

  // ====================

  while (i > 0) {
    // change (2) of feture b
    cout << "feature b: while i = " << i << "\n";
  }

  return 0;
}
