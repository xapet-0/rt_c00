# Why Do We Need Functions

## 📋 Table of Contents

- [What is a Function?](#what-is-a-function)
- [Example](#example)
- [Why Do We Need Functions?](#why-do-we-need-functions)
    - [Functions Improve Modularity and Code Reusability](#functions-improve-modularity-and-code-reusability)
    - [Improving Modularity](#improving-modularity)
    - [Error Handling and Debugging](#error-handling-and-debugging)
    - [Teamwork](#teamwork)
    - [Code Reusability](#code-reusability)
    - [Using Header Files](#using-header-files)
- [Conclusion](#conclusion)

---

## What is a Function?

So basically we can define a function as a group of statements that together perform a specific task.

---

## Example

See an example:

We have a function named \`check\` which checks whether the given number is zero, positive, or negative, so it has a task to do.

---

## Why Do We Need Functions?

### Functions Improve Modularity and Code Reusability

---

### Improving Modularity

What do we mean by improving modularity?

- Suppose we have a very large programme, then it is very difficult to maintain it.
- But if we divide it into small separate modules, then it is very easy to maintain them.

---

### Error Handling and Debugging

Suppose some error is occurring in our programme.

- Then we can easily debug the programme.

If a particular module is not working:

- We can test and debug that specific module rather than the entire programme.
- If module one is not working as expected, we can simply correct it.

---

### Teamwork

- We can have many programmers developing different modules simultaneously.

---

### Code Reusability

Suppose we need to get two numbers from the user and check whether the given number is positive or negative:

- We can develop the code like this.
- But here we are repeating the same block of code again.
- This is not a good programming practice.

**Solution:**

- We can put the block of code in a function and we can call that function whenever we want, like this here:
- The main logic is in the function named \`check\`.
- We are reusing the same logic without writing the same piece of code again.

---

### Using Header Files

- We can also place the same function in a common header file.
- Here we are including the function \`check\` in \`util.h\`.
- Then we can reuse it many times by including the valid path of that common header file, like this.

---

## Conclusion

So that is how it is supporting code reusability.

So that's all and thank you for watching this video.

---

> 💡 **Key Takeaway:** Functions are essential for writing maintainable, reusable, and organized code!
