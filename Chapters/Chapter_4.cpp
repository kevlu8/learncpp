/* Congratulations on making it to chapter 4! */

/* Summary:
- OOP
- namespaces
- structs
- classes
*/

/*
In this chapter you will learn about Object Oriented
Programming (OOP) and how it can be used in C++.

Keep in mind that not all languages support object
oriented programming, such as C.
*/

#include <iostream>
#include <string>

/*
OOP
===
As mentioned above, OOP stands for object oriented programming.
OOP is a kind of programming that contains objects.

An object is just a type with user-defined methods and variables.
*/

/*
Namespaces
==========
A namespace is an object that can contain variables, classes,
functions, i.e. anything! For example, you may not have thought
much about it, but when we are taking input and sending output,
we put std:: before the "cin" or "cout". In this case, std is
a namespace that stands for "standard". Almost all built-in
functions are put in this namespace. If you don't want to type
std:: before everything, you can use this line of code:
*/

using namespace std;

/*
and then you can use cout and cin directly without the std::.
While this might make coding easier for small personal tasks,
this is ultimately bad practice and should not be used in large
scale projects. This is because if you use too many namespaces, 
you could end up with multiple functions that do different things.
For example: namespace a has function addstr(x, y) that adds the 
numbers and returns a string with the result (in binary). However,
namespace b has a function addstr(x, y) that adds the numbers
and returns a string with the result (in hexadecimal). So, if
you use both namespace a and b, you won't be able to differentiate
between a::addstr(x, y) and b::addstr(x, y) as both will be
represented as addstr(x, y) even though both do different things.
*/

/*
In order to define namespaces, you must first be outside of the
main function. Then, you do something like this:
*/

namespace math {
	/*
	Now, you can make variables, functions, whatever you want!
	*/
	int add(int a, int b) {
		return a + b;
	}

	/*
	We would use the add function in the main function by using
	math::add(a, b);
	*/

	int sub(int a, int b) {
		return a - b;
	}

	int mul(int a, int b) {
		return a * b;
	}

	int div(int a, int b) {
		return a / b;
	}

	int secretNumber = 123;
}

/*
We will test these out later in the main function.
*/

/*
Structs
=======

*/

struct coordinate {
	int x, y;
	void moveX(int a) {
		x += a;
	}
	void moveY(int a) {
		y += a;
	}
}; // Don't forget the semicolon!

/*
Classes
=======

*/

class World {
private:
	/*
	Variables and functions here are only accessible inside of the
	class. This means that you cannot change variables or call 
	functions inside of here unless there is a function to change 
	them in public.
	*/
	long long populationCount = 8000000000;
public:
	/*
	Variables and functions here are accessible everywhere.
	*/
	long long getPopulation() {
		return populationCount;
	}
protected: // note: i don't use classes often, someone might want to explain how this works
}; // Don't forget the semicolon!

int main() {
	
	/*
	If you did it successfully, congrats! You have finished the lesson
	for chapter 4, and now you can move onto the tasks.

	Task 1: 

	Task 2: 

	Task 3: 
	*/

	return 0;
}