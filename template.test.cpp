#define PROBLEM \
  "https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/1/ITP1_1_A"
#include "template.hpp"

void solve() {
  {
    vector<ll> v;
    rep(i, 3) v.push_back(i);
    assert(v == vector<ll>({0, 1, 2}));
  }
  {
    vector<ll> v;
    rep1(i, 3) v.push_back(i);
    assert(v == vector<ll>({1, 2, 3}));
  }
}
