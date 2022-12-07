// code by savir singh

#include <iostream>

using namespace std;

const int MOD = 1e9 + 7;
const int N = 2;

struct Matrix {
  unsigned long long mat[N][N];
};

Matrix operator*(Matrix a, Matrix b) {
  Matrix c;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      c.mat[i][j] = 0;
      for (int k = 0; k < N; k++) {
        c.mat[i][j] = (c.mat[i][j] + (unsigned long long)a.mat[i][k] * b.mat[k][j]) % MOD;
      }
    }
  }
  return c;
}

Matrix matPow(Matrix a, unsigned long long b) {
  Matrix res;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      res.mat[i][j] = (i == j);
    }
  }

  while (b) {
    if (b & 1) {
      res = res * a;
    }
    a = a * a;
    b >>= 1;
  }

  return res;
}

unsigned long long fib(unsigned long long n) {
  Matrix f;
  f.mat[0][0] = 0;
  f.mat[0][1] = f.mat[1][0] = f.mat[1][1] = 1;

  f = matPow(f, n);

  return f.mat[0][1];
}

// fast i/o
void read(unsigned long long &number)
{
    bool negative = false;
    register int c;

    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;

        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  unsigned long long n;
  read(n);

  cout << fib(n) << endl;
  return 0;
}
