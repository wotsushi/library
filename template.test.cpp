#define PROBLEM \
  "https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/1/ITP1_1_A"
#include "template.hpp"

void solve() {
  print("Hello World");
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
  {
    vector<ll> v = {2, 3, 1};
    sort(all(v));
    assert(v == vector<ll>({1, 2, 3}));
  }
  {
    vector1<ll> v(3);
    v[1] = 1;
    v[2] = 2;
    v[3] = 3;
    assert(v[1] == 1);
    assert(v[2] == 2);
    assert(v[3] == 3);
  }
  {
    ll x = 42;
    bool flag = chmax(x, 57);
    assert(x == 57);
    assert(flag == true);
  }
  {
    ll x = 42;
    bool flag = chmax(x, 17);
    assert(x == 42);
    assert(flag == false);
  }
  {
    ll x = 42;
    bool flag = chmax(x, 42);
    assert(x == 42);
    assert(flag == false);
  }
  {
    ll x = 42;
    bool flag = chmin(x, 17);
    assert(x == 17);
    assert(flag == true);
  }
  {
    ll x = 42;
    bool flag = chmin(x, 57);
    assert(x == 42);
    assert(flag == false);
  }
  {
    ll x = 42;
    bool flag = chmin(x, 42);
    assert(x == 42);
    assert(flag == false);
  }
  {
    auto res = fix([](auto&& f, int n) -> int {
      return n < 2 ? n : (f(n - 1) + f(n - 2));
    })(5);
    assert(res == 5);
  }
}
