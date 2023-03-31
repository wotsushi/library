#define PROBLEM \
  "https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/1/ITP1_1_A"
#include "graph.hpp"

void solve() {
  print("Hello World");
  // 無向グラフ
  {
    graph G(4 + 1);
    G.add(1, 2);
    G.add(2, 3);
    G.add(3, 4);
    G.add(1, 4);
    assert(G[1] == (vector<edge<ll>>{{2, 1}, {4, 1}}));
    assert(G[2] == (vector<edge<ll>>{{1, 1}, {3, 1}}));
    assert(G[3] == (vector<edge<ll>>{{2, 1}, {4, 1}}));
    assert(G[4] == (vector<edge<ll>>{{3, 1}, {1, 1}}));
  }
  // 有向グラフ
  {
    directed_graph<ll> G(4 + 1);
    G.add(1, 2);
    G.add(2, 3);
    G.add(3, 4);
    G.add(4, 1);
    assert(G[1] == (vector<edge<ll>>{{2, 1}}));
    assert(G[2] == (vector<edge<ll>>{{3, 1}}));
    assert(G[3] == (vector<edge<ll>>{{4, 1}}));
    assert(G[4] == (vector<edge<ll>>{{1, 1}}));
  }
  // 重み付きグラフ
  {
    graph<double> G(4 + 1);
    G.add(1, 2, 1.5);
    G.add(2, 3, 2.5);
    G.add(3, 4, 3.5);
    G.add(4, 1, 4.5);
    assert(G[1] == (vector<edge<double>>{{2, 1.5}, {4, 4.5}}));
    assert(G[2] == (vector<edge<double>>{{1, 1.5}, {3, 2.5}}));
    assert(G[3] == (vector<edge<double>>{{2, 2.5}, {4, 3.5}}));
    assert(G[4] == (vector<edge<double>>{{3, 3.5}, {1, 4.5}}));
  }
  // 重み付き有向グラフ
  {
    directed_graph<double> G(4 + 1);
    G.add(1, 2, 1.5);
    G.add(2, 3, 2.5);
    G.add(3, 4, 3.5);
    G.add(4, 1, 4.5);
    assert(G[1] == (vector<edge<double>>{{2, 1.5}}));
    assert(G[2] == (vector<edge<double>>{{3, 2.5}}));
    assert(G[3] == (vector<edge<double>>{{4, 3.5}}));
    assert(G[4] == (vector<edge<double>>{{1, 4.5}}));
  }
}
