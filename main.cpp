#include "add/add.h"
#include "mul/mul.h"
#include "sub/sub.h"
#include <iostream>

int main() {
  float a = 3.0;
  float b = 2.0;
  float res1 = add(a, b);

  float res2 = sub(a, b);

  float res3 = mul(a, b);

  return 0;
}