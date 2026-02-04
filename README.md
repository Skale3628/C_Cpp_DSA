# 📚 C/C++ Data Structures & Algorithms Repository

## 🎯 **Purpose**
A comprehensive collection of **Data Structures and Algorithms** implemented in **C** and **C++** for learning, practice, and reference. This repository focuses on **clean code implementations**, **performance analysis**, and **practical applications**.

---
👨‍💻 Author: Shubham Sandip Kale 
📫 Contact: linkedin.com/in/shubham-sandip-kale-748737205
---

## 📁 **Repository Contents**

### **Data Structures** 🏗️
- **Arrays & Vectors** - Static and dynamic implementations
- **Linked Lists** - Singly, Doubly, Circular with all operations
- **Stacks & Queues** - Array/Linked implementations, circular buffers
- **Trees** - Binary Trees, BST, AVL, Heaps, Tries
- **Graphs** - Adjacency list/matrix, traversal algorithms
- **Hash Tables** - Chaining, open addressing implementations
- **Advanced Structures** - Segment Trees, Fenwick Trees, Disjoint Set Union

### **Algorithms** ⚡
- **Sorting Algorithms** - Quick Sort, Merge Sort, Heap Sort, and variations
- **Searching Algorithms** - Binary Search, DFS, BFS, and optimizations
- **Graph Algorithms** - Dijkstra, Prim, Kruskal, Topological Sort
- **Dynamic Programming** - Classic problems and pattern recognition
- **String Algorithms** - KMP, Rabin-Karp, Z-Algorithm

### **Problem Solving** 🎯
- **Pattern-based Solutions** - Sliding window, two pointers, fast & slow
- **Common Problems** - From arrays to graph challenges
- **Optimization Techniques** - Time and space trade-offs

---

## 🛠️ **Development Setup**

### **Prerequisites**
```bash
# C Compiler
sudo apt-get install gcc  # Linux
brew install gcc          # Mac

# C++ Compiler
sudo apt-get install g++  # Linux
brew install g++          # Mac

# Build Tools
sudo apt-get install make cmake  # Linux
brew install make cmake          # Mac
```

### **Compilation Examples**
```bash
# C Programs
gcc program.c -o program -Wall -Wextra -std=c11

# C++ Programs
g++ program.cpp -o program -Wall -Wextra -std=c++17

# With Debug Symbols
g++ -g program.cpp -o debug_program

# With Optimization
g++ -O2 program.cpp -o optimized_program
```

### **Running Tests**
```bash
# Single file test
g++ test_linkedlist.cpp -o test && ./test

# Multiple files
g++ main.cpp linkedlist.cpp -o program && ./program

# Memory leak check
valgrind --leak-check=full ./program
```

---

## 📊 **Implementation Standards**

### **Code Structure** 📝
```c
/**
 * @brief Brief description of function
 * @param param1 Description of first parameter
 * @param param2 Description of second parameter
 * @return Description of return value
 * @time O(complexity) Time complexity
 * @space O(complexity) Space complexity
 */
int functionName(type param1, type param2) {
    // Implementation
    return result;
}
```

### **File Organization** 📁
```
linkedlist/
├── linkedlist.h     # Header file with declarations
├── linkedlist.c     # C implementation
├── linkedlist.cpp   # C++ implementation
├── test_linkedlist.c    # Test cases
└── README.md        # Documentation
```

### **Best Practices** ✅
- Meaningful variable and function names
- Consistent indentation and spacing
- Comprehensive error handling
- Memory leak prevention
- Edge case consideration
- Proper documentation

---

## 🚀 **Learning Pathways**

### **Week 1-2: Foundations** 🏗️
```bash
Topics: Arrays, Strings, Pointers, Basic I/O
Practice: Array manipulation, string operations
Projects: Student record system, text analyzer
```

### **Week 3-4: Linear Structures** 📈
```bash
Topics: Linked Lists, Stacks, Queues
Practice: Implementation from scratch
Projects: Browser history, expression evaluator
```

