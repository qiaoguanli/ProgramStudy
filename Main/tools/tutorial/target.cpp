//Do some thing 
#include <iostream>

using namespace std;

bool DoSomething(const uint8_t *data, size_t Size)
{
  bool result = false;
  if (Size >= 3) {
    result = data[0] == 'F' &&
             data[1] == 'U' &&
             data[2] == 'Z' &&
             data[3] == 'Z';
  }
  char a[10];

  return result;
}



extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) {
  DoSomething(Data, Size);
  return 0;  // Non-zero return values are reserved for future use.
}