#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

#include "make_random_vector.hpp"

using namespace std;

int main()
{
    /*
      int           n = 10;
      vector< int > V = make_random_vector(n, 0, 10);

      for (int i = 0; i < n; i++) {
          cout << V[i] << endl;
      }
      cout << endl;
      sort(V.begin(), V.end(), greater< int >());

      for (int i = 0; i < n; i++) {
          cout << V[i] << endl;
      }
      int l;
      int a = 0;
      // cin >> a;
      l = count_if(V.begin(), V.end(), [&](int i) { return i > a; });
      cout << endl << l;
      // puts("Hello, World!");
      */
    // DO ZADAŃ I-IV
    /*
  string B;
  cin >> B;
  // cout << B;

  // cout<<adjecent_find(B.begin(), B.end,[&](char a,char b){return a==b}) !=B.end();

  auto b = adjacent_find(B.begin(), B.end());
  cout << distance(B.begin(), b);
*/
    // ZADANIE I
    /*
      if (distance(B.begin(), b) == distance(B.begin(), B.end())) {
          cout << "nie ma";
          // return (0);
      }
      else {
          cout << "jest na pozycji:" << distance(B.begin(), b);
          // return (0);
      }*/
    // ZADANIE II
    /*
    string p = "piesek";
    string c = "kotek";

    auto it = search(B.begin(), B.end(), p.begin(), p.end());
    auto ct = search(B.begin(), B.end(), c.begin(), c.end());
    if (distance(B.begin(), B.end()) != distance(B.begin(), it)) {
        cout << "slowo piesek zaczyna sie na pozycji:" << distance(B.begin(), it) << endl;
        // return 1;
    }
    else if (distance(B.begin(), B.end()) != distance(B.begin(), ct)) {
        cout << "slowo kotek zaczyna sie na pozycji:" << distance(B.begin(), ct) << endl;
        // return 1;
    }
    else {
        cout << "nie ma zadnego ze slow" << endl;
        // return 0;
    }

    // ZADANIE III
    reverse(B.begin(), B.end());
    cout << B << endl;
    */
    // cout << distance(B.begin(), it);
    // ZADANIE IV
    /*
    vector< double > A = {1, 2};
    vector< double > X = {3, -5};
    double           x = inner_product(A.begin(), A.end(), X.begin(), 0);
    cout << "wyszlo:" << x << endl;
*/
    // DO ZADAŃ V-VII
    /*
    int           n = 10;
    vector< int > V = make_random_vector(n, 0, 10);

    for (unsigned i = 0; i < V.size(); i++) {
        cout << V[i] << endl;
    }
    // ZADANIE V

    cout << endl;
    auto wyst = find(V.begin(), V.end(), 7);
    sort(V.begin(), wyst);
*/
    // V.erase(remove(V.begin(), V.end(), '3'));

    // ZADANIE VI
    /*
    V.erase(remove(V.begin(), V.end(), 3), V.end());
    */
    /*
    auto fin = find(V.begin(), V.end(), 7);
    rotate(V.begin(), fin, V.end());
    *//*
    cout << endl;
    for (unsigned i = 0; i < V.size(); i++) {
        cout << V[i] << endl;
    }
    */
    // DO ZADAŃ VIII-IX
    // int              m = 10;
    /*
    vector< double > W = {
        0.2,
        -0.3,
        0.5,
        0.8,
        0.4,
        0.94,
        -0.5,
        -0.4,
        -0.7,
        -0.96,
    };

    vector< double > kW = {
        0.2,
        -0.3,
        0.5,
        0.8,
        0.4,
        0.94,
        -0.5,
        -0.4,
        -0.7,
        -0.96,
    };

    for (unsigned i = 0; i < W.size(); i++) {
        cout << W[i] << endl;
    }
    // ZADANIE VIII

    if (any_of(W.begin(), W.end(), [](double i) { return (i > 0.9); })) {
        cout << "jest większy od 0.9";
    }
    else {
        cout << "cos nie pyklo" << endl;
    }

    transform(W.begin(), W.end(), kW.begin(), [](double i) { return sin(i); });
    for (unsigned i = 0; i < W.size(); i++) {
        cout << kW[i] << endl;
    }
    */
    // ZADANIE X
    int           n = 10;
    vector< int > V = make_random_vector(n, 0, 10);

    for (int i = 0; i < n; i++) {
        cout << V[i] << endl;
    }
    cout << endl;

    partition(V.begin(), V.end(), [](int i) { return i > 6; });
    for (int i = 0; i < n; i++) {
        cout << V[i] << endl;
    }
    cout << endl;
    // auto fin = find(V.begin(), V.end(), 6);
    sort(V.begin(), V.end(), [](int a, int b) {
        if (a > 6) {
            return (a < b);
        }
        else {
            return (a == b);
        };
    });
    for (int i = 0; i < n; i++) {
        cout << V[i] << endl;
    }
}
