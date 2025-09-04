# Overloading in C++

## Name: Maitraiyee Vashistha  
## PRN: 24070123057  
## Division: ENTC-A3  
## Title: Function, Method, Constructor, and Operator Overloading in C++  

---

## Aim:  
*To study and apply different types of overloading in C++*

---

## Introduction

In C++, **overloading** refers to the ability to define multiple functions, constructors, or operators with the same name but different signatures. It is a key feature of **compile-time polymorphism** in object-oriented programming.

Overloading allows the same operation to behave differently depending on the context (e.g., the number or type of parameters). This increases code readability, provides flexibility, and supports abstraction.

The different types of overloading in C++ are:

- **Function Overloading**
- **Method Overloading**
- **Constructor Overloading**
- **Operator Overloading**

---

## Function Overloading

**Function overloading** occurs when two or more functions in the same scope have the same name but different parameter lists (type, number, or order of parameters). The correct function is selected at compile time based on the arguments provided during the function call.

### Characteristics:
- Improves code clarity by using one name for similar actions.
- Return type does **not** play a role in function overloading.
- Enables multiple ways of performing similar operations.

---

## Method Overloading

**Method overloading** is a subset of function overloading and occurs inside a class. Multiple member functions (methods) can have the same name as long as their signatures differ.

### Characteristics:
- Helps create multiple behaviors for a method in a single class.
- Allows customization of functionality based on different parameter sets.
- Promotes organized and modular design within classes.

---

## Constructor Overloading

**Constructor overloading** allows a class to have more than one constructor with different parameter lists. It supports object creation in various ways.

### Types of Constructors in Overloading:

1. **Default Constructor**  
   Initializes data members with default values. Takes no arguments.

2. **Parameterized Constructor**  
   Takes parameters to initialize objects with specific values.

3. **Copy Constructor**  
   Creates a new object as a copy of an existing object.

### Characteristics:
- All constructors share the same name as the class.
- Overloading allows flexibility in object instantiation.

---

## Operator Overloading

**Operator overloading** allows existing C++ operators to be redefined for user-defined data types (like classes). It enables natural and intuitive syntax when working with custom objects.

### Characteristics:
- Only built-in operators can be overloaded; new operators cannot be created.
- Certain operators (like `::`, `.*`, `sizeof`) cannot be overloaded.
- Supports both unary and binary operators.
- Makes custom types behave like primitive types.

---

## Summary Table

| Overloading Type        | Purpose                                                | Defined In            | Key Notes                                               |
|-------------------------|--------------------------------------------------------|------------------------|----------------------------------------------------------|
| Function Overloading     | Multiple functions with same name, different parameters| Global or Class Scope | Based on number or type of parameters                   |
| Method Overloading       | Overloading within a class (member functions)         | Inside Class           | Subset of function overloading                          |
| Constructor Overloading  | Multiple constructors with different initializations  | Inside Class           | Includes default, parameterized, and copy constructors  |
| Operator Overloading     | Redefines operator behavior for class objects         | Inside Class           | Enhances object usability and readability               |

---

## Summary of Programs

### Program 1: Function Overloading

1. **Start**
2. Define a set of functions with the same name but different parameter lists.
3. Each function performs a similar task (e.g., adding numbers) with different data types or counts.
4. Call the functions with different arguments in `main()` to demonstrate overloading.
5. **End**

---

### Program 2: Method Overloading (Within Class)

1. **Start**
2. Create a class with multiple methods sharing the same name.
3. Differentiate the methods by varying parameter types or numbers.
4. Create an object of the class and call each overloaded method.
5. **End**

---

### Program 3: Constructor Overloading

1. **Start**
2. Define a class with:
   - A default constructor
   - A parameterized constructor
   - A copy constructor
3. Demonstrate object creation using all three constructors.
4. Observe how constructors are automatically called upon object instantiation.
5. **End**

---

### Program 4: Operator Overloading - Basic Arithmetic Operator

1. **Start**
2. Define a class with numeric data members.
3. Overload an arithmetic operator (e.g., `+`) to perform addition on object data.
4. Create two objects and use the overloaded operator between them.
5. Display the result.
6. **End**

---

### Program 5: Operator Overloading - Relational Operator

1. **Start**
2. Define a class with data members to compare.
3. Overload a relational operator (e.g., `==`) to compare object data.
4. Use this operator to compare two objects.
5. Display whether they are equal.
6. **End**

---

## Conclusion

Overloading in C++ enhances the language's expressiveness and allows developers to design clean, intuitive, and flexible interfaces. By enabling multiple versions of functions, constructors, and operators, overloading supports polymorphism and reduces the need for complex naming conventions.

Mastering overloading helps write more reusable, maintainable, and efficient code, especially in large-scale or resource-sensitive applications.

---
