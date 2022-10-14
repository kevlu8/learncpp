/* Congratulations on making it to chapter 4! */

/* Summary:
- OOP
- namespaces
- structs
- classes
- inheritance
*/

/*
In this chapter you will learn about Object Oriented
Programming (OOP) and how it can be used in C++.

Keep in mind that not all languages support object
oriented programming, such as C. However, some of the widely
used languages such as python, java, c#, and js as well as its
ts improvement. 
*/

#include <iostream>
#include <string>

/*
OOP
===
As mentioned above, OOP stands for object oriented programming.
OOP is a kind of programming that utilizes objects.

You can think of an object as a custom data container, where you can
store values related to each other and often, though not required,
functions called "methods" where you utilize/modify the data of the
object. A method is just a function belonging to an object.

Say you want to implement a box that the user can resize and change
the color of. Using just variables, you would have to store the
x, y, width, and height values all in seperate variables or in a
confusing array. There would be no indication that the values are
connected to each other, and soon you would run into complicated
names such as boxOneX if you wanted to keep track of multiple boxes.
Hopefully by the end of this chapter, you'll be able to find an
alternative solution to this problem.
*/

/*
Namespaces
==========
You can think of a namespace as a collection for a bit of everything, 
making it great for wrapping larger concepts under a single
banner to distinguish them. A namespace is an object that can contain 
variables, classes, functions, i.e. anything! For example, you 
may not have thought much about it, but when we are taking input 
and sending output, we put std:: before the "cin" or "cout". In this case, 
std is a namespace that stands for "standard". Almost all built-in 
functions are put in this namespace. If you don't want to type
std:: before everything, you can use this line of code:
*/

using namespace std;

/*
and then you can use cout and cin directly without the std::.
Your code is now defaulted to using the std namespace for all
functions. While this might make coding easier for small personal tasks,
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

namespace math { //declare new namespace
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

	int div(int a, int b) { //shoving bunch of random math related dummy functions in math
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
While a namespace is great for shoving things into, you can't
make "instances" of it. Whenever you use a namespace, you can
only use that one object, with one copy of its values. This makes
it pretty horrible for anything besides grouping a bunch of
functions and constants together like the standard library does.
A struct, however, is different. It's like a "template"
(different than cpp templates, let's not talk about those for now)
for your own custom data types, that you can later use to type a
variable.
*/

struct coordinate { //declare new struct
	int x; //defines coordinate as a "data type" that holds two ints
	int y;
	
	void set(int x, int y) {
		this->x = x; //"this" is a pointer to the instance that is calling the set method
		this->y = y; //you can access the values of the instance by using '->' if the variable is a pointer, or '.' if the variable is an object itself
	}
	void moveX(int a) {
		x += a;
	}
	void moveY(int a) {
		y += a;
	}
	void show() {
		std::cout << "x: " << this.x << "; y: " << this.y << endl; 
	}
}; // Don't forget the semicolon!

/*
Classes
=======
From my experience, classes are very similar to structs. The only difference
is that classes have the option to prevent code from using its values/methods
while structs defaults to having everything be public.
*/

class World {
private:
	/*
	Variables and functions here are only accessible by method
	calls of the class internally, meaning you can't use them
	with the standard object.variable or object.function() 
	notation. This prevents another user (aka future you) from
	doing something stupid with them when they're only meant
	to be used internally. 
	*/
	long long populationCount;
public:
	/*
	Variables and functions here are accessible everywhere. The
	methods in here arealmost like an api for your object in the 
	sense that it contains simplified functions to manipulate
	and use your instances. Some common methods included here
	are 'set' and 'get' for private or protected variables. The reason
	set and get are used instead of just shoving the variable in public
	is that you can set certain restrictions inside of the set method.
	For example, if populationCount was public then during runtime
	it could manage to get below zero, which we know should
	be impossible and would likely break many things, all in all 
	not ideal. 
	*/
	long long getPopulation() {
		return populationCount;
	}
	
	bool setPopulation(long long n) {
		if (n >= 0) {
			this->populationCount = n; //notice how even though 'this' is a pointer, populationCount is not meaning you can straight up change the value
			return true;
		} 
		return false;	
	}
	
	/*
	since classes are very similar to structs, I think it'd be a good idea to introduce 
	the concept of constructors here to balance the learning load. Constructors, in any
	language, is the method called when you first create a new instance of an object
	using a struct or a class. In c++, the syntax is to drop the return type and write
	the name of the class as the name of the function. 
	*/
	World() { 
		this->populationCount = 8000000000;
	}
protected: // note: i don't use classes often, someone might want to explain how this works
}; // Don't forget the semicolon!

int main() {
	//NAMESPACE EXAMPLE
	int result = math::add(1, 2); //using math:: to indicate math namespace, just like std::
	std::cout << result; //expected output: 3
	
	using namespace math;
	result = sub(1, 2); //no math:: is necassary when using namespace math
	std::cout << result; //notice how we can still use other namespaces if we specify that we're using them,
			     //but as a rule you probably shouldn't do this in case you forget and it creates a bug you can't find
	
	//STRUCT EXAMPLE
	int coordX; //this is how we would define a coordinate system without structs
	int coordY;
	
	coordinate coords; //with the coordinate struct, you can use it as if it were a data type like int
	coordinate COORDS; //you can also make two of them (notice case sensitivity of names)
	
	coords.x = 0; //x and y are both grouped under the variable coords
	coords.y = 0;
	
	COORDS.set(1, 1); //you can also set both using the method we implemented earlier to make our lives easier
			  //notice how you must call the method from an instance of the struct and not the struct itself
			  //these methods has access to the values of the instance
	
	coords.show(); //expected output: x: 0; y: 0
	COORDS.show(); //		  x: 1; y: 1
	
	/*
	If you did it successfully, congrats! You have finished the lesson
	for chapter 4, and now you can move onto the tasks.

	Task 1: 

	Task 2: 

	Task 3: 
	*/

	return 0;
}
