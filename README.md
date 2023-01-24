# Printf

#THIS PROJECT IS ON THE PRINTF FUNCTION IN C.

AUTHORS: Ubi, Joseph && Yoseph Tamir.
=====================================


The printf function is the C language function to do formatted printing.
printf in the most simplest case takes one argument: a string of characters to be printed.
This string iscomposed of characters, each of which is printed ex-actly as it appears.
So printf("xyz"); would sim-ply print an x, then a y, and ﬁnally a z.
This is not exactly “formatted” printing, but it is still the basis of what printf does.

=======================================================================================


The real power of printf is when we are printing the contents of variables.
Let’s take the format speciﬁer %d for example. This prints a number.
So, a num-ber must be provided for printing.
This is done by a dding another argument to the printf statement, as shown here:

int age; age = 25; printf( "I am %d years old\n", age );
In this example, printf has two arguments.
The ﬁrst is a string: "I am %d years old\n".
The second is an integer, age.
======================================


When printf processes its arguments, it starts printing the characters it ﬁnds in the ﬁrst argument, one by one.
When it ﬁnds a percent it knows it has a format speciﬁcation.
It goes to the next argument and uses its value, printing it according to that format speciﬁcation.
It then returns to printing a character at a time (from the ﬁrst argument).
