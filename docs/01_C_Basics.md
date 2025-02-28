# C Basics for Hackers

## 📌 Overview
This section covers the fundamental concepts of C programming, providing the foundation for system-level development on Linux. We will also explore how C can be leveraged for low-level system interactions, binary analysis, and security research.

## 🛠️ Prerequisites
Before starting, ensure you have:
- **A Linux environment** (Ubuntu, Fedora, Arch, or WSL for Windows users)
- **GCC installed** (`sudo apt install gcc`)
- A text editor (`vim`, `nano`, or `VS Code`)
- Basic understanding of how Linux handles processes, memory, and system calls.

## 🔹 Hello, World!
The simplest C program:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

### 🔹 Compilation & Execution
To compile and run a C program:
```bash
gcc hello.c -o hello
./hello
```

### 🔹 Understanding GCC Compilation
GCC (GNU Compiler Collection) is a powerful tool for compiling C programs into machine-executable binaries. It supports various options to control the compilation process:

#### **1. Generating Assembly Code**
To see the intermediate assembly code generated from the C source file:
```bash
gcc -S hello.c -o hello.s
```
This produces `hello.s`, which contains human-readable assembly code.

#### **2. Compiling to Object Files**
GCC compiles the source code into an object file (`.o`), which contains machine code but is not yet executable:
```bash
gcc -c hello.c -o hello.o
```
This step is useful when working with multiple source files and linking them later.

#### **3. Linking Object Files**
If you have multiple object files, you can link them into a single executable:
```bash
gcc file1.o file2.o -o program
```

#### **4. Producing Debuggable Code**
To compile a program with debugging symbols for use with GDB (GNU Debugger):
```bash
gcc -g hello.c -o hello_debug
```
This allows step-by-step debugging and inspecting variables during execution.

#### **5. Creating Optimized Binaries**
Optimization levels can be set for better performance:
```bash
gcc -O2 hello.c -o hello_optimized
```
Optimization levels:
- `-O0` (default) – No optimization.
- `-O1` – Basic optimizations.
- `-O2` – More aggressive optimizations.
- `-O3` – High-level optimizations (may increase binary size).

#### Attention Mac Users: 
As I am using MacBook for writing C programs, I realised the output file generated was unable to execute giving `cannot execute binary file: Exec format error`. This issue was resolved when I added `-O2` flag, to optimise the binary during compile time with more aggressive optimizations. (You may not face this issue, but in case you do, you know the solution ✌️ )

#### **6. Producing Position-Independent Executables (PIE)**
PIE is useful for security-hardening techniques such as Address Space Layout Randomization (ASLR):
```bash
gcc -fPIE -pie hello.c -o hello_pie
```

#### **7. Stripping Symbols from Executables**
To reduce binary size and make reverse engineering harder:
```bash
gcc hello.c -o hello
strip hello
```

#### **8. Generating Static and Shared Libraries**
- **Static Library:**
  ```bash
  gcc -c file.c -o file.o
  ar rcs libfile.a file.o
  gcc main.c -L. -lfile -o program
  ```
- **Shared Library:**
  ```bash
  gcc -shared -fPIC file.c -o libfile.so
  gcc main.c -L. -lfile -o program
  export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
  ```

## 🔹 Data Types & Variables
C provides several data types:

| Type      | Size     | Description              |
|-----------|---------|--------------------------|
| `int`     | 4 bytes | Integer numbers          |
| `float`   | 4 bytes | Floating-point numbers   |
| `double`  | 8 bytes | Double-precision floats  |
| `char`    | 1 byte  | Single character         |

Example:
```c
int age = 25;
float pi = 3.14;
char initial = 'A';
```

## 🔹 Control Flow
### **If-Else Statement**
```c
if (age >= 18) {
    printf("You are an adult.\n");
} else {
    printf("You are a minor.\n");
}
```

### **Loops**
#### **For Loop**
```c
for (int i = 0; i < 5; i++) {
    printf("Iteration: %d\n", i);
}
```

#### **While Loop**
```c
int count = 0;
while (count < 5) {
    printf("Count: %d\n", count);
    count++;
}
```

## 🔹 Functions in C
A simple function example:
```c
#include <stdio.h>

void greet() {
    printf("Hello from function!\n");
}

int main() {
    greet();
    return 0;
}
```

## 🚀 Next Steps
Continue to [Pointers & Memory Management](02_Pointers_Memory.md) to explore memory handling in C!

