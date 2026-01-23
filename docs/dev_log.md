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


