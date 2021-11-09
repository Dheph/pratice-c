
# Let's start
## Components and languages elements of programming

Basic structure of an algorithm in **C** :

>`libraries definitions`
` start program`
` variables declarations `
` end program `

**Libraries examples :**
> import lib example : #include <stdio.h>

**stdio** : is responsible of the input functions and output functions. *#include <stdio.h>*

**stdlib** : this library transform strings on numbers.*#include <stdlib.h>*

**time** : date and hour manipulations.*#include <time.h>*

**math** : Math operations. *#include <math.h>*

**ctype** : char  transformations and classifications. *#include <ctype.h>*

### Program launch

initialize with main function
`main() {}`

return int number `int main() {}`

return null ` void main(){}`

###  Variables

**int** integer numbers.
**float** floating numbers.
**char** characters

### Binary Operators

 \+  Sum
\-   Subtraction
\*   Multiplication
/    Division
%   Remainder of division

#### Relational operators

\>   gretter 
< lesser 
\>= gretter equal
\<= lesser equal
\== equal
\!= different

&& and
|| or
! not

### Keywords

auto, double, int, struct, 
break, else, long, switch,
case, enum, register, typedef,
char, extern, returnm union,
const, float, short, unsigned,
continue, for, signed, void,
default, goto, sizeof, volatille,
do, if, static, while

### others

**printf** : write
**scanf** : read

the operator **&** return the variable address, it is used when reading from scanf.

### Little program in C

 `#include <stdio.h>`
`int main(){`
	`int years_old;`
	`print(" how old are you ? ");`
	`scanf("%d" , &years_old);`
	`printf(" you have %d years old ", years_old);`
	`return 0;`
	`}`
