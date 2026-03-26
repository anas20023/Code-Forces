# Code-Forces Solutions Repository

A personal collection of competitive programming solutions, primarily targeting [Codeforces](https://codeforces.com/) problems. The repository contains **1,000+** solution files spanning beginner to advanced difficulty levels.

---

## Repository Structure

```
Code-Forces/
├── *.cpp / *.java        # Root-level solutions (56 C++ files, 1 Java file)
├── CFs/                  # Main archive of ~954 Codeforces solutions
│   ├── *.cpp             # C++ solutions (majority)
│   ├── *.py              # Python solutions
│   ├── *.java            # Java solutions
│   ├── *.js              # JavaScript solutions
│   ├── input.txt         # Sample test input
│   └── output.txt        # Sample test output
├── Others/
│   └── CPS Contests/     # Solutions from CPS-specific contest series
├── .vscode/              # VSCode editor configuration (C/C++ build & debug)
├── .cph/                 # Competitive Programming Helper (CPH) cache
└── .gitignore
```

---

## Languages Used

| Language | Usage |
|----------|-------|
| **C++**  | ~99% — primary language for all competition problems |
| Python   | Occasional alternative solutions |
| Java     | Minimal (one practice file) |
| JavaScript | Minimal |

---

## Solution Categories

Problems are organized by difficulty level (A = easiest, H = hardest) and cover a wide range of algorithmic topics:

### Mathematics & Number Theory
- Prime generation (Sieve of Eratosthenes, N-th prime)
- GCD / LCM comparisons
- Pascal's Triangle
- Digit manipulation
- Modular arithmetic

### Arrays & Sequences
- Subarray sums, subset sums, pair sums
- Difference arrays
- Sliding window technique
- Maximum subarray problems

### Strings
- String transformations and mappings
- Diversity/validity checks
- Concatenation optimization

### Bit Manipulation & XOR
- XOR on subarrays
- Reverse XOR
- XOR game problems

### Greedy & Sorting
- Pair selection under constraints
- Distribution / assignment problems
- Inversions

### Dynamic Programming & Search
- Dungeon / path-finding problems
- Sequence reconstruction
- Multi-dimensional DP

---

## Common Code Pattern

Nearly every solution follows the standard competitive programming template:

```cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // solution logic
}
```

Some solutions also use **GNU Policy-Based Data Structures** for ordered sets:

```cpp
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
```

---

## Build & Run

Solutions are compiled with **g++** (C++17):

```bash
g++ -std=c++17 -O2 -o solution solution.cpp
./solution < input.txt
```

The `.vscode/tasks.json` provides a one-click build task inside Visual Studio Code.

---

## Key Difficulty Breakdown (Root-Level Files)

| Level | Count | Description |
|-------|-------|-------------|
| A     | 18    | Easy — brute force / basic math |
| B     | 15    | Medium-Easy — simple algorithms |
| C     | 6     | Medium — intermediate techniques |
| D     | 1     | Hard — advanced algorithms |
| H     | 1     | Very Hard — complex problem-solving |
