#pragma once
#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;

#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, n) for (ll i = 1; i <= (n); ++i)
#define all(a) (a).begin(), (a).end()
template <class T>
struct vector1 {
  vector<T> v;
  vector1(ll n) { v = vector<T>(n); }
  vector1(ll n, T e) { v = vector<T>(n, e); }
  T &operator[](ll i) & { return v[i - 1]; }
};
template <class T, class U>
bool chmax(T &a, U b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T, class U>
bool chmin(T &a, U b) {
  if (b < a) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T>
void print(vector<T> x) {
  ll n = x.size();
  rep(i, n - 1) cout << x[i] << ' ';
  cout << x[n - 1] << endl;
}
template <class T>
void print(vector1<T> x) {
  print(x.v);
}
template <class T>
void print(T x) {
  cout << x << endl;
}
template <class T, class U>
void print(T x, U y) {
  cout << x << ' ' << y << endl;
}

template <typename F>
struct FixPoint : F {
  FixPoint(F &&f) : F{std::forward<F>(f)} {}

  template <typename... Args>
  decltype(auto) operator()(Args &&...args) const {
    return F::operator()(*this, std::forward<Args>(args)...);
  }
};
template <typename F>
inline FixPoint<std::decay_t<F>> fix(F &&f) {
  return std::forward<std::decay_t<F>>(f);
}
void solve();

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << std::fixed << std::setprecision(15);
  solve();
}
