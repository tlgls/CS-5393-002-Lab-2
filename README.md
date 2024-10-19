# CS-5393-002-Lab-2

## Stacks
### Objectives:
The stack portion of the code (lab2_stacks.cpp file)’s purpose is to ensure that there are balanced parentheses, brackets, and braces in an expression. We have two examples of the expressions:

s= [(x+y)/(x-y)] * [t[5]+u/(v*(w+y))];
s= [(x+y)/(x-y)] * [t[5]+u/(v*(w+y))  (this one will give us the output of “Expression 2 is not balanced.”)

We implemented a function that checks for both sides of the expression to ensure that it is a balanced expression. To ensure that it is balanced, we return the stack at the end of the function, which the stack should be empty if it is.

## Queues
### Objectives:
The queue portion of the lab (lab2_queues.cpp file)’s purpose is to implement a simple queue data structure and demonstrate the operations, such as enqueue, dequeue, front, isEmpty, and size. We demonstrated this by having a vector with a traffic type (such as: signaling, voice, video, data, and other) and a priority queue (with respective numbers). We dequeue 2 elements based on the priority then show the current size of the queue.


