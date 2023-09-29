
#include <iostream>
#include <string>

void func(int *ptr){std::cout<<__PRETTY_FUNCTION__ <<std::endl;}
void func(int ptr){std::cout<<__PRETTY_FUNCTION__ <<std::endl;}

int main()
{
func(nullptr);
//func(NULL);


    return 0;
}


/*
Here's the difference between calling `func(nullptr)` and `func(NULL)` :

1. `func(nullptr)`:
   - `nullptr` is a keyword introduced in C++11 that represents a null pointer with a type of `nullptr_t`.
   - When you call `func(nullptr)`, you are passing a null pointer of type `nullptr_t` to the `func` function.
   - The `func(int *ptr)` overload, which takes a pointer to an integer, is selected for this call because the type of `nullptr` matches the pointer type.

2. `func(NULL)`:
   - `NULL` is a macro defined in older versions of C++ (prior to C++11) and C. In C++, it is typically defined as `0`.
   - When you call `func(NULL)`, you are passing the integer `0` to the `func` function.
   - The `func(int ptr)` overload, which takes an integer, is selected for this call because you are passing an integer literal (`0`).

Now, let's address why you should prefer `func(nullptr)` over `func(NULL)`:

1. Type Safety:
   - `nullptr` has its own distinct type (`nullptr_t`), which makes it type-safe. It can only be implicitly converted to pointer types,
       preventing some common programming errors.
   - `NULL` is an integer literal (`0`), which can lead to type-related issues and potential ambiguity in function overloads.

2. Modern C++:
   - `nullptr` is part of modern C++ (C++11 and later), and it's the recommended way to represent null pointers in C++.
   - `NULL` is an older construct primarily used in C and older versions of C++. While it works in C++, it's less expressive
        and lacks the type safety of `nullptr`.

3. Code Clarity:
   - Using `nullptr` makes your code more explicit and conveys the intent that you are dealing with pointers.
   - `func(nullptr)` clearly indicates that you are passing a null pointer to the function, making the code more self-documenting.

In modern C++, it's recommended to use `nullptr` for representing null pointers because of its type safety and improved code readability. 
Avoid using `NULL`,specially in new codebases, unless you are working with legacy code that relies on it.


*/