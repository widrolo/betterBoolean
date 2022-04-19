# Better Booleans

Usually, C/C++ stores a bool in 1 whole byte. **1 WHOLE BYTE**

So today, i introduce a whole better way of dealing with booleans. We just store 8 of them in a byte.

## How can i use it? 

It's actually simple, and the whole implementation takes 19 lines of code! At the beginning, you create a "boolean" variable, since the boolean can hold 8 bits, we have to know where we store each value, we do it by giving a specific bool an index that is also a sigle bit in the boolean. The index can be a number from 0-7.
Here is everthig you can do with it:

You can make a boolean true, by using 
~~~
SetBoolean(index, &boolean, True)
~~~

You can make a boolean false, by using 
~~~
SetBoolean(index, &boolean, False)
~~~

You can get a booleans value, by using 
~~~
GetBoolean(index, boolean)
~~~

The first letter of true or false has to be upper case, for C++ compatiblity.

## Why

Good question, but how many bools (using stdbool.h) can you fit in a kilobyte? Just 128 and you waste 896 bits of memory.
Now, how many bools (using boolean.h) can you fit in a kilobyte? A whole 1024 bools, with not a single wasted bit.

Lets say you make a very complex app, that uses exactly 1024 bools (stdbool.h). It would take up a 8 kilobytes of space or 8192 bit, but the worst part is, that you cant even use 7 kilobytes of it! 7168 wasted bits that cannot be used. 

That space could have been used to store a string that has 896 characters, if it uses AACII or 446 characters if it used UNICODE.