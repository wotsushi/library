#pragma once
#include "template.hpp"

template <typename W = ll>
using edge = pair<ll, W>;

template <typename W = ll>
struct graph {
  vector<vector<edge<W>>> E;
  graph(ll n) { E.resize(n); }
  void add(ll i, ll j, W w = 1) {
    E[i].push_back({j, w});
    E[j].push_back({i, w});
  }
  vector<edge<W>> &operator[](ll i) { return E[i]; }
};

template <typename W = ll>
struct directed_graph : graph<W> {
  using graph<W>::graph, graph<W>::E;
  void add(ll i, ll j, W w = 1) { E[i].push_back({j, w}); }
};
