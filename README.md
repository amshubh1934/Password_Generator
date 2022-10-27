# Password_Generator
A simple C++ project to generate a strong password of length greater than length 8.
This is a simple project to create a Random password.
I have used the numbers, upper and lower case letters and special characters as specified by IBM website to
create a strong password.
I make use of rand() fucntion from cstdlib to generate random password.


use of rand()
rand() : If used as it is can be used to generate and random integer.
To get number from a specified range we use
int random = offset + (rand() % range)
where ,
offset is starting point
range = lastnumber + 1 - offset;
