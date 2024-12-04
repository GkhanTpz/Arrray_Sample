---

### **Sentence Length Calculator**

This C program calculates the length of a user-entered sentence without including the newline character. It demonstrates basic string manipulation, dynamic memory allocation, and array traversal.

---

#### **Code Overview**

1. **Dynamic Memory Allocation**:
   - A character pointer (`sentence`) is dynamically allocated with a maximum size of `50` using `malloc`.

2. **Functions**:
   - **`SentenceReading`**: Reads a sentence from the user character by character until the newline character (`'\n'`) is encountered or the maximum size is reached. The input is stored in a null-terminated string.
   - **`ArrayLenght`**: Traverses the null-terminated string and calculates its length by counting characters until the null character (`'\0'`) is reached.

3. **Execution Flow**:
   - The program prompts the user to input a sentence.
   - The `SentenceReading` function stores the input.
   - The `ArrayLenght` function calculates and returns the length of the sentence.
   - The program outputs the length of the entered sentence.
   - Dynamically allocated memory is released using `free`.

---

#### **Usage**
1. Compile the program:
   ```bash
   gcc -o SentenceCalculator main.c
   ```
2. Run the executable:
   ```bash
   ./SentenceCalculator
   ```

3. Enter a sentence when prompted. The program will display the entered sentence and its length.

---

#### **Sample Output**
```plaintext
Please enter a sentence: Hello, GitHub!
Hello, GitHub!
Length of Array: 14
```

---

This program is a basic example of using pointers, dynamic memory management, and input handling in C.
