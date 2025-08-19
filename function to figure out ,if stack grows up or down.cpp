#include <stdio.h>

void check_stack_direction(int *main_var_addr) {
    int func_var;
    if (&func_var < main_var_addr) {
        printf("Stack grows downward.\n");
    } else {
        printf("Stack grows upward.\n");
    }
}

int main() {
    int main_var;
    check_stack_direction(&main_var);
    return 0;
}
/*That's a **very smart question**, and you're not alone — **many beginners get confused** here when using pointers for the first time. Let's break it down **step by step** so it becomes super clear:

---

## ?? What confused you:

> "I didn’t use a pointer when defining the function, but I passed an address. How did that even work?"

### ?? Short answer:

It **didn't work correctly** — your code compiled (maybe with a warning), but the behavior was **wrong or undefined**, because you passed a **pointer (address)** to a function that expected an **int (value)**.

Let’s now explain **why that matters**.

---

## ?? 1. What is `&main_var`?

```c
int main_var;
check_stack_direction(&main_var);  // ?? This is a pointer
```

* `&main_var` means "address of main\_var".
* That is a **pointer** — it stores the **location** in memory where `main_var` is.
* Its type is: `int *` (read as “pointer to int”).

---

## ?? 2. What was the function expecting?

Your original function:

```c
void check_stack_direction(int main_var_addr)  // ? this expects an int
```

* This expects a **normal integer**, like `5`, `10`, `255`, etc.
* But you’re passing a **memory address** (pointer), not a number.
* So you're giving the wrong type — like handing a **USB cable to a headphone jack**.

---

## ?? What can go wrong?

Even if it compiles, you're doing something unsafe:

```c
int func_var;
if (&func_var < main_var_addr)  // comparing pointer with int ?
```

* `&func_var` is an `int *`
* `main_var_addr` is just an `int`
* Comparing them is **nonsense**, and the program may give wrong results or crash.

---

## ? The correct way (with pointer):

```c
void check_stack_direction(int *main_var_addr) {
    int func_var;
    if (&func_var < main_var_addr) {
        printf("Stack grows downward.\n");
    } else {
        printf("Stack grows upward.\n");
    }
}
```

Now:

* `main_var_addr` is an `int *` (a pointer).
* You pass `&main_var`, which is also an `int *`.
* So everything matches perfectly ??

---

## ?? Visual Comparison:

| Expression       | What it means         | Type    |
| ---------------- | --------------------- | ------- |
| `main_var`       | Value of variable     | `int`   |
| `&main_var`      | Address of variable   | `int *` |
| `*main_var_addr` | Value at that address | `int`   |

---

## ?? Summary for Beginners:

| Mistake                                | Fix                                          |
| -------------------------------------- | -------------------------------------------- |
| Defined function as `int`, not pointer | Define it as `int *`                         |
| Passed `&main_var` (a pointer)         | That’s okay, but the function must expect it |
| Compared pointer with int              | You must compare pointer with pointer        |

---

Would you like a **diagram of memory** showing how variables and addresses work? It helps a lot when learning pointers!
*/

