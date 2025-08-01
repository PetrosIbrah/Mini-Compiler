## What is this project?
Mini compiler is a flex, bison project using c. THe outcome is a simplistic lexical & syntax analyzer, with lexical & syntax warnings & Errors, as well as fatal Errors. Further more...

### Flex.l
This Code presents a funtional verbal analyzer using Flex. This code identifies delimiters, numbers, operators, variables and strings etc. It also, counts Verbal Errors, Warnings and Fatal Errors And acts upon them. Other than that, it counts Correct Verbal usage.

### Bison.y
This Code presents a funtional Syntax analyzer using bison. This Code is an extends the flex code, but also addons, Developing various syntax and expressions while defining warnings erros and Fatal Errors.

### What it does
Upon successful project compilation, the input.txt file undergoes lexical and syntactic analysis. The output of which is saved in Output.txt

## How to run
- In the same directory type:
  <pre>make</pre> 
  To compile and run the project
###
- You can also type:
  <pre>make clean</pre>
  To delete the built files

## Requirements
- A linux based operating system.
- Bison installed. To install, if not intalled already write the following:
  <pre>sudo apt install bison</pre>
- Flex installed. To install, if not intalled already write the following:
  <pre>sudo apt install flex</pre>
- C compiler installed. To install, if not intalled already write the following:
  <pre>sudo apt install gcc</pre>
- Makefile installed. To install, if not intalled already write the following:
  <pre>sudo apt install make</pre>
