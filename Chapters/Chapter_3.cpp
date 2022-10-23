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
#include <memory>
#include <string>

/* Don't worry about these functions, they will be useful
later on. */
void func(int i) { i = 5; }

void func2(int &i) { i = 5; }

void add(int &a, int &b) {
  // Add a and b, and store the result in a
  std::cout << "adding a and b" << std::endl;
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
  std::cout << "Enter an integer value" << std::endl;
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

  std::cout << "Enter an string value" << std::endl;
  std::string s;
  std::cin >> s;

  /*
  A main issue with std::cin is that it ends input at spaces
  and at newlines. This means that you won't be able to get
  input such as a sentence using just std::cin. If you want
  to get an entire line (i.e. including spaces), you must
  use the getline() function.
  */

  std::cout << "Enter a string value to be caputered by getline" << std::endl;
  getline(std::cin, s);

  /*
  This puts the entire line in s.

  What if we want to get multiple inputs from the user, but
  we don't know how many there are? We can use a while loop
  to get input until the user enters a certain value.
  */

  while (true) {
    std::cout << "Enter an interger value. Value 0 terminates this loop"
              << std::endl;
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

  /* You must be aware of possible memory leaks using objects in heap memory. So
     if you create a pointer to an new object you have to delete the object
		 if it is not used any longer.
	*/

  std::string *heapString = new std::string("My Heapstring");
  std::cout << *heapString << std::endl;
  
	/*
		you need to delete the string object heapString after usage! Otherwise a 
		memory leak occurs:
    
		valgring analysis output (excerpt):
		...
    ==32723== HEAP SUMMARY:
    ==32723==     in use at exit: 32 bytes in 1 blocks
    ==32723==   total heap usage: 4 allocs, 3 frees, 74,784 bytes allocated
    ==32723==
    ==32723== 32 bytes in 1 blocks are definitely lost in loss record 1 of 1
    ...
  */
  delete heapString;

  /* to avoid memory leaks you should not use raw pointers.
     modern c++ comes with smart pointers

	  	- unique_ptr: owns and manages another object through a pointer and 
										disposes of that object when the unique_ptr goes out of scope
      - shared_ptr: retains shared ownership of an object through a pointer.
										Several shared_ptr objects may own the same object. The
                    object is destroyed and its memory deallocated
		  - weak_ptr:   holds a non-owning ("weak") reference to an object that is 
				            managed by std::shared_ptr. It must be converted to 
										std::shared_ptr in order to access the referenced object
										(more advanced topic)

			To use smart pointers you must include the memory header.
      For following examples you must compile with option --std=c++14
			Following examples covers only some basics about creating smart pointers.
			A complete coverage of this topic may follow as a specific chapter.

  */

  /*unique_ptr example*/
  auto uniqString = std::make_unique<std::string>("A unique string");
  std::cout << "unique_ptr example: " << *uniqString << std::endl;

  /*shared_ptr example
	
		For more complex examples of shared_ptr have a look at
		https://en.cppreference.com/w/cpp/memory/shared_ptr
	*/
  auto sharedString = std::make_unique<std::string>("A shared string");
  std::cout << "shared_ptr example: " << *sharedString << std::endl;

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

  func(i);  // Look at the function definition above

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