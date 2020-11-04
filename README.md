# cpp piscine

[Day00](#day00) - Namespace, class, member functions, stdio stream, initialization lists, static, const, and lots of basic stuff.<br>
[Day01](#day01) - Memory allocation, references, pointers to members and file streams.<br>
[Day02](#day02) - Ad-hoc polymorphism, operators overload and canonical classes.<br>
[Day03](#day03) - Inheritance.<br>
[Day04](#day04) - Subtype polymorphism, abstract classes, interfaces.<br>
[Day05](#day05) - Repetition and exceptions.<br>
[Day06](#day06) - Casts.<br>
[Day07](#day07) - C++ Templates.<br>
[Day08](#day08) - Templated containers, iterators, algorithms.<br>

## Clone
To copy on your Desktop
```
cd; cd Desktop/; git clone https://github.com/ayundina/cpp_piscine.git cpp_piscine
```

## Build&Run
Each day folder has exercises folder.

<a name="day00"></a>
## Day00
Namespace, class, member functions, stdio stream, initialization lists, static, const, and lots of basic stuff.<br>
<br>**day00 ex00**<br>
Turn arguments into uppercase.
```
cd; cd Desktop/cpp_piscine/day00/ex00/; make
./megaphone Is it on? "Test " ! " Test..."
```
![megaphone.gif](https://github.com/ayundina/cpp_piscine/blob/master/day00/gif/megaphone_1.gif)

**day00 ex01**<br>
A phonebook to save 8 contacts and lose them all by the exit. Run and follow the navigation.
```
cd; cd Desktop/cpp_piscine/day00/ex01/; make
./phonebook
```
![phonebook.gif](https://github.com/ayundina/cpp_piscine/blob/master/day00/gif/phonebook_1.gif)

**day00 ex02**<br>
Recreate a source code for the lost Account.class.cpp based on .hpp, tests and old .log file.
```
cd; cd Desktop/cpp_piscine/day00/ex02/; make
./account
```
![account.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day00/gif/account.jpg)

<a name="day01"></a>
## Day01
Memory allocation, references, pointers to members and file streams.<br>
<br>**day01 ex00**<br>
Stack vs heap allocation.
```
cd; cd Desktop/cpp_piscine/day01/ex00/; make
./pony
```
![pony.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day01/gif/pony.jpg)

**day01 ex01**<br>
Make sure nothing leaks.

<br>**day01 ex02**<br>
Create a zombie "attack" of random zombies with the entered number and type of zombies.
```
cd; cd Desktop/cpp_piscine/day01/ex02/; make
./zombie
```
![zombie.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day01/gif/zombie.jpg)

**day01 ex03**<br>
Create a zombie "attack" of random zombies with the entered number. Same as in the previous exercise, but with a better logic of classes and dynamic memory allocation of a double-pointer - pointer to an array of pointers to Zombie class.
```
cd; cd Desktop/cpp_piscine/day01/ex03/; make
./zombie_horde
```
![zombie_horde.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day01/gif/zombie_horde.jpg)

**day01 ex04**<br>
Use a reference to a string.
```
cd; cd Desktop/cpp_piscine/day01/ex04/; make
./ex04
```

<br>**day01 ex05**<br>
Understand accessors.
```
cd; cd Desktop/cpp_piscine/day01/ex05/; make
./brain
```
<br>**day01 ex06**<br>
Reference vs pointer.
```
cd; cd Desktop/cpp_piscine/day01/ex06/; make
./human
```
<br>**day01 ex07**<br>
Make the "Find and Replace" program. The program takes 3 parameters: file string_to_find string_to_place_instead. The result is written into a new file.replace.
```
cd; cd Desktop/cpp_piscine/day01/ex07/; make
./replace test "o" "-O-"
```
![replace.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day01/gif/replace.jpg)

**day01 ex08**<br>
Invoke functions by using a pointer to member function. This was achieved by using an array of pointers to member functions.
```
cd; cd Desktop/cpp_piscine/day01/ex08/; make
./human
```

<br>**day01 ex09**<br>
As in the previous exercise, invoke functions by using a pointer to member function, but in this exercise, I used std::map with string and function pointer pair.
```
cd; cd Desktop/cpp_piscine/day01/ex09/; make
./logger
```

<br>**day01 ex10**<br>
cato9tails is a program that does the same thing as the system’s cat command without options. It can read from files and/or the standard input.
```
cd; cd Desktop/cpp_piscine/day01/ex10/; make
./cato9tails file1 file2 file3
```
![cato9tails.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day01/gif/cato9tails.jpg)

<a name="day02"></a>
## Day02
Ad-hoc polymorphism, operators overload and canonical classes.<br>
<br>**day02 ex00**<br>
Write a canonical class to represent fixed-point numbers.
```
cd; cd Desktop/cpp_piscine/day02/ex00/; make
./fixed
```
![fixed_00.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day02/gif/fixed_00.jpg)

**day02 ex01**<br>
Add more members to the same Fixed class for a better representation of fixed-point number.
```
cd; cd Desktop/cpp_piscine/day02/ex01/; make
./fixed
```
![fixed_01.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day02/gif/fixed_01.jpg)

**day02 ex02**<br>
Add public member operator overloads to the same Fixed class for comparison, arithmetic and increment/decrement operations.
```
cd; cd Desktop/cpp_piscine/day02/ex02/; make
./fixed
```
![fixed_02.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day02/gif/fixed_02.jpg)

**day02 ex03**<br>
A program named eval_expr that evaluates simple arithmetic expressions as fixed-point values. I used Edsger Dijkstra's "Shunting Yard" algorithm to 
1. represent normal arithmetic expression (infix) into reverse polish notation (postfix), 
`( 18.18 + 3.03 ) * 2` turn into
`18.18 3.03 + 2 *`
2. build a binary tree based on reverse polish notation expression,
```
    *
   / \
  2   +
     / \
18.18   3.03
```
3. traverse the tree to evaluate arithmetic expressions.
```
cd; cd Desktop/cpp_piscine/day02/ex03/; make
./eval_expr "( 18.18 + 3.03 ) * 2"
```
![eval_expr.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day02/gif/eval_expr.jpg)

<a name="day03"></a>
## Day03
Inheritance.<br>
<br>**day03 ex00**<br>
Write a class to represent an assault robot that can use diverse attack types, has armor for damage reduction and loses life points when attacked. Test it with the main.
```
cd; cd Desktop/cpp_piscine/day03/ex00/; make
./claptrap
```

<br>**day03 ex01**<br>
Write another class to represent another assault robot that can use diverse semi-random picked challenges, has armor for damage reduction and loses life points when attacked. Test it with the main.
```
cd; cd Desktop/cpp_piscine/day03/ex01/; make
./claptrap
```

<br>**day03 ex02**<br>
Previously written classes must inherit their common members from a new parent class. Test it with the main.
```
cd; cd Desktop/cpp_piscine/day03/ex02/; make
./claptrap
```

<br>**day03 ex03**<br>
Write another ninja robot class with an existent parent class. Test it with the main.
```
cd; cd Desktop/cpp_piscine/day03/ex03/; make
./claptrap
```

<br>**day03 ex04**<br>
Write one more robot class with multiple inheritances. Test it with the main.
```
cd; cd Desktop/cpp_piscine/day03/ex04/; make
./claptrap
```

<a name="day04"></a>
## Day04
Subtype polymorphism, abstract classes, interfaces.<br>
<br>**day04 ex00**<br>
Write a class that can not be instantiated with the default constructor, but still uses Coplien's (canonical) form. Add derived class. Test it with the main.
```
cd; cd Desktop/cpp_piscine/day04/ex00/; make
./polymorph
```
![polymorph.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day04/gif/polymorph.jpg)

**day04 ex01**<br>
Write an abstract class of a weapon and two weapon types classes, that are derived from the abstract class. Write a class, that will represent an enemy and two enemy characters, derived from the enemy class. Finally, write a character class to set the world on fire.
```
cd; cd Desktop/cpp_piscine/day04/ex01/; make
./fire
```

<br>**day04 ex02**<br>
Use two interface classes to create a squad (with the first interface) of marines (with the second interface).
```
cd; cd Desktop/cpp_piscine/day04/ex02/; make
./squad
```

<br>**day04 ex03**<br>
In short, create classes based on abstract classes and interfaces, and feel the taste of polymorphism:<br>
An abstract class 'AMateria' is a base class for 'Cure' and 'Ice' classes.<br>
An interface class 'ICharacter' is a base class for 'Character'.<br>
An interface class 'IMateriasource' is a base class for 'MateriaSource'.

In main:
1. 'MateriaSource' learns two materias - 'Cure' and 'Ice';
2. A 'Character' is initialized;
3. Two materias are created in 'MateriaSource' and passed to the 'Character';
4. Materias are applied by the 'Character' to another 'Character'.

```
cd; cd Desktop/cpp_piscine/day04/ex03/; make
./materia
```

<br>**day04 ex04**<br>
Space mining with polymorphism. There are two classes of lasers (to mine), based on one laser-interface class. And two classes of asteroids (to be mined), again, based on one asteroid-interface class. There are four possible outputs for each combination laser-asteroid, that are implemented by applying polymorphism.

```
cd; cd Desktop/cpp_piscine/day04/ex04/; make
./mining
```

<a name="day05"></a>
## Day05
Repetition and exceptions.<br>
<br>**day05 ex00**<br>
Write a Bureaucrat class, whose level can not be more than 150 and less than 1. If Bureaucrat is initialized with an invalid level, it throws an exception.
```
cd; cd Desktop/cpp_piscine/day05/ex00/; make
./bureaucrat
```

<br>**day05 ex01**<br>
Continue with the previous exercise. Add a Form class that can be signed by a Bureaucrat. A Bureaucrat has to have a certain level to sign a Form otherwise, an exception will be thrown.
```
cd; cd Desktop/cpp_piscine/day05/ex01/; make
./bureaucrat
```
<br>**day05 ex02**<br>
Continue with the previous exercise. Now Form is an abstract class with private variables. Add three more derived forms with different levels to sign and to execute. Implement the execution of forms.
```
cd; cd Desktop/cpp_piscine/day05/ex02/; make
./bureaucrat
```
<br>**day05 ex03**<br>
Continue with the previous exercise. Add an Intern class, that will create new Forms. Its method will take two strings, first string refers to the type of requested form, the second string is an argument for the Form's constructor. No ugly if/elseif/elseif/else construction, hint for a pointer to functions.
```
cd; cd Desktop/cpp_piscine/day05/ex03/; make
./bureaucrat
```
<br>**day05 ex04**<br>
Continue with the previous exercise. Add an OfficeBlock class with one Intern, two Bureaucrats and doBureaucracy function. All output must go to a log file.
```
cd; cd Desktop/cpp_piscine/day05/ex04/; make
./bureaucrat
```
<br>**day05 ex05**<br>
Continue with the previous exercise. Add a CentralBureaucracy class. CentralBureaucracy hires Bureaucrats and forms  OfficeBlocks. With a supplied queue of targets and called doBureaucracy function, some random bit of bureaucracy will be done to each target.
```
cd; cd Desktop/cpp_piscine/day05/ex05/; make
./bureaucrat
```
<a name="day06"></a>
## Day06
Casts.<br>
<br>**day06 ex00**<br>
Write a program that takes an argument, detects its type (alphabet - 'a', 'c', or numeric - 'nan', 'inf', '4', '-4.2f') and converts the argument to char, int, float and double.
```
cd; cd Desktop/cpp_piscine/day06/ex00/; make
./convert 42.1f
```
![convert.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day06/gif/convert.jpg)

<br>**day06 ex01**<br>
Write two functions:
```c++
void * serialize(void)
{
	returns the address on the heap of a sequence of bytes that represent
	a piece of serialized data.

	The serialized data is the concatenation of
	a random array of 8 alphanumerical characters,
	a random integer and
	a second random array of 8 alphanumerical characters.
}

Data *deserialize(void *raw)
{
	deserialize the raw data to a Data structure defined as 
	struct Data { std::string s1; int n; std::string s2; }
	allocated on the heap.
}
```
Wrap these two functions in a program that proves that everything works as intended.
```
cd; cd Desktop/cpp_piscine/day06/ex01/; make
./serialize
```
<br>**day06 ex02**<br>
Create three empty classes A, B and C. All three are derived from a Base class. Write tree functions:
```c++
Base *generate(void)
{
	randomly instanciates A, B or C
	returns the instance as a Base pointer
}

void identify_from_pointer(Base *p)
{
	displays "A", "B" or "C" according to the real type of p
}

void identify_from_reference( Base &p)
{
	displays "A", "B" or "C" according to the real type of p
}
```
Test with the main. <typeinfo> is forbidden.
```
cd; cd Desktop/cpp_piscine/day06/ex02/; make
./real_type
```
<a name="day07"></a>
## Day07
C++ Templates.<br>
<br>**day07 ex00**<br>
Write templates for functions swap, min and max.
```
cd; cd Desktop/cpp_piscine/day07/ex00/; make
./template
```

<br>**day07 ex01**<br>
Function template - iter, takes three parameters:
1. address of an array
2. length of the array
3. function that is called on each element of the array
```
cd; cd Desktop/cpp_piscine/day07/ex01/; make
./template
```

<br>**day07 ex02**<br>
Write a class template - Array that contains elements of type T. Allows construction with a given size, copy construction and copy assignment. When accessing an element with operator[], std::exception is thrown if the element is out of limit.
```
cd; cd Desktop/cpp_piscine/day07/ex02/; make
./template
```
<a name="day08"></a>
## Day08
Templated containers, iterators, algorithms.<br>
<br>**day08 ex00**<br>
Write a template function - easyfind - templated on type T, that takes a T and an int. T is a container of int. The function finds given int in T, else it throws an exception.
```
cd; cd Desktop/cpp_piscine/day08/ex00/; make
./easyfind
```
<br>**day08 ex01**<br>
Implement a class that can hold a given number of ints. With the call of the corresponding function members it will display the shortest and longest span between all the numbers stored in the object.
```
cd; cd Desktop/cpp_piscine/day08/ex01/; make
./span
```
<br>**day08 ex02**<br>
Implement a class - MutantStack - that inherits from std::stack and makes it iterable.
```
cd; cd Desktop/cpp_piscine/day08/ex02/; make
./mutantstack
```
<br>**day08 ex03**<br>
Mindopen is an interpreter of mindopen language (same as mindfuck, but with other symbols for the same commands). Mindopen interpreter does the following:
1. Opens a file, that contains mindopen code.
2. Reads instructions and creates a queue of instructions in memory. The interpreter has Instruction classes, one for each instruction in the language. Each Instruction class has its execute() method. And there is an interface to manipulate all those instructions and store them in a container.
3. Executes each instruction in the queue.

"Hello World!" written in "brutal" brainfuck:
```
++++++++[>++++[>++>+++>+++>+<<<<-]>+>+>->>+[<]<-]>>.>---.+++++++..+++.>>.<-.<.+++.------.--------.>>+.>++.
```
"Hello World!" written in "cute kittens" mindopen:
```
^^^^^^^^(+^^^^(+^^+^^^+^^^+^----_)+^+^+_++^(-)-_)++\+___\^^^^^^^\\^^^\++\-_\-\^^^\______\________\++^\+^^\
```
```
cd; cd Desktop/cpp_piscine/day08/ex03/; make
./mindopen mo_mandelbrot.mo
```
![mindopen.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day08/gif/mindopen.jpg)

<br>**day08 ex04**<br>
Just like in day02/ex03 - evaluate a math expression, given as an argument. The expression can include integers and the + - / * operators.
1. Tokenize the expression. Convert it to a Token derived objects.
2. Convert infix notatin to postfix (Reverse Polish).
3. Evaluate the expression, outputing every step to the standard output (cutrrent token, its application and resulting stack state)

```
cd; cd Desktop/cpp_piscine/day08/ex04/; make
./evaluate "3 + ((1 + 4) * (8 / 4) ) - 1"
```
![evaluate.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day08/gif/evaluate.jpg)
