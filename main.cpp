#include "bits/stdc++.h"
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, n) for (int i = (int)(n)-1; i >= 0; i--)
#define repf(i, x, n) for (int i = (int)(x); i < (int)(n); i++)
#define repfr(i, x, n) for (int i = (int)(x)-1; i >= (int)(n); i--)
#define INF 1e9
using ll = int64_t;
template <class T>
bool chmax(T &a, const T &b)
{
  if (a < b)
  {
    a = b;
    return true;
  }
  return false;
}
template <class T>
bool chmin(T &a, const T &b)
{
  if (b < a)
  {
    a = b;
    return true;
  }
  return false;
}

//10^9 + 7
#define yojo 1000000007

std::int64_t gcd(std::int64_t a, std::int64_t b)
{
  // a >= b && b != 0
  std::int64_t c;
  do
  {
    c = a % b;
    a = b;
    b = c;
  } while (c);

  return a;
}
std::int64_t gcd_s(std::int64_t aa, std::int64_t bb)
{
  std::int64_t a = max(aa, bb);
  std::int64_t b = min(aa, bb);
  std::int64_t c;
  if (b == 0)
  {
    return -1;
  }
  do
  {
    c = a % b;
    a = b;
    b = c;
  } while (c);

  return a;
}
void rle(std::vector<std::pair<char, std::int64_t>> &data, std::string str)
{
  char now = str[0];
  std::int64_t count = 0;
  for (std::int64_t i = 0; i < str.size() + 1; i++)
  {
    if (i == str.size())
    {
      data.push_back(make_pair(str[i - 1], count));
      break;
    }
    else if (now != str[i])
    {
      data.push_back(make_pair(now, count));
      now = str[i];
      count = 0;
    }
    count++;
  }

  return;
}

#define MAX_NUM 200001

void Main()
{
  

  return;
}

int main()
{
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);
  Main();
  return 0;
}
