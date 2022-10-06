/* Congratulations on making it to chapter 3! */

/* Summary:
- user input
- pointers
- references
*/

/*
In this chapter you will learn about the infamous pointer
and its counterpart, the reference.

These two concepts really aren't too hard to understand
despite so many memes being made about them and their
notorious errors.
*/

#include <iostream>
#include <string>

/* Don't worry about these functions, they will be useful
later on. */
void func(int i) {
	i = 5;
}

void func2(int &i) {
	i = 5;
}

int main() {
	/*
	User input
	==========
	So far, we've went over how to show the user some text through
	the console. But how do we get input from the user?

	To get input from the user, we will use std::cin, which means
	Character IN. It works similar to std::cout, but the angle
	brackets are the other way. 

	For example, getting a single number as input could be done like
	this:
	*/

	int n;
	std::cin >> n;

	/*
	Note that we don't need to give a value to n as it will get
	overwritten with the user's input. This is known as 
	declaring a variable without initializing it.

	However, if you aren't going to give a value to it but rather
	you're going to be doing something such as incrementing it,
	you should give it a value as uninitialized variables are
	assigned a garbage value (a value that isn't useful).

	std::cin works with other types of variables as well!
	*/

	std::string s;
	std::cin >> s;

	/*
	A main issue with std::cin is that it ends input at spaces
	and at newlines. This means that you won't be able to get
	input such as a sentence using just std::cin. If you want
	to get an entire line (i.e. including spaces), you must
	use the getline() function. 
	*/

	getline(std::cin, s);

	/*
	This puts the entire line in s.

	What if we want to get multiple inputs from the user, but
	we don't know how many there are? We can use a while loop
	to get input until the user enters a certain value.
	*/

	while (true) {
		std::cin >> n;
		if (n == 0) {
			break;
		}
	}

	/*
	Note that we can use the break keyword to exit a loop
	early. This is useful if you want to exit a loop when
	a certain condition is met.

	When the user enters 0, the loop will exit. This is
	known as a sentinel value, which is a value that
	indicates that the user is done entering input.
	*/

	/*
	Pointers
	========
	Pointers *point* to an object. They are declared using the
	* symbol. For example:
	*/
	
	int *p = &n;

	/*
	I know, it looks weird. But it's not too hard to understand.
	*p is the value of the pointer p. &n is the address of n.
	The & symbol is known as the address-of operator, or the
	reference operator. It returns the address of the variable
	that it is used on.

	To get the value of the pointer, we use the * symbol again.
	*p returns the value of the pointer p. This is known as
	dereferencing a pointer.

	So, if we try to get the value of p and not *p, we will get
	the address in memory of n. If we try to get the value of *p,
	we will get the value of n.

	Note that p is a pointer to an integer, so we can't use it
	to point to a string. Pointers have types too!

	In fact, a funny thing about pointers is that you can get
	the address of a pointer. This is known as a pointer to a
	pointer. This is useful if you want to pass a pointer to a
	function, but you don't want to modify the original pointer.

	To get the address of a pointer, we use the & symbol again.
	*/

	int **pp = &p;

	/*
	Notice that we use two * symbols. This is because we are
	getting the address of a pointer, which is a pointer itself.
	
	This is also known as a double pointer. We can get the value
	of a double pointer by using the * symbol twice.
	*/

	std::cout << **pp << std::endl;

	/*
	References
	==========
	Now, you might have noticed that I used the & symbol to get
	the address of a pointer. This is because references are
	just pointers that can't be reassigned. They are declared
	using the & symbol. For example:
	*/

	int &r = n;

	/*
	Notice that we don't use the * symbol. This is because
	references are not pointers. They are just pointers that
	can't be reassigned.

	We can use references to modify the value of a variable
	without having to use the * symbol. For example:
	*/

	r = 5;

	/*
	Generally though, you should use pointers instead of
	references. References are just pointers that can't be
	reassigned, so they are less useful than pointers.
	
	However, references are useful when you want to pass
	a variable to a function, and you want to modify the
	original variable. This is because in C++, when you
	pass a variable to a function, it is passed by value.
	This means that the function will get a copy of the
	variable, and any changes made to the variable in the
	function will not be reflected in the original variable.
	*/

	int i = 10;

	func(i); // Look at the function definition above

	std::cout << i << std::endl;

	/*
	When we run this code, we will get 10. This is because
	the function func() gets a copy of i, and so when it
	changes the value of i, it doesn't change the value
	of the original i, but rather the copy of i.

	To fix this, we can do something called pass by reference.
	*/

	func2(i);

	std::cout << i << std::endl;

	/*
	Now, when we run this code, we will get 5. This is because
	we passed a reference to i to the function func2(). This
	means that the function will get a reference to i, and so
	when it changes the value of i, it will change the value
	of the original i.

	Remember the add function that we made in chapter 1? Let's
	implement it using references.
	*/
	
	void add(int &a, int &b) {
		// Add a and b, and store the result in a
	}
	
	/*
	If you did it successfully, congrats! You have finished the lesson
	for chapter 3, and now you can move onto the tasks.

	Task 1: take in user input and print out the memory address that it's
	stored at.

	Task 2: try taking pointers to different types of variables and see
	what happens.

	Task 3: what happens if you try to modify a pointer to nothing?
	eg:
	int *i = 0;
	*i = 1;

	can you guess why?
	*/

	return 0;
}