### **Week 5-6: Trees & Recursion** 🌳
```bash
Topics: Binary Trees, BST, Tree traversals
Practice: Recursive algorithms
Projects: File system navigator, dictionary
```

### **Week 7-8: Graphs & Algorithms** 🕸️
```bash
Topics: Graph representations, BFS, DFS
Practice: Pathfinding algorithms
Projects: Social network analyzer, maze solver
```

### **Week 9-10: Advanced Topics** 🚀
```bash
Topics: Dynamic Programming, Advanced Trees
Practice: Optimization problems
Projects: Resource scheduler, cache simulator
```

---

## 🔧 **Useful Commands & Scripts**

### **Build Script** (`build.sh`)
```bash
#!/bin/bash
echo "Compiling $1..."
g++ -std=c++17 -Wall -Wextra -O2 "$1" -o "${1%.*}"
echo "Done! Run with: ./${1%.*}"
```

### **Test Runner** (`run_tests.sh`)
```bash
#!/bin/bash
for file in test_*.cpp; do
    echo "Testing $file..."
    g++ -std=c++17 "$file" -o test_prog
    ./test_prog
    rm test_prog
done
```

### **Memory Check** (`check_memory.sh`)
```bash
#!/bin/bash
g++ -g "$1" -o mem_check
valgrind --leak-check=full ./mem_check
rm mem_check
```

---

## 📖 **Study Resources**

### **Recommended Books**
- "Introduction to Algorithms" by Cormen et al.
- "Data Structures and Algorithms in C++" by Goodrich
- "The C Programming Language" by Kernighan & Ritchie
- "Competitive Programming" by Halim & Halim

### **Online Platforms**
- [LeetCode](https://leetcode.com) - Coding practice
- [GeeksforGeeks](https://geeksforgeeks.org) - Tutorials
- [CP-Algorithms](https://cp-algorithms.com) - Advanced topics
- [VisuAlgo](https://visualgo.net) - Visualizations

### **Practice Websites**
- HackerRank - Beginner to intermediate
- Codeforces - Competitive programming
- AtCoder - Japanese contests
- Project Euler - Mathematical problems

---

## 🎯 **Project Ideas Using DSA**

### **Beginner Projects**
1. **Contact Manager** - Using arrays/linked lists
2. **Calculator** - Using stacks for expression evaluation
3. **File Organizer** - Using trees for directory structure
4. **Task Scheduler** - Using priority queues

### **Intermediate Projects**
1. **Graph Route Planner** - Using Dijkstra's algorithm
2. **Cache Simulator** - Using hash tables and LRU
3. **Compression Tool** - Using Huffman coding
4. **Database Index** - Using B-trees

### **Advanced Projects**
1. **Network Router** - Using graph algorithms
2. **Game AI** - Using search algorithms
3. **Compiler Components** - Using parse trees
4. **Distributed System** - Using consistent hashing

---


---

## 📈 **Progress Tracking**

### **Checklist Template**
```markdown
## Learning Progress
- [ ] Arrays & Strings
- [ ] Linked Lists
- [ ] Stacks & Queues
- [ ] Trees
- [ ] Graphs
- [ ] Sorting Algorithms
- [ ] Searching Algorithms
- [ ] Dynamic Programming
- [ ] Advanced Topics
```

### **Achievement Badges** 🏆
- **🔰 Novice**: Completed basic data structures
- **🚀 Intermediate**: Implemented all core algorithms
- **🏆 Advanced**: Solved 50+ problems
- **💫 Expert**: Contributed advanced implementations

---

## 📝 **License & Usage**

This repository is open for learning purposes. You are free to:
- Use the code for learning
- Modify for personal projects
- Share with attribution
- Practice and improve skills

**Happy Coding!** 💻✨

---

*"Master data structures and algorithms to write better, faster, and more efficient code."*# 
