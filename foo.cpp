#include <iostream>
#include "TString.h"

int main() {
  TString mystring("hello world");
  std::cout << mystring.Data() << std::endl;
  return 0;
}
