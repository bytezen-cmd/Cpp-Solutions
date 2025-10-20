# Competitive Programming Solutions

A comprehensive collection of C++ solutions for algorithmic problems from popular competitive programming platforms: Codeforces, LeetCode, and Codewars.

## 📋 Overview

This repository contains solutions to various algorithmic challenges, demonstrating problem-solving approaches using modern C++ (C++17). Each solution emphasizes correctness, readability, and efficient use of standard library features.

## 🗂️ Project Structure

```
.
├── Codeforces-Solution.cpp    # Codeforces problem solutions
├── Leetcode-Solution.cpp      # LeetCode problem solutions
├── Codewars-Solution.cpp      # Codewars kata solutions
├── Solution.sln               # Visual Studio solution file
├── Solution.vcxproj           # Visual Studio project file
├── Solution.vcxproj.filters   # Visual Studio project filters
├── LICENSE.txt                # MIT License
├── .gitignore                 # Git ignore rules
└── .gitattributes             # Git attributes configuration
```

## 🔧 Setup & Compilation

### Prerequisites
- **Visual Studio 2022** (or compatible version)
- **C++17** support or higher
- **Windows SDK 10.0**
- **Platform Toolset v143**

### Building the Project
1. Clone this repository:
   ```bash
   git clone <repository-url>
   cd <repository-name>
   ```
2. Open `Solution.sln` in Visual Studio
3. Select your build configuration:
   - Configuration: `Debug` or `Release`
   - Platform: `x86` or `x64`
4. Build the solution: `Ctrl+Shift+B`

### Running Solutions
1. Open the corresponding `.cpp` file (Codeforces, LeetCode, or Codewars)
2. In `main()`, uncomment/modify the function you want to test
3. Build and run: `F5` (with debugging) or `Ctrl+F5` (without debugging)

## 📝 Codeforces Solutions

### Problems Solved

| Problem | ID | Description |
|---------|-----|-------------|
| **Word** | - | Convert word to uppercase/lowercase based on case frequency |
| **Word Capitalization** | - | Capitalize the first letter of a word |
| **Helpful Maths** | - | Sort numbers in an addition expression |
| **Boy or Girl** | - | Determine gender based on distinct characters |
| **Watermelon** | 4A | Check if weight can be split into two even numbers |
| **Way Too Long Words** | 71A | Abbreviate long words (>10 chars) |
| **Team** | 231A | Count problems solvable by majority vote |
| **Bit++** | 282A | Execute increment/decrement operations |
| **Wrong Subtraction** | - | Apply special subtraction rules |
| **Next Round** | 158A | Count participants advancing to next round |

### Usage Example
```cpp
#include "Codeforces-Solution.cpp"

int main() {
    CodeforcesSolution::watermelon();
    // Or any other function
    return 0;
}
```

## 💡 LeetCode Solutions

### Problems Solved

| Problem | Difficulty | Category |
|---------|-----------|----------|
| **FizzBuzz** | Easy | Math |
| **First Unique Character** | Easy | Hash Table, String |
| **Power of Two** | Easy | Bit Manipulation |
| **Valid Anagram** | Easy | Hash Table, Sorting |
| **Contains Duplicate** | Easy | Array, Hash Table |
| **Power of Three** | Easy | Math |
| **Happy Number** | Easy | Hash Table, Math |
| **Hamming Weight** | Easy | Bit Manipulation |
| **Power of Four** | Easy | Bit Manipulation |
| **Reverse String** | Easy | Two Pointers |
| **Valid Boomerang** | Easy | Math, Geometry |
| **Get Maximum Generated** | Easy | Array, Simulation |
| **Minimum Start Value** | Easy | Array, Prefix Sum |
| **String Matching** | Easy | String |
| **First Palindrome** | Easy | String, Two Pointers |
| **Perfect Square** | Easy | Binary Search, Math |
| **Merge Alternately** | Easy | String, Two Pointers |
| **Prefix String** | Easy | String |
| **Prefix of Word** | Easy | String |
| **Find Middle Index** | Easy | Array, Prefix Sum |
| **Goal Parser** | Easy | String |
| **Count Good Triplets** | Easy | Array, Enumeration |
| **Arithmetic Progression** | Easy | Array, Sorting |
| **Array Sign** | Easy | Array, Math |

### Usage Example
```cpp
#include "Leetcode-Solution.cpp"

int main() {
    LeetcodeSolution solution;
    
    // Example: FizzBuzz
    vector<string> result = solution.fizzBuzz(15);
    
    // Example: Merge Alternately
    string merged = solution.mergeAlternately("abc", "pqr");
    
    return 0;
}
```

## 🥋 Codewars Solutions

### Kata Solved

| Kata | Kyu | Description |
|------|-----|-------------|
| **Count Bits** | - | Count number of 1s in binary representation |
| **Detect Pangram** | - | Check if string contains all alphabet letters |
| **ROT13** | - | Apply ROT13 cipher to string |
| **Narcissistic Number** | - | Check if number equals sum of its digits raised to power of digit count |
| **Duplicate Count** | - | Count characters that appear more than once |
| **Longest Consecutive** | - | Find longest consecutive string concatenation |
| **Wave** | - | Create wave pattern with string |

### Usage Example
```cpp
#include "Codewars-Solution.cpp"

int main() {
    using namespace CodewarsSolution;
    
    // Count bits
    unsigned int bits = countBits(1234);
    
    // Check pangram
    bool isPan = is_pangram("The quick brown fox jumps over the lazy dog");
    
    // ROT13 encoding
    string encoded = rot13("Hello World");
    
    return 0;
}
```

## 🎯 Code Organization

### Codeforces
Solutions are organized in the `CodeforcesSolution` namespace with individual functions for each problem.

### LeetCode
Solutions are organized as methods within the `LeetcodeSolution` class, following LeetCode's class-based approach.

### Codewars
Solutions are organized in the `CodewarsSolution` namespace, with some complex solutions using dedicated classes.

## 🚀 Key Features

- ✅ **Clean Code**: Well-commented and readable implementations
- ✅ **Standard Library**: Efficient use of STL containers and algorithms
- ✅ **No External Dependencies**: Pure C++ standard library
- ✅ **Organized Structure**: Separate files for each platform
- ✅ **MIT Licensed**: Free to use and modify

## 📚 Learning Resources

- [Codeforces](https://codeforces.com/) - Competitive programming contests and practice
- [LeetCode](https://leetcode.com/) - Coding interview preparation
- [Codewars](https://www.codewars.com/) - Programming challenges and kata

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. **Add new solutions** to unsolved problems
2. **Optimize existing solutions** for better time/space complexity
3. **Improve code quality** and documentation
4. **Add test cases** and examples
5. **Fix bugs** or edge cases

### Contribution Guidelines
- Follow existing code style and naming conventions
- Add comments explaining complex logic
- Test solutions before submitting
- Update README with new solutions

## 📄 License

This project is licensed under the MIT License - see the [LICENSE.txt](LICENSE.txt) file for details.

## 👤 Author

**Himansh Mewada**

## ⚠️ Disclaimer

These solutions are provided for educational purposes. When participating in contests or interviews:
- Understand the logic rather than copying solutions
- Practice implementing solutions independently
- Use these as learning references, not shortcuts

## ✨ Acknowledgments

- Thanks to Codeforces, LeetCode, and Codewars for providing excellent platforms for practicing algorithmic problem-solving
- Special thanks to the competitive programming community for inspiration and learning resources

---

**Happy Coding! 🚀**