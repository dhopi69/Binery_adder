# Binary String Adder

A lightweight C++ console application that takes two binary strings, converts them to integers, adds them, and outputs the result in binary format.

## 🚀 Features
* **Binary to Decimal:** Converts user-input strings using ASCII math and bitwise shifting.
* **Decimal to Binary:** Uses a `do-while` loop and `std::vector` to reconstruct the binary sum.
* **Efficient Logic:** Utilizes bit-shifting (`1 << e`) instead of standard math libraries for power calculations.

## 🛠️ Concepts Used
* **Standard Template Library (STL):** `std::vector`, `std::string`, `std::algorithm`.
* **Bitwise Operations:** Used left-shift operator for powers of 2.
* **Memory Management:** Dynamic array handling with `push_back` and `reverse`.

## 💻 How to Run
1. Clone the repo: `git clone https://github.com/YourUsername/YourRepoName.git`
2. Compile: `g++ -o BinaryAdder "Logic 2.cpp"`
3. Run: `./BinaryAdder`
