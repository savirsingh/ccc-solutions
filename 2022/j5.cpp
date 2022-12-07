// code by savir singh
// 8/15

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  // Read in the size of the yard and the number of trees
  int n, t;
  cin >> n >> t;

  // Read in the locations of the trees
  vector<pair<int, int>> trees;
  for (int i = 0; i < t; i++) {
    int r, c;
    cin >> r >> c;
    trees.push_back({r, c});
  }

  // Sort the trees by their row and column coordinates
  sort(trees.begin(), trees.end());

  // Start with the largest possible square size and work our way down
  int m = min(n, n);
  while (m > 0) {
    // Check if there exists a square of size m that does not contain any trees
    for (int i = 1; i + m - 1 <= n; i++) {
      for (int j = 1; j + m - 1 <= n; j++) {
        // Check if the square (i, j, m) contains any trees
        bool containsTree = false;
        for (const auto& tree : trees) {
          if (tree.first >= i && tree.first <= i + m - 1 && tree.second >= j && tree.second <= j + m - 1) {
            containsTree = true;
            break;
          }
        }

        // If the square does not contain any trees, we have found our answer
        if (!containsTree) {
          cout << m << endl;
          return 0;
        }
      }
    }

    // If we did not find a suitable square of size m, try the next smaller size
    m--;
  }

  // If we reach this point, there is no suitable square
  cout << 0 << endl;

  return 0;
}
