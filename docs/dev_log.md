## 17-12

Feels weird to write in a new language even though the only thing I do different is the way I/O is handled. I am coutting `std::cout` and redirecting stuff in there `std::cout << "hello"`.

I does a lot of the work for you... It doesn't work completely but a good start.
## 20-12
Apparently I have to try not to write in C which seems rather tricky. However while reading the subject I found out about some [videos](https://elearning.intra.42.fr/notions/piscine-c-d00-c-basics/subnotions). Who would have thought reading the subject material could be useful!

Also from [Haglobah's github](https://haglobah.github.io/Mastering-42/holy_graph/cpp00-04.html) the following steps as guidelines:
- Read through the subject
- Take note of every word/concept you do not understand.
- Use the internet to research on these topics.
- Once you have a basic grasp of what all topics discussed are you start writing code.

So with that in mind: Let's read through the subject!
- [ ] Namespaces
- [ ] Classes
- [ ] member functions
- [ ] stdio streams
- [ ] initialization list
- [ ] Object Orientated Programming
- [ ] Orthodoc Canonical Form
- [ ] Guards
- [ ] Private and Public

Skip module 02 for now as you may.

## 23-01
Hello we're back! I am very scared to start on CPP again, especially the Phonebook but we're simply going to start bit by bit. Writing it down also to get it out there, that always helps.

Some of my notes through AI convo's:

Index keeps track of amount of contacts. When it "overflows" (after 8 contacts) it simply loops back to 0, thereby overwriting the oldest contact, and the oldest contact after next.

I will need to declare my classes and members in my `phonebook.hpp`

When declaring a class, we use `private` and `public`.

Usually, we keep all data in the private class and the functions that handle this private data in the public section.

A simple example;
```c++
class   bank{
private:
    int money;
public:
    void    withdraw();
    void    deposit();
}
```

Keep in mind these are for the cpp00->ex01.

Also looking a little with Mischa's and Mats' projects to see how it works. Not looking at the code just yet, simply trying to understand the exercise!


OOOOOMGGGGG C++ handles strings like a value type (if used as std::string). This means that just as you can do:
```c
int x;
int y;

x = 12;
y = x;
x = 0;
printf("%i\n", y);
```
It will print the value 12 even though the variable x actally holds the value 0.

So:
```
std::string s1;
std::string s2;

s1 << std::cin;
s2 = s1;
s1 << std::cin;
s2 >> std::cout;
```
and it will print the value of s1 at the time of copying, not the current value. (In C s2 would point to the location of s1 since it is `char *` and would be pointing to the location where s1 was stored.

FUCKING AWESOME!

## 24-01
Difficulty focusing, feeling a little lost in the forest again. 

In general, when writing in cpp you will have a bunch more files compared to c. Especially when working with classes. Good practice is to have a .cpp file and a .hpp file for every class used. The .cpp file will have all (public) functions (we also call them member functions) and the .hpp file will have the actual class.

## 06-02
Boy how time passes. Basically started from scratch again but this time knowing where and what to look for.

Some things I learned;

- Makefile: Fun.
        $@ shortcut for target. $< Shortcut for object/dependency
        
        $(SRC:%.cpp=%.o) -> everything with a .cpp extension in the src target, changed to a .o file
- std::toupper(char s) -> cool and simple.

## 09-02
Wish I could describe my current feeling. I don't wish to sit in silence yet noise disturbs me. I'm doing things, slowly, yet it feels like time is flying by. Anyway, it would be silly to say no progress has been made so here is a little summmary after sitting behind a desk for over four hours.

```Makefile
%.o : %.cpp
    $(CPP) $(FLAGS) -c $< -o $@
```
This is a neat way to have all your object files compiled from the cpp files. If, in your Makefile you have something like;
```
$(OBJ) = $(SRC:%.cpp=%.o)
```
We can interpret it as, all files in the SRC variable, with a .cpp extension will have the same name (`%`) but with the `.o` extension. But if the relevant `.o` file does not exist, it goes to the rule two codeblocks back and create the target (`$@` - easy to remember cause it looks like one of those target emoji's) from it's dependency (`.cpp`).

Now I have more or less learned how to create my Makefiles. It only took 15 months!

Now to cpp.

There is a lot but it also doesn't feel like much. A big difference in thinking is creating functionfiles for classfunctions. So if I were to have some kind of class (defined in `foobar.hpp`) I would have its (public?) functions defined in `foobar.hpp`.

I'm only just starting, but the shift feels logical and easy. It is neat. Tidy.

Another small thing is `passing by reference`. In C you would do this by usage of pointers. In CPP you do this by defining it in the function prototype. `someFunc(int &someInt);`
The `&` sign declares that we will use the actual value of the variable and not a copy. We don't have to do anything when we call the function. `someFunc(anotherInteger);`.
In C you would always have to match the prototype, so if you used a pointer, you would have to use the `&` operator so that we use the memoryadress of the variable instead of the actual value itself. In CPP it's the same (sort of) but the other way around. I guess this makes sense since when you write the function you will know whether you want to use the variable as a copy, or genuinly modidy it yourself. If at some point you change your mind, you only have to change the prototype of the function and not sift through your entire program to add/remove the `&` operator.

Yeah I mean apart, from that... maybe `std::getline(std::cin, someStr);`? It's similar to `std::cin >> someStr` but looks for the newline instead of whitespace. `std::cin` splits the input and keeps it untill the buffer is empty.

So if you put in `hello world, COOOL`. The first time you `cin` it will have `hello` but the second time it won't ask for input from the user since it still has `world,` in the buffer. Only after the third time, when `cin` has overloaded `COOOL` into a string, will it ask input from the user again.

This is useful in some cases, but not for the phoneBook exercise (I think).


Next thing I'm learning are constructors. Whenever you declare a class in your code it's constructor will run. Constructors are a special type of memberfunction that gets called the moment you declare an instance of the class. Constructors are identiable by having the exact same name as the class itself. They are not necessary for this module per se but they are a nice way of initializing variables which we want for one specific variable (`index`) in the phonebook class so we might as well use it.

## 10-02
So far we haven't really used anything new. Simply writing and experimenting with c++.

One thing I will probably use soon is the `std::setw()` command which allows me to set the width.

Another thing I'm noticing is correct usage of member functions. Memberfuntctions must be explicitly stated in the class itself (in the public section). I will have to rethink my use of member functions a little. Specifically due to the necessaity of memberfunctions needing to be in their relevant file. So we shouldn't try to have general functions (like strCapitalize) in a file that contains the memberfunctions of a particular class.

## 11-02
Haven't learned much new as of now I believe. `std::atoi` I guess... and then using the `.c_str` to convert a `std::str` datatype to a `char *` type so that the `atoi` function can understand it. I want to understand the `std::setw` function better but also wan't to go on.

Yeah not the most fruitful day of all but I did get to finish ex01 so it seems I learned everything I had to already.

Hoping to finish of with a README for the project
