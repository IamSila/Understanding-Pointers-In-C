# Pointers in C ...  intresting points and findings.
- A null pointer and an uninitialized pointer are different. An uninitial‐
ized pointer can contain any value, whereas a pointer containing NULL
does not reference any location in memory
- Interestingly, we can assign a zero to a pointer, but we cannot assign any other integer value.
- A null pointer should never be dereferenced because it does not contain a valid address. When executed it will result in the program terminating.
- Null should not be used in contexts other than pointers.
- A pointer to void is a general-purpose pointer used to hold references to any data type.
- A pointer to void is a general-purpose pointer used to hold references to any data type.
- Any pointer can be assigned to a pointer to void.
- The sizeof operator can be used with a pointer to void. However, we cannot use the operator with void as shown below:
	size_t size = sizeof(void*); // valid
	size_t size = sizeof(void); // not valid
- If a pointer is declared as global or static, it is initialized to NULL when the program starts.
- On most modern platforms, the size of a pointer to data is normally the same regardless of the pointer type. However, the size of a pointer to a function may be different from the size of a pointer to data.
- The type size_t represents the maximum size any object can be in C
- Be careful when printing values defined as size_t. These are unsigned values, and if
you choose the wrong format specifier, you’ll get unreliable results. The recommended format specifier is %zu. However, this is not always available. As an alternative, consider using %u or %lu.
- The types intptr_t and uintptr_t are used for storing pointer addresses.
- When an array name is used by itself, it returns the address of an array,
which is also the address of the first element of the array:
- Accessing memory past the end of an array is a dangerous thing to do and should be avoided.
- The type ptrdiff_t is a portable way to express the difference between two pointers.
