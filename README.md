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


## 🧠 Challenges & Problem Solving

During the development of this project, I encountered several logic and technical hurdles. Documenting them helped improve the final version of the program.

### 1. The "Zero Sum" Bug (While vs. Do-While)
* **Problem:** Initially, I used a `while (b > 0)` loop to convert the decimal sum back to binary. However, if the user input `0` and `0`, the sum was `0`. Since `0` is not `> 0`, the loop never ran, and the program output nothing.
* **Solution:** I switched to a `do-while` loop. This ensures the logic runs at least once, correctly capturing a `0` bit even if the total sum is zero.

### 2. The "Reverse Logic" Placement
* **Problem:** I originally placed the `reverse()` function inside the `do-while` loop. This caused the vector to flip back and forth every time a new bit was added, resulting in a scrambled binary output.
* **Solution:** I moved the `reverse()` function outside and after the loop so that the entire vector is flipped only once after all bits are collected.

### 3. Git Bash Navigation (Pathing)
* **Problem:** While trying to navigate to the project folder via Git Bash, I encountered "Too many parameters" errors because my folder names contained spaces (e.g., `Logic 2`).
* **Solution:** I learned to wrap file paths in double quotes `"..."` or use the `Tab` key for auto-completion, which handles spaces correctly in a Linux-style terminal.

### 4. Variable Shadowing
* **Problem:** I had declared `int a` at the start of the `main` function but then redefined `int a` inside the loops. This created "local" versions of the variable that didn't talk to the "outer" version.
* **Solution:** I cleaned up the code to ensure variables were declared exactly where they were nee
