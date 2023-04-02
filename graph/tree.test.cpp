#define PROBLEM \
  "https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/1/ITP1_1_A"
#include "tree.hpp"

void solve() {
  print("Hello World");
  // 1-2-3-4 のような木
  {
    graph G(4 + 1);
    G.add(4, 3);
    G.add(2, 3);
    G.add(2, 1);
    tree T(G);

    assert(T.p[1] == (edge<ll>{-1, 0}));
    assert(T.p[2] == (edge<ll>{1, 1}));
    assert(T.p[3] == (edge<ll>{2, 1}));
    assert(T.p[4] == (edge<ll>{3, 1}));

    assert(T.c[1] == (vector<edge<ll>>{{2, 1}}));
    assert(T.c[2] == (vector<edge<ll>>{{3, 1}}));
    assert(T.c[3] == (vector<edge<ll>>{{4, 1}}));
    assert(T.c[4] == (vector<edge<ll>>{}));

    assert(T.d[1] == 0);
    assert(T.d[2] == 1);
    assert(T.d[3] == 2);
    assert(T.d[4] == 3);
  }
  // 4-3-2-1 のような木
  {
    graph G(4 + 1);
    G.add(3, 4);
    G.add(2, 3);
    G.add(1, 2);
    tree T(G, 4);

    assert(T.p[4] == (edge<ll>{-1, 0}));
    assert(T.p[3] == (edge<ll>{4, 1}));
    assert(T.p[2] == (edge<ll>{3, 1}));
    assert(T.p[1] == (edge<ll>{2, 1}));

    assert(T.c[4] == (vector<edge<ll>>{{3, 1}}));
    assert(T.c[3] == (vector<edge<ll>>{{2, 1}}));
    assert(T.c[2] == (vector<edge<ll>>{{1, 1}}));
    assert(T.c[1] == (vector<edge<ll>>{}));

    assert(T.d[4] == 0);
    assert(T.d[3] == 1);
    assert(T.d[2] == 2);
    assert(T.d[1] == 3);
  }
  // 1-2
  //  -3-4
  // のような木
  {
    graph G(4 + 1);
    G.add(1, 2);
    G.add(1, 3);
    G.add(3, 4);
    tree T(G);

    assert(T.p[1] == (edge<ll>{-1, 0}));
    assert(T.p[2] == (edge<ll>{1, 1}));
    assert(T.p[3] == (edge<ll>{1, 1}));
    assert(T.p[4] == (edge<ll>{3, 1}));

    assert(T.c[1] == (vector<edge<ll>>{{2, 1}, {3, 1}}));
    assert(T.c[2] == (vector<edge<ll>>{}));
    assert(T.c[3] == (vector<edge<ll>>{{4, 1}}));
    assert(T.c[4] == (vector<edge<ll>>{}));

    assert(T.d[1] == 0);
    assert(T.d[2] == 1);
    assert(T.d[3] == 1);
    assert(T.d[4] == 2);
  }
}
