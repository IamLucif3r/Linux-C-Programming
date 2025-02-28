# 📌 Pointers & Memory Management in C

## Overview
Understanding pointers and memory management is crucial for system-level programming in C. This section covers pointer basics, pointer arithmetic, dynamic memory allocation, and memory safety practices.

## 🔹 What are Pointers?
A pointer is a variable that stores the memory address of another variable.

### Example:
```c
#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;
    
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr);
    printf("Value at ptr: %d\n", *ptr);
    
    return 0;
}
```

## 🔹 Pointer Arithmetic
Pointers support arithmetic operations like addition and subtraction.

### Example:
```c
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr;
    
    printf("First element: %d\n", *ptr);
    ptr++;
    printf("Second element: %d\n", *ptr);
    ptr++;
    printf("Third element: %d\n", *ptr);
    
    return 0;
}
```

## 🔹 Dynamic Memory Allocation
C provides `malloc`, `calloc`, `realloc`, and `free` for dynamic memory management.

### Example:
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    free(arr);
    return 0;
}
```

## 🔹 Dangling Pointers & Memory Leaks
Failing to `free` allocated memory can cause memory leaks.

### Example (Memory Leak Issue):
```c
#include <stdlib.h>

void memoryLeak() {
    int *ptr = (int *)malloc(10 * sizeof(int));
    ptr[0] = 42;
    // Forgot to free ptr!
}
```

### Example (Fixing Memory Leak):
```c
#include <stdlib.h>

void noMemoryLeak() {
    int *ptr = (int *)malloc(10 * sizeof(int));
    ptr[0] = 42;
    free(ptr);
}
```

## 🔹 Null Pointers & Segmentation Faults
Dereferencing a NULL pointer leads to segmentation faults.

### Example:
```c
#include <stdio.h>

int main() {
    int *ptr = NULL;
    printf("%d\n", *ptr);  // This will cause a segmentation fault!
    return 0;
}
```

### Safe Check:
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    *ptr = 100;
    printf("Value: %d\n", *ptr);
    free(ptr);
    return 0;
}
```

## 🚀 Next Steps
Continue to [Memory management](03_Memory_Management.md) to explore process creation and multi-threading in C!

