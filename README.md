# Competitive Programming Solutions

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Language: C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://en.cppreference.com/w/)
[![Standard: C++17](https://img.shields.io/badge/Standard-C%2B%2B17-green.svg)](https://en.wikipedia.org/wiki/C%2B%2B17)
[![Platform: Windows](https://img.shields.io/badge/Platform-Windows-informational.svg)](https://www.microsoft.com/en-us/windows)

A comprehensive collection of C++ solutions for algorithmic problems from leading competitive programming platforms: **Codeforces**, **LeetCode**, **Codewars**, and **HackerRank**. This repository demonstrates problem-solving techniques, algorithm design, and modern C++ best practices.

Server link to the discord community: 
![Code Den](https://discord.gg/TFD76mv8)
## 📚 Table of Contents

- [Quick Start](#quick-start)
- [Project Structure](#project-structure)
- [Platform Solutions](#platform-solutions)
- [Setup & Compilation](#setup--compilation)
- [Usage Examples](#usage-examples)
- [Code Organization](#code-organization)
- [Key Algorithms](#key-algorithms)
- [Contributing](#contributing)
- [License](#license)

## Quick Start

```bash
# Clone repository
git clone <repository-url>
cd competitive-programming-cpp

# Open in Visual Studio
start Solution.sln

# Build: Ctrl+Shift+B
# Run: F5 (Debug) or Ctrl+F5 (Release)
```

## Project Structure

```
.
├── Codeforces-Solution.cpp     # 10+ Codeforces problems
├── Leetcode-Solution.cpp       # 25+ LeetCode problems
├── Codewars-Solution.cpp       # 7+ Codewars kata
├── HackerRank-Solution.cpp     # 8+ HackerRank problems
├── extra.cpp                   # Additional challenges
├── Solution.sln                # Visual Studio solution
├── Solution.vcxproj            # Project configuration
├── LICENSE.txt                 # MIT License
├── .gitignore                  # Git ignore rules
└── README.md                   # This file
```

## Platform Solutions

### 🔥 Codeforces (10+ Problems)

| Problem | Difficulty | Category | Key Concepts |
|---------|-----------|----------|--------------|
| **Watermelon** | ⭐ Easy | Math | Parity check, conditional logic |
| **Way Too Long Words** | ⭐ Easy | String | String abbreviation |
| **Word** | ⭐ Easy | String | Case conversion, frequency counting |
| **Word Capitalization** | ⭐ Easy | String | Character manipulation |
| **Helpful Maths** | ⭐ Easy | Sorting | Vector sorting, string parsing |
| **Boy or Girl** | ⭐⭐ Medium | Hash Table | Character frequency analysis |
| **Team** | ⭐⭐ Medium | Logic | Voting/majority decisions |
| **Bit++** | ⭐ Easy | Parsing | String matching, operations |
| **Wrong Subtraction** | ⭐ Easy | Simulation | Modular arithmetic |
| **Next Round** | ⭐⭐ Medium | Sorting | Competitive rankings |
| **Tram** | ⭐⭐ Medium | Simulation | Tracking state changes |
| **Pizza Time** | ⭐⭐ Medium | Greedy | Number division strategy |

### 💡 LeetCode (25+ Problems)

| Problem | Difficulty | Category | Key Concepts |
|---------|-----------|----------|--------------|
| **FizzBuzz** | Easy | String | Conditional logic, formatting |
| **First Unique Character** | Easy | Hash Table, String | Character frequency |
| **Power of Two** | Easy | Bit Manipulation | Binary operations |
| **Valid Anagram** | Easy | Hash Table, Sorting | Character counting |
| **Contains Duplicate** | Easy | Hash Table, Set | Duplicate detection |
| **Power of Three** | Easy | Math | Number theory |
| **Happy Number** | Easy | Hash Table, Math | Cycle detection |
| **Hamming Weight** | Easy | Bit Manipulation | Bit counting |
| **Power of Four** | Easy | Bit Manipulation | Logarithmic checks |
| **Reverse String** | Easy | Two Pointers | Array reversal |
| **Valid Boomerang** | Easy | Math, Geometry | Area calculation |
| **Perfect Square** | Easy | Binary Search, Math | Range searching |
| **Merge Alternately** | Easy | String, Two Pointers | String interleaving |
| **Prefix String** | Easy | String | String matching |
| **Prefix of Word** | Easy | String | Word boundary detection |
| **Find Middle Index** | Easy | Array, Prefix Sum | Equilibrium point |
| **Goal Parser** | Easy | String | String interpretation |
| **Count Good Triplets** | Easy | Array, Enumeration | Triple nested loops |
| **Arithmetic Progression** | Easy | Sorting, Array | Sequence validation |
| **Array Sign** | Easy | Array, Math | Product sign determination |
| **Three Consecutive Odds** | Easy | Array | Consecutive element checking |
| **First Palindrome** | Easy | String, Two Pointers | Palindrome detection |
| **String Matching** | Easy | String | Substring finding |
| **Smallest Even Multiple** | Easy | Math | Even number determination |
| **Separate Digits** | Easy | Array, String | Digit extraction |

### 🥋 Codewars (7+ Kata)

| Kata | Kyu | Difficulty | Key Concepts |
|------|-----|-----------|--------------|
| **Count Bits** | - | Easy | Bit manipulation, binary representation |
| **Detect Pangram** | - | Easy | String analysis, character sets |
| **ROT13** | - | Easy | String cipher, modular arithmetic |
| **Narcissistic Number** | - | Medium | Number theory, power calculations |
| **Duplicate Count** | - | Medium | Hash map, character frequency |
| **Longest Consecutive** | - | Medium | String concatenation, optimization |
| **Wave** | - | Easy | String transformation, case conversion |

### 🎯 HackerRank (8+ Problems)

| Problem | Difficulty | Category | Key Concepts |
|---------|-----------|----------|--------------|
| **Solve Me First** | Easy | Basics | Simple addition |
| **Simple Array Sum** | Easy | Array | Summation |
| **Compare Triplets** | Easy | Array | Comparison logic |
| **A Very Big Sum** | Easy | Array | Large number handling |
| **Diagonal Difference** | Easy | Matrix | 2D array traversal |
| **Plus Minus** | Easy | Array | Ratio calculations |
| **Staircase** | Easy | Pattern | Loop patterns |
| **Mini Max Sum** | Easy | Array | Min/max finding |
| **Birthday Cake Candles** | Easy | Array | Frequency counting |
| **Luck Balance** | Medium | Greedy | Optimization strategy |

## Setup & Compilation

### Prerequisites

- **Visual Studio 2022** or compatible version
- **C++17** standard support or higher
- **Windows SDK 10.0**
- **Platform Toolset v143**

### Building the Project

1. **Clone the repository:**
   ```bash
   git clone <repository-url>
   cd <project-directory>
   ```

2. **Open in Visual Studio:**
   ```bash
   start Solution.sln
   ```

3. **Select Build Configuration:**
   - Configuration: `Debug` or `Release`
   - Platform: `x86` or `x64`

4. **Build the Solution:**
   ```
   Keyboard: Ctrl+Shift+B
   Menu: Build → Build Solution
   ```

5. **Run the Program:**
   ```
   Debug: F5 (with breakpoints and debugging)
   Release: Ctrl+F5 (optimized, no debugging)
   ```

### Compilation from Command Line

```bash
# Using Visual Studio Developer Command Prompt
cl /std:c++17 /EHsc Leetcode-Solution.cpp /link /OUT:Leetcode.exe

# Then run
Leetcode.exe
```

## Usage Examples

### Codeforces Solutions

```cpp
#include "Codeforces-Solution.cpp"

int main() {
    // Check if watermelon can be split evenly
    CodeforcesSolution::watermelon();  // Input: 4 → Output: YES
    
    // Abbreviate long words
    CodeforcesSolution::wayTooLongWords();
    
    // Count bits
    CodeforcesSolution::bitPlusPlus();
    
    return 0;
}
```

### LeetCode Solutions

```cpp
#include "Leetcode-Solution.cpp"

int main() {
    LeetcodeSolution solution;
    
    // FizzBuzz problem
    std::vector<std::string> result = solution.fizzBuzz(15);
    // Output: ["1", "2", "Fizz", "4", "Buzz", ...]
    
    // Check if valid anagram
    bool isAnagram = solution.isAnagram("listen", "silent");  // true
    
    // Find middle index
    std::vector<int> nums = {2, 3, -1, 8, 4};
    int midIdx = solution.findMiddleIndex(nums);  // 3
    
    // Merge alternately
    std::string merged = solution.mergeAlternately("abc", "pqr");
    // Output: "apbqcr"
    
    return 0;
}
```

### Codewars Solutions

```cpp
#include "Codewars-Solution.cpp"

int main() {
    using namespace CodewarsSolution;
    
    // Count number of 1s in binary
    unsigned int bits = countBits(1234);  // 6
    
    // Check pangram
    bool isPan = is_pangram("The quick brown fox jumps over the lazy dog");
    // Output: true
    
    // ROT13 cipher
    std::string encoded = rot13("Hello");  // "Uryyb"
    
    // Narcissistic number check
    bool narcissistic = narcissistic(153);  // true (1^3 + 5^3 + 3^3 = 153)
    
    return 0;
}
```

### HackerRank Solutions

```cpp
#include "HackerRank-Solution.cpp"

int main() {
    using namespace HackerRankSolution;
    
    // Compare triplets
    std::vector<int> a = {5, 6, 7};
    std::vector<int> b = {3, 6, 10};
    std::vector<int> scores = compareTriplets(a, b);
    // Output: [1, 1]
    
    // Diagonal difference
    std::vector<std::vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {9, 8, 9}};
    int diff = diagonalDifference(matrix);  // |15 - 17| = 2
    
    // Staircase pattern
    staircase(3);
    // Output:
    //   #
    //  ##
    // ###
    
    return 0;
}
```

## Code Organization

### Namespace Structure

**Codeforces:**
```cpp
namespace CodeforcesSolution {
    void watermelon();
    void wayTooLongWords();
    void word();
    // ... other functions
}
```

**LeetCode:**
```cpp
class LeetcodeSolution {
private:
    std::vector<int> happySequence;
public:
    bool threeConsecutiveOdds(...);
    std::vector<std::string> fizzBuzz(...);
    // ... other methods
};
```

**Codewars:**
```cpp
namespace CodewarsSolution {
    unsigned int countBits(...);
    bool is_pangram(...);
    class LongestConsec { /* ... */ };
    // ... other functions
}
```

**HackerRank:**
```cpp
namespace HackerRankSolution {
    int luckBalance(...);
    std::vector<int> compareTriplets(...);
    // ... other functions
}
```

## Key Algorithms

**String Processing:** Character frequency, case conversion, palindrome checking, substring matching

**Mathematical:** Bit manipulation, prime checking, GCD/LCM, number theory

**Data Structures:** Hash tables, vectors, sets for efficient searching and counting

**Sorting & Searching:** Binary search, merge operations, array sorting

**Geometry:** Triangle validation, area calculation, coordinate geometry

**Greedy Algorithms:** Optimization strategies, decision-making problems

**Dynamic Programming:** State tracking, memoization patterns

## Development Environment

- **IDE:** Visual Studio 2022
- **Language:** C++17
- **Compiler:** MSVC v143
- **Platform:** x64/x86 Windows
- **Dependencies:** C++ Standard Library only

## Testing

Each solution can be tested independently by:

1. Opening the corresponding `.cpp` file
2. Modifying the `main()` function to call desired solution
3. Compiling and running with test inputs
4. Verifying output against expected results

## Contributing

Contributions welcome! Guidelines:

1. **Add new solutions** to unsolved problems
2. **Optimize existing** solutions for better complexity
3. **Improve documentation** and code clarity
4. **Add test cases** and usage examples
5. **Fix bugs** or edge cases

### Before Contributing

- Ensure solution compiles without warnings
- Test with multiple test cases including edge cases
- Follow existing code style and naming conventions
- Add comments for complex logic
- Update README with new additions

## Code Quality

- ✅ **Modern C++:** C++17 features and STL best practices
- ✅ **Readable:** Clear variable names and logical structure
- ✅ **Efficient:** Optimized for time and space complexity
- ✅ **Tested:** Solutions verified with multiple test cases
- ✅ **Documented:** Comments explaining key logic

## Learning Resources

### Competitive Programming

- [Codeforces](https://codeforces.com/) - Contests, problems, community
- [LeetCode](https://leetcode.com/) - Interview prep, problem catalog
- [Codewars](https://www.codewars.com/) - Ranked kata challenges
- [HackerRank](https://www.hackerrank.com/) - Structured learning paths

### C++ References

- [cppreference.com](https://en.cppreference.com/w/cpp) - Complete C++ documentation
- [C++ Standard Library](https://en.cppreference.com/w/cpp/header) - STL reference
- [Competitive Programming Book](https://competitive-programming-3.readthedocs.io/) - Strategies and techniques

## License

This project is licensed under the MIT License - see [LICENSE.txt](LICENSE.txt) for details.

**Copyright © 2025 Himansh Mewada**

## Acknowledgments

- **Codeforces** - For excellent competitive programming problems
- **LeetCode** - For coding interview preparation resources
- **Codewars** - For ranked kata challenges
- **HackerRank** - For structured problem-solving platforms
- **C++ Community** - For standards, best practices, and knowledge sharing

## Disclaimer

These solutions are provided for **educational purposes**:

- ✅ Use as learning references
- ✅ Study and understand the logic
- ✅ Practice implementing independently
- ✅ Verify your own solutions

**Do Not:**
- ❌ Copy during contests or interviews
- ❌ Submit without understanding
- ❌ Use as shortcuts in competitions

---

**Last Updated:** 2025

**Status:** Active - Continuously adding solutions

**Purpose:** Educational resource for competitive programming and interview preparation

**Happy Coding! 🚀**