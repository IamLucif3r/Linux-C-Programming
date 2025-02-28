# Linux C Programming for System Development & Exploitation

## 📌 Overview
This repository is designed for developers, security researchers, and Linux enthusiasts who want to learn **C programming for system development and exploitation**. It provides a structured learning path from **basic C programming** to **low-level system programming, debugging, and binary exploitation**.

## 📂 Repository Structure
```
Linux-C-Programming/
│── README.md                # Overview of the repo
│── CONTRIBUTING.md          # Guide for contributing
│── docs/                    # Documentation and learning guides
│   ├── 00_Introduction.md    
│   ├── 01_C_Basics.md      
│   ├── 02_Pointers.md       
│   ├── 03_Memory_Management.md  
│   ├── 04_System_Calls.md   
│   ├── 05_Process_Control.md
│   ├── 06_Threading.md     
│   ├── 07_Debugging_GDB.md  
│   ├── 08_Process_Injection.md  
│   ├── 09_Buffer_Overflow.md  
│   ├── 10_Exploitation_Techniques.md  
│   ├── 11_Writing_Shellcodes.md  
│   ├── 12_Kernel_Programming.md  
│── exercises/               # Hands-on exercises and solutions
│── projects/                # Real-world projects
│── challenges/              # Mini CTF-style challenges for practice
│── tools/                   # Useful scripts
│── references/              # Books, PDFs, cheat sheets
└── LICENSE                  # Open-source license (MIT/GPL)
```

## 🎯 Learning Roadmap
### 🟢 Stage 1: C Basics & Memory Management (Beginner)
- Learn C syntax, pointers, and memory allocation
- Hands-on exercises for `malloc()`, `free()`, `fopen()`
- 📂 `docs/01_C_Basics.md`, `docs/02_Pointers.md`
- 🔥 **Project:** Simple memory scanner

### 🟠 Stage 2: System Programming & Debugging (Intermediate)
- System calls (`fork()`, `exec()`, `wait()`, `kill()`)
- Debugging with GDB
- 📂 `docs/04_System_Calls.md`, `docs/07_Debugging_GDB.md`
- 🔥 **Project:** Simple shell, keylogger

### 🔴 Stage 3: Security & Exploitation (Advanced)
- Process injection, buffer overflows, format string exploits
- Writing shellcode, Linux Kernel Modules (LKM)
- 📂 `docs/08_Process_Injection.md`, `docs/10_Exploitation_Techniques.md`
- 🔥 **Project:** Process injector, rootkit

## 🛠️ Getting Started
### 🔹 Prerequisites
- Basic knowledge of Linux and C programming
- Install essential tools: `gcc`, `gdb`, `strace`, `ltrace`
- Clone this repo:
  ```bash
  git clone https://github.com/yourusername/Linux-C-Programming.git
  cd Linux-C-Programming
  ```

## 🤝 Contributions
We welcome contributions! Check `CONTRIBUTING.md` for guidelines.

## 📜 License
This project is licensed under [MIT License](LICENSE).

