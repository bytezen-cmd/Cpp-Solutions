# Competitive Programming Solutions

A collection of C++ solutions for various competitive programming problems from Codeforces and LeetCode platforms.

## 📋 Overview

This repository contains my solutions to algorithmic problems from two popular competitive programming platforms:
- **Codeforces**: Solutions to problems from Codeforces contests
- **LeetCode**: Solutions to LeetCode problems of varying difficulty

## 🗂️ Project Structure

```
.
├── Codeforces-Solution.cpp    # Codeforces problem solutions
├── Leetcode-Solution.cpp      # LeetCode problem solutions
├── Solution.sln               # Visual Studio solution file
├── Solution.vcxproj           # Visual Studio project file
└── Solution.vcxproj.filters   # Visual Studio project filters
```

## 🔧 Setup & Compilation

### Prerequisites
- Visual Studio 2022 (or compatible version with C++17 support)
- Windows SDK 10.0
- Platform Toolset v143

### Building the Project
1. Clone this repository
2. Open `Solution.sln` in Visual Studio
3. Select your configuration (Debug/Release) and platform (x86/x64)
4. Build the solution (Ctrl+Shift+B)

### Running Solutions
To test a specific solution:
1. Open the corresponding `.cpp` file
2. Uncomment/modify the function call in `main()`
3. Build and run the project (F5 or Ctrl+F5)

## 📝 Codeforces Solutions

### Problems Solved
- **Watermelon (4A)**: Even number partitioning problem
- **Way Too Long Words (71A)**: String abbreviation
- **Team (231A)**: Problem decision counting
- **Bit++ (282A)**: Variable increment/decrement operations
- **Next Round (158A)**: Score qualification counting

## 💡 LeetCode Solutions

### Problems Solved
- `isBoomerang`: Check if three points form a valid boomerang
- `getMaximumGenerated`: Generate array and find maximum value
- `minStartValue`: Find minimum positive start value for step-by-step sum
- `stringMatching`: Find substring matches in array
- `firstPalindrome`: Find first palindrome in word array
- `isPerfectSquare`: Check if number is perfect square
- `mergeAlternately`: Merge two strings alternately
- `isPrefixString`: Check if string is prefix concatenation
- `isPrefixOfWord`: Find word index with matching prefix
- `findMiddleIndex`: Find pivot index in array
- `interpret`: Goal parser interpretation
- `countGoodTriplets`: Count triplets meeting distance criteria
- `canMakeArithmeticProgression`: Check for arithmetic progression
- `arraySign`: Determine sign of product

## 🎯 Usage

Each solution is organized as a function within its respective class/namespace:

**Codeforces:**
```cpp
CodeforcesSolution::watermelon();
CodeforcesSolution::wayTooLongWords();
// ... other functions
```

**LeetCode:**
```cpp
LeetcodeSolution solution;
solution.isBoomerang(points);
solution.mergeAlternately(word1, word2);
// ... other methods
```

## 📚 Learning Resources

- [Codeforces](https://codeforces.com/) - Competitive programming contests
- [LeetCode](https://leetcode.com/) - Coding interview preparation

## 🤝 Contributing

Feel free to:
- Add new solutions
- Optimize existing solutions
- Fix bugs or improve code quality
- Add test cases

## 📄 License

This project is open source and available for educational purposes.

## ✨ Notes

- Solutions prioritize correctness and readability
- Some solutions may not be the most optimized but demonstrate problem-solving approaches
- The project uses standard C++ libraries without external dependencies