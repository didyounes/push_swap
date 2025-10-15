# 🌀 Push_Swap

## 📖 Overview
**Push_swap** is a project from the 42 curriculum.  
The goal is to sort a stack of integers using only a **limited set of stack operations** and the **fewest possible moves**.  

This implementation uses the **Radix Sort algorithm** for efficient performance on large data sets, and a **small_sort** approach for small cases (3–5 numbers).

---

## ⚙️ Rules

- Two stacks are used:
  - `a`: initially filled with input numbers  
  - `b`: starts empty  

- The goal is to sort **stack a** in ascending order using these operations:
  - `sa`, `sb`, `ss`
  - `pa`, `pb`
  - `ra`, `rb`, `rr`
  - `rra`, `rrb`, `rrr`

---

## 🧠 Algorithm Used

### 🧩 Radix Sort
1. **Normalization:**  
   Each number is replaced by its index (rank) in the sorted array.
2. **Bitwise Sorting:**  
   For each bit (from least to most significant):  
   - Push numbers with a `0` in that bit to stack `b`.  
   - Rotate numbers with a `1` in that bit in stack `a`.  
   - Push all elements back from `b` to `a`.  

This ensures an ascending order after all bits are processed.

### ⚡ Small Sort
For 3–5 numbers, optimized hardcoded operations are used for minimal moves.

---

## 🧱 Project Structure

```
📂 push_swap/
├── Makefile
├── push_swap.h
├── push_swap.c
├── init.c
├── error.c
├── get_index.c
├── push.c
├── swap.c
├── rotate.c
├── reverse.c
├── small_sort.c
├── three.c
├── s_tree.c
├── utils.c
├── utils2.c
└── README.md
```

---

## 🛠️ Compilation

```bash
make        # Compile the program
make clean  # Remove object files
make fclean # Remove objects and binary
make re     # Recompile everything
```

---

## 🚀 Usage

```bash
./push_swap <list_of_integers>
```

### Example:
```bash
./push_swap 2 1 3 6 5 8
```

**Output:**
```
sa
pb
pb
pb
sa
pa
pa
pa
```

---

## ⚠️ Error Handling

```bash
$> ./push_swap 0 one 2 3
Error
```

Handled errors include:
- Non-integer arguments  
- Duplicate numbers  
- Integer overflow or underflow  
- Empty input  

---

## 🧪 Testing

Check if your sequence sorts correctly:
```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_linux $ARG
```

Count the number of operations:
```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
```

---

## 📊 Performance

| Input Size | Expected | Result |
|-------------|-----------|--------|
| 100 numbers | < 700 ops | ✅ ~540 |
| 500 numbers | < 5500 ops | ✅ ~4800 |

---

## 🚀 Developer
**Younes El Joulali**  
[GitHub](https://github.com/didyounes) • [LinkedIn](https://www.linkedin.com/in/younes-el-joulali-7332a732a)

---

**Because _swap_push_ doesn’t sound as cool as _push_swap_.**
