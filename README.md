# C Plus Plus Module 00

The entry point for cpp in the old 42 Curriculum. Though the first two exercises seem simple in concept, it's writing (due to changing to a C++ style of problem solving) is rather difficult and tedious to finish. No explanation of the subjects themselves is given in the following. For that you can read the 42 subject.
## Ex00
At first, it felt overwhelming to switch to C++. I wanted to understand the syntax before writing. 
However, I found there is way too much information out there for C++ and ended up reading a bunch of stuff that was irrelevant for the exercises. In true 42 spirit I learned much more by doing than knowing and so I highly recommend trying to do these exercises without doing much research beforehand. 
It might feel like you're writing in C at first but you got to remember that C++ is based on C, so that also makes sense. 

Ex00 can be solved quite easily in a C-style manner. But the idea is to this in a C++ manner. What would this mean?

### New concepts
A big part of C++ is the ability to use classes but that is not necessary for the first exercise. One of the first projects is writing your own standard library with functions to use. However C++ brings the use of the `standard library`. This also introduces the concept of a `namespace`.
Since you're not allowed to use `printf` you quickly get to `std::cin` and `std::cout` which consequentially brings you to the new `stream insertaion/extraction operators`. And with that you more or less know everything there is to know for this exercise. 

**In steps explained**
- Learn about the `standard namespace`.
- Learn about the `std::string` datatype.
- Learn about `std::cout`.
- Learn about `stream insertion/extraction operators` (did you ever use bitshift operators?)

## Ex02
This exercise is not in line with the learning curve you would expect for a c++ beginner so I found myself slumping (and procrastinating) through the exercise learning _a bunch_ of new concepts.

### New concepts
Well... there is no beating around the bush this time. Time to get into OOP and Classes. When learning about `classes` you learn about `private` and `public` attributes and the usage of `memberfunctions`; specifically `setters` and `getters`. The first is used for setting a variable, the latter for getting one. You also will most likely be searching a bunch of functions from the standard library; specifically `std::getline`, `std::setw`, `std::atoi` and some other ones. Most likely you will want to initialize some kind of variable in your phonebook, intoducing you to constructors.

**In steps explained**
- Learn about the difference between `public` and `private` attributes and their usage in `classes`.
- Learn about `member functions` and the two most common forms; `setters` and `getters`.
- Learn about `constructors`.

---

**Some final advice:**
There is so much to learn about C++ and it is easy to get lost in information. Thus I highly recommend trying to keep in mind what you would use the information you're researching for. Aka; keep your end goal in sight. Don't forget what problem you are trying to solve and how your current research ties to the possible solution. I also higly recommend _reading_ other people's code and keeping a developer log where you keep track of progress and new concepts learned. You can read my devlog [here](https://github.com/TerraBreus/cpp00/blob/main/docs/dev_log.md).
