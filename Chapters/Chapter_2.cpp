/* Congratulations on making it to chapter 2! */

/* Summary:
- loops
- if conditions
*/

/*
In this chapter you will learn about loops and if conditions.
Loops are used to repeat a block of code a certain amount of
times, and if conditions are used to check if something is
true or false.

Let's continue off from last chapter by including the libraries and defining a
main function.
*/

#include <iostream>
#include <string>

int main() {
	/*
	Loops
	=====
	Loops are used to repeat a block of code a certain amount of times. There are
	two types of loops: for loops and while loops. For loops are used when you
	know how many times you want to repeat the code, while while loops are used
	when you don't know how many times you want to repeat the code.

	For loops
	=========
	For loops are used when you know how many times you want to repeat the code.
	To declare a for loop, you need to declare a variable, then specify a
	condition, then specify what to do after each iteration. An example of a valid
	for loop is:
	*/

	for (int i = 0; i < 10; i++) {
		std::cout << i << std::endl;
	}

	/*
	Try to guess what this does before running it.

	If you guessed that it prints the numbers 0 to 9, you are correct! The first
	thing that happens is that the variable i is declared and set to 0. Then, the
	condition is checked. If the condition is true, the code inside the loop is
	executed. In this case, the code inside the loop is std::cout << i <<
	std::endl; which prints the value of i to the console, then ends the line.
	Then, the code after the loop is executed, which is i++. This means that i is
	set to i + 1. Then, the condition is checked again. If it is true, the code
	inside the loop is executed again, and so on. Once the condition is false, the
	loop is exited.

	Now, try to print the numbers 10 to 0 using a for loop.
	*/

	// replace with for loop code

	/*
	You can also use the for loop to iterate over an collection of items, e.g. an
	array.

	*/

	int list[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (int i : list) {
		std::cout << i << std::endl;
	}

	/*
	Using complex collections, e.g, STL containers, it is useful to deduce the
	type of items of the collection.
	Replace the int type with auto in the for loop for a test. There after
	create a an array of doubles and try the modified for loop again.
	*/

	/*
	While loops
	===========
	While loops are used when you don't know how many times you want to repeat the
	code. To declare a while loop, you need to specify a condition. An example of
	a valid while loop is:
	*/

	int i = 0;
	while (i != 5) {
		std::cout << i << std::endl;
		i = rand() % 10;
	}

	/*
	Try to guess what this does before running it.

	If you guessed that it prints a random number between 0 and 9 until it prints
	5, you are correct! The first thing that happens is that the variable i is
	declared and set to 0. Then, the condition is checked. If the condition is
	true, the code inside the loop is executed. In this case, the code inside the
	prints the value of i to the console, then ends the line. Then, it sets i to
	a random number between 0 and 9. Then, the condition is checked again. If it
	is true, the code inside the loop is executed again, and so on. Once the
	condition is false, the loop is exited.

	Be careful when using while loops, as if the condition is always true, the
	loop will never exit. This is called an infinite loop, and it will crash your
	program. To prevent this, make sure that the condition will eventually become
	false.
	*/

	/*
	If conditions
	=============
	If conditions are used to check if something is true or false. If the
	condition is true, the code inside the if statement is executed. If the
	condition is false, the else if statements are checked. If none of the else if
	statements are true, the else statement is executed. An example of a valid if
	condition is:
	*/

	int x = rand() % 10;
	if (x < 5) {
		std::cout << "x is less than 5" << std::endl;
	} else if (x == 5) {
		std::cout << "x is equal to 5" << std::endl;
	} else {
		std::cout << "x is greater than 5" << std::endl;
	}

	/*
	Remember that you don't always have to use else if and else. You can use
	just if. An example of this is:
	*/

	if (x == 7) {
		std::cout << "You are lucky!" << std::endl;
	}

	/*
	You can also use multiple if statements. An example of this is:
	*/

	if (x == 7) {
		std::cout << "You are lucky!" << std::endl;
	}
	if (x == 8) {
		std::cout << "You are lucky!" << std::endl;
	}
	if (x == 9) {
		std::cout << "You are lucky!" << std::endl;
	}

	/*
	However, in this case it would be better to use an else if statement. This
	is because x will be checked against all three conditions, even if it is
	already true. An example of this is if x is 7. It will check if x is equal to
	7, then if x is equal to 8, then if x is equal to 9. This is inefficient, and
	you should avoid doing this by using else if statements.

	Now, try to print the numbers 0 to 9, but only print the even numbers.
	*/

	/*
	If you did it successfully, congrats! You have finished the lesson
	for chapter 2, and now you can move onto the tasks.

	Task 1: define a function called hi() to print "Hello, World!" every
	time it is called, then return 0. Then, call it 5 times, but this time,
	use a loop.

	Task 2: declare a variable called x and set it to 0. Then, use a loop
	to print the numbers 0 to 9, but only print the odd numbers.

	Task 3: test out the limits of loops. How many iterations can you get to
	before your program freezes? This should be a guideline for you to
	keep in mind while making other projects - if the number you want to
	loop through gets too large, consider making optimizations.
	*/

	return 0;
}