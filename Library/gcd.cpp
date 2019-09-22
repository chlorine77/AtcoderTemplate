//ユークリッドの互除法
#include "bits/stdc++.h"
using namespace std;

std::int64_t gcd(std::int64_t a, std::int64_t b) {
  // a >= b && b != 0
  std::int64_t c;
  do {
    c = a % b;
    a = b;
    b = c;
  } while (c);

  return a;
}

std::int64_t gcd_s(std::int64_t aa, std::int64_t bb) {
  std::int64_t a = max(aa, bb);
  std::int64_t b = min(aa, bb);
  std::int64_t c;
  if (b == 0) {
    return -1;
  }
  do {
    c = a % b;
    a = b;
    b = c;
  } while (c);

  return a;
}
