//ラングレス圧縮
#include "bits/stdc++.h"
using namespace std;
void rle(std::vector<std::pair<char, std::int64_t>> &data, std::string str) {
  char now = str[0];
  std::int64_t count = 0;
  for (std::int64_t i = 0; i < str.size() + 1; i++) {
    if (i == str.size()) {
      data.push_back(make_pair(str[i - 1], count));
      break;
    } else if (now != str[i]) {
      data.push_back(make_pair(now, count));
      now = str[i];
      count = 0;
    }
    count++;
  }

  return;
}
