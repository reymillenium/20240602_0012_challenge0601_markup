# COP 1334 Assignment - Introduction to C++

## Chapter 6: Challenge 1

## Title: Markup

### Exercise Description:

Write a program that asks the user to enter an item’s wholesale cost and its markup percentage. It should then display the item’s retail price. For example:

• If an item’s wholesale cost is 5.00 and its markup percentage is 100 percent, then the item’s retail price is 10.00.
• IIf an item’s wholesale cost is 5.00 and its markup percentage is 50 percent, then the item’s retail price is 7.50.

The program should have a function named `calculateRetail` that receives the wholesale cost and the markup percentage as arguments and returns the retail price of the item.

_Input Validation: Do not accept negative values for either the wholesale cost of the item or the markup percentage._


## Execution from the Terminal (Alternative way without an IDE):

We must provide to the Compiler the same switches that we usually do in the IDE:

```terminal
g++ -Wall -std=c++17 main.cpp
```

That will create a file named 'a.out' if you are working in MacOS or a .exe file if you are on Windows. That's the default executable file's name when we don't provide a name.

But we can also specify the name of the resulting executable file:

```terminal
g++ -Wall -std=c++17 main.cpp -o your_prefered_executable_file_name
```

And in order to run that a.out file, we must execute on the terminal:

```terminal
 % ./a.out
```

## Result of Execution on the Terminal (MacOS example):

```terminal
reinier@reinier % ./your_prefered_executable_file_name
What is the speed of the vehicle in mph? 120
How many hours has it traveled? 4

Enter the item's whole sale cost: 234.99
Enter the item's markup percentage: 35.5
The item with a whole sale cost of $ 234.99 and a markup percentage of 35.50 %,
has a retail price of $ 318.41

Process finished with exit code 0
reinier@reinier % 
```

### Author

**Reinier Garcia**

* [Github](https://github.com/reymillenium)
* [Twitter](https://twitter.com/ReinierGarciaR)
* [Linkedin](https://www.linkedin.com/in/reiniergarcia/)
* [Website](https://www.reiniergarcia.dev/)
* [Stack Overflow](https://stackoverflow.com/users/9616949/reinier-garcia)

### License

Copyright © 2024, [Reinier Garcia](https://github.com/reymillenium).


