**How to contribute**
http://developers.useflashpunk.net/t/how-to-use-sourcetree-and-github-to-send-your-fp-modifications-pull-requests/1586 

*Some resources:*

Internal typedefs
http://stackoverflow.com/questions/759512/internal-typedefs-in-c-good-style-or-bad-style 

Returning multiple values - what option is better?
http://stackoverflow.com/questions/321068/returning-multiple-values-from-a-c-function 

struct in class
http://stackoverflow.com/questions/8550711/struct-in-class 

const syntax
https://isocpp.org/wiki/faq/const-correctness#overview-const 

When to use new
http://stackoverflow.com/questions/679571/when-to-use-new-and-when-not-to-in-c 
http://stackoverflow.com/questions/655065/when-should-i-use-the-new-keyword-in-c 

Sharing data
http://gamedev.stackexchange.com/questions/14217/several-classes-need-to-access-the-same-data-where-should-the-data-be-declared 

STL Containers
When to use what?
http://stackoverflow.com/questions/471432/in-which-scenario-do-i-use-a-particular-stl-container 
Stack, Heap in C++
http://www.learncpp.com/cpp-tutorial/79-the-stack-and-the-heap/ 

Static
Declared outside of a function: Global scope to file scope

Declaring a static member variable: Only created and initialized once. The member variable shared across all objects of that class type     
http://stackoverflow.com/questions/1563897/c-static-constant-string-class-member 
Declaring a static member function: What if we have static member variables which are private?
Use a static member function so we don't have to instantiate a new class object to use it's getter method.

Section 11.5 "The C++ Programming Language" by Bjarne Stroustrup states that ordinary member functions get 3 things:

	1. access to internals of class
	2. are in the scope of the class
	3. must be invoked on an instance

friends get only 1.
static functions get 1 and 2. 

http://www.learncpp.com/cpp-tutorial/812-static-member-functions/ 
https://msdn.microsoft.com/en-us/library/s1sb61xd(v=vs.110).aspx 
http://www.learncpp.com/cpp-tutorial/43-file-scope-and-the-static-keyword/ 

extern 
Useful for sharing a variable between a few modules
https://msdn.microsoft.com/en-us/library/0603949d.aspx 
http://stackoverflow.com/questions/10422034/when-to-use-extern-in-c 

Virtual
Related to polymorphism. (i.e. Some code or operations of objects behave differently in different contexts)
Subsets of polymorphism - overloading, inheritance

A base class pointer can point to either an object of the base class or of any publicly-derived class
Thus we can use a base class pointer to call member functions. But what if the derived function was overloaded? Will using the base class pointer give us the derived function or the base function?

Ans: The base function. Unless we use VIRTUAL.

Without "virtual" you get "early binding". Which implementation of the method is used gets decided at compile time based on the type of the pointer that you call through.

With "virtual" you get "late binding". Which implementation of the method is used gets decided at run time based on the type of the pointed-to object - what it was originally constructed as. 
* A virtual function allows customization of derived class implementations
* A factory function is a function that returns a base class pointer (pp 61, effective C++)

https://www.cs.bu.edu/teaching/cpp/polymorphism/intro/ 

Pure virtual vs virtual
"A virtual function or virtual method is a function or method whose behavior can be overridden within an inheriting class by a function with the same signature" - wikipedia

"A pure virtual function or pure virtual method is a virtual function that is required to be implemented by a derived class that is not abstract" - Wikipedia

So, the virtual function can be overriden and the pure virtual must be implemented.

virtual void Function() = 0; is a pure virtual. The "= 0" indicates is purity
https://msdn.microsoft.com/en-us/library/c8whxhf1.aspx 

Inheritance
Public, Protected, Private inheritance
http://stackoverflow.com/questions/860339/difference-between-private-public-and-protected-inheritance 


