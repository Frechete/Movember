#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// PrintBoard --> print the vector
void printBoard(vector<vector<int>> board) {
    // range-based for-loops:
    for (auto const &row : board) {
        for (auto const &col : row) {
            std::cout << col << ' ';
        }
        std::cout.put('\n');
    }

    std::cout.put('\n');
}

int main() {
  vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0}};

  printBoard(board);
  
}
