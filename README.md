# *This project has been created as part of the 42 curriculum by ccolnat, arde-ass*


## DESCRIPTION
Push_swap is the 1st group project project of the 42 curriculum.
The objective is to create a program which take as input a serie of numbres within int range, and an optional flag, see more bellow.

The program then sorts the numbers by swaping them between two piles, A and B, and there is a resticted list of movements allowed within and between piles (sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr), see details in Ressources.

If no flag is provided, the programm will measure the disorder and the lengh of the list given, and choose betwin 3 differents algorythms to minimise the numbers of operation required to sort the array, algorythms are detailed in Ressources.

The proggram also handle errors, returning "Error" and freeing memory.

This push_swap does not handle the bonus part of the subject.


## INSTRUCTIONS
To compile this project, you must run the command "Make"

Then, regarding inputs, our program allow for some flexibility : it tolerate and correct multiple spaces, and/or, lost "-" between spaces.

Regarding flags, you can use 4 differets types : 
"--simple" / "--medium" / "--complex" / "--adaptive"

Flags are limited to only one per call, also these flags can be put anywhere in the input, unless betweem hyphen in specific cases.

See exemples below :
./push_swap 3 2 1 "--flag 6 5 4"     ->  Error
./push_swap 3 2 1 "--simple" 6 5 4   ->  Ok, force the simple sorting strategy
./push_swap 3 2 1 --medium "6 5 4"   ->  Ok, force the medium sorting strategy

You can check the Norm with this command in the terminal :
norminette

And valgrind to check for leaks :
valgrind ./push_swap 3 2 1

Testers are available online, even if most won't allow for testing with the flags.

Also, commented in the utils.c file, you can find a different version of the debugg() function, which will give you detailed errors message.


## Ressources
This push_swap follow the new subject of 42_next cursus, version 1.1.

Google Gemini was used as a learning tool, with strict permanent instructions, which you can see below :

*When the subject is programming, you must act as a teacher, so, you must not give the code directly, when you ask a question, do not give any obvious hint that respond to the question you are asking, and when your explaining something, give details, explain why and how things work, and if you show any simplified typos for coding, explain it.*