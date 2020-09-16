# cpp piscine

[Clone](#clone)<br>
[Build&Run](#build_and_run)<br>
[Day00](#day00)<br>
[Day01](#day01)<br>
[Day02](#day02)<br>
[Day03](#day03)<br>
[Day04](#day04)<br>

<a name="clone"></a>
## Clone
To copy on your Desktop
```
cd; cd Desktop/; git clone https://github.com/ayundina/cpp_piscine.git cpp_piscine
```

<a name="build_and_run"></a>
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
Recreat source code for the lost Account.class.cpp based on .hpp, tests and old .log file.
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
![cato9tails.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day02/gif/fixed_00.jpg)

**day02 ex01**<br>
Add more members to the same Fixed class for a better representation of fixed-point number.
```
cd; cd Desktop/cpp_piscine/day02/ex01/; make
./fixed
```
![cato9tails.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day02/gif/fixed_01.jpg)

**day02 ex02**<br>
Add public member operator overloads to the same Fixed class for comparison, arithmetic and increment/decrement operations.
```
cd; cd Desktop/cpp_piscine/day02/ex02/; make
./fixed
```
![cato9tails.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day02/gif/fixed_02.jpg)

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
![cato9tails.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day02/gif/eval_expr.jpg)

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
![cato9tails.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day04/gif/polymorph.jpg)

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
