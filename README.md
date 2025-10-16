# 🧮 Collection Application

**Collection Application** is a C program that performs **character-based addition** using the logic of a 6-bit encoding system. This application simulates the limited Input/Output (I/O) environment of pre-Unix systems. It takes two single-digit characters (0–9) as input, decodes their ASCII values, and adds them together. If the sum exceeds 9, it displays an error message, since that would surpass the simulated system’s limit.

The program operates based on the ASCII character table: the character `'0'` has the value 48, and `'9'` has the value 57. Therefore, to extract the numeric value, the expression `(character - '0')` is used. The result of the addition is then converted back to a character and displayed to the user. If the user enters a non-numeric character, the program outputs an error message.

This project models the principle of data input through ASCII characters, as it was commonly done in early computer systems. It demonstrates how character-based computation and decoding can be handled in a minimal and instructive way.

To compile the program in a terminal, use:

```
gcc main.c -o collection
```

To run the program:

```
./collection
```

Example usage:

```
Enter the first digit (0-9): 3  
Enter the second digit (0-9): 4  
Sum: 7
```

```
Enter the first digit (0-9): 4  
Enter the second digit (0-9): 8  
Error: The sum exceeds 9 (12)!
```

This project was created to better understand **early computer architectures** and **restricted I/O environments**. Although modern systems use more advanced input/output methods, this simple program clearly illustrates the fundamentals of ASCII-based character decoding and numeric computation.

**Author:** [Taha Topaloğlu]
**Date:** [15.10.2025]
**License:** MIT

---

Would you like me to make it sound even more *formal and technical* (for example, suitable for a university or portfolio submission)? I can slightly adjust the tone and formatting for that purpose.
