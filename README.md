# cpp piscine

## Clone
To copy on your Desktop
```
cd; cd Desktop/; git clone https://github.com/ayundina/cpp_piscine.git cpp_piscine
```

## Build&Run
Each day folder has exercises folder.

**day00 ex00**<br>
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

**day01 ex00**<br>
Stack vs heap allocation
```
cd; cd Desktop/cpp_piscine/day01/ex00/; make
./pony
```
![pony.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day01/gif/pony.jpg)

**day01 ex01**<br>
Make sure nothing leaks.

**day01 ex02**<br>
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

**day01 ex05**<br>
Understand accessors.
```
cd; cd Desktop/cpp_piscine/day01/ex05/; make
./brain
```
**day01 ex06**<br>
Reference vs pointer.
```
cd; cd Desktop/cpp_piscine/day01/ex06/; make
./human
```
**day01 ex07**<br>
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

**day01 ex09**<br>
As in the previous exercise, invoke functions by using a pointer to member function, but in this exercise, I used std::map with string and function pointer pair.
```
cd; cd Desktop/cpp_piscine/day01/ex09/; make
./logger
```

**day01 ex10**<br>
cato9tails is a program that does the same thing as the system’s cat command without options. It can read from files and/or the standard input.
```
cd; cd Desktop/cpp_piscine/day01/ex10/; make
./cato9tails file1 file2 file3
```
![cato9tails.jpg](https://github.com/ayundina/cpp_piscine/blob/master/day01/gif/cato9tails.jpg)
