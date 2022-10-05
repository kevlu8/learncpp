/* Welcome to kevlu8/learncpp! */

/* Summary:
- variables
- functions
- printing
*/

/*
Here you will learn the basics of C++ to help you on your journey
of development using low level languages!

This guide serves for people who have basic programming knowledge.
You must be able to understand terms like if statements, parameters,
functions, and types.

Make sure to leave a star if this repo helped you!

Here's how you will learn:
1. First, in each chapter there will be a block of comments just
like this. They will contain the instruction and the basic knowledge
required for the chapter.

2. Once you familiarize yourself with the material, there will
be some tasks for you to complete. When completing them, create
a new branch and start a pull request towards main. Then you
can accept it yourself.

3. Make sure that your code works before merging your pull
request! Once you finish, you can move onto the next chapter.

If you have questions or something's not working right, you
can create an issue describing what's happening.

Chapter 1

In this chapter you will learn about C++ and why it is good
to know how to use it, and also basic built in types and
operators.

Why C++?
========
C++ is a good language to know because it is used often
in program development and other backend materials.

Did you know that Windows is coded in a number of C-related
languages, including: C, C#, and C++?

C++ is just an addition off of the language of C, which isn't
being updated as frequently anymore. C++ however is being
updated every 3 years, the latest version being C++20.

C++ brings OOP into the game, which C doesn't have. OOP is
object oriented programming, meaning that you have objects
and children inside of them that you can access.

C++ also supports function overloading, which is where you
can have multiple functions in the same name that can do
different things, as long as they have different parameters
(arguments that you supply when calling the function).

In general, lower level languages are different from higher
level languages in the way that they need a valid entry point.
For example, Python scripts execute from top down. C++ programs
execute from the function main. To declare this entry point,
we do this: */

int main() {
	/*
	Types
	=====
	Types are basic "types" of values that a variable can have.
	An example of this would be something like an int (for
	integer). You can use types to declare variables. Unlike
	high level programming languages such as Python, you have
	to state what type of variable the variable is. In Python,
	if you wanted to make a variable called "luckyNumber" with
	the value of 7, you would simply put:

	luckyNumber = 7

	However in C++ you will need to state the type, then the
	name, then the value. So, something like this: */

	int luckyNumber = 7;

	/*
	Also notice the semicolon. Most languages require semicolons
	to tell lines apart from each other. It's hard at first to get
	used to putting ; after each line, but it becomes muscle memory
	after a while.

	Here is a list of the most common types and what they are for:

	int - An integer. Can be any value from -2147483647 to 2147483647
	long long - A different type of integer. Can be any value from -2^63 to 2^63
	unsigned - Goes before `int` or `long long`. This makes the variable unable to 
		store negative values, but it makes it able to store 2x more
	float - A decimal. It can have up to 7 digits of precision.
	double - A decimal. It can have up to 15 digits of precision.
	string - Some text. It can be a sentence, or a paragraph.
	char - A single character.

	Now, try to create some variables on your own!
	*/

	// replace with int variable
	// replace with float variable
	// replace with double variable
	// replace with string variable
	// replace with char variable

	/*
	You may notice that the string variable is underlined in red. Why?
	It's because string is not a built in variable for C++. To use strings,
	we must include the library <string>, by putting #include <string> at
	the top of the code. Do that, with the hashtag and the angle brackets,
	then replace string with std::string. It should work now!

	Functions
	=========
	Functions are blocks of code that execute when called. Using functions
	can make it easy to repeatedly execute some code without having to
	type it out every time. To define a function, we need to define
	what it will return, meaning what it will set its value to once
	it finishes execution. If you have a function that you don't want
	to return anything, use void. Then you need to specify its name,
	and finally its parameters. An example of a good function would be
	something like this:

	int add(int x, int y) {
		return x + y;
	}

	Then you will be able to call it like this:

	add(1, 5);

	And it will set its own value to 6 (also known as returning 6).

	However C++ is finicky and doesn't let us define functions inside of
	main(), so you must define it outside of main().

	Printing
	========
	The moment you've been waiting for! We can print "Hello, World!" to
	the console! But how do we do this? Using the <iostream> library,
	we can use one of it's functions, std::cout to Character OUT text 
	to the console. To use it, just type:
	std::cout << "Text here" << std::endl;
	The "std::endl" part ENDs the Line and flushes the buffer. Alternatively,
	you may use the escape character '\n' which makes a new line without
	flushing the buffer. This is a tiny bit faster than std::endl.

	Now, try to print "Hello, World!" to the console. */

	// replace with hello world code

	/*
	If you did it successfully, congrats! You have finished the lesson
	for chapter 1, and now you can move onto the tasks.

	Task 1: define a function called hi() to print "Hello, World!" every
	time it is called, then return 0. Then, call it 5 times.

	Task 2: try using std::cout to print different types of variables.
	Which ones work? Which ones don't? eg:
	float x = 0.5;
	std::cout << x;

	Task 3: try creating a function that requires 2 integer parameters,
	then returns the value of those two integers multiplied together.
	Then, print the output. */

	return 0; /* This is just cosmetic since main() will return 0 automatically
	if execution is successful, but it's best to get into a habit of returning
	whenever there is a function. */
}
