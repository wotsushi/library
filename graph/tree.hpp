#include "graph.hpp"

template <class W = ll>
struct tree {
  vector<vector<edge<W>>> c;
  vector<edge<W>> p;
  vector<ll> d;
  tree(graph<W>& g, ll r = 1) {
    ll N = g.E.size();
    c.resize(N);
    p.resize(N, {-1, 0});
    d.resize(N);
    queue<pair<ll, ll>> q;
    q.push({r, 0});
    while (!q.empty()) {
      auto [i, x] = q.front();
      q.pop();
      d[i] = x;
      for (auto [j, w] : g[i]) {
        if (j == p[i].first) continue;
        p[j] = {i, w};
        c[i].push_back({j, w});
        q.push({j, x + 1});
      }
    }
  }
};
