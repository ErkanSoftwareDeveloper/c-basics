// Arithmetic Operators
int a = 10, b = 3;

printf("%d\n", a + b); // 13
printf("%d\n", a - b); // 7
printf("%d\n", a * b); // 30
printf("%d\n", a / b); // 3 (integer division!)
printf("%d\n", a % b); // 1     (10 / 3 = 3 = 1!!)


// Relational Operators
int x = 5, y = 10;

printf("%d\n", x == y); // 0 (false)
printf("%d\n", x != y); // 1 (true)
printf("%d\n", x < y);  // 1
printf("%d\n", x > y);  // 0
printf("%d\n", x <= y); // 1
printf("%d\n", x >= y); // 0


// Logical Operators
int p = 1, q = 0;

printf("Logical:\n");
printf("p && q: %d\n", p && q);
printf("p || q: %d\n", p || q);
printf("!p : %d\n\n", !p);


// Assignment Operators
int x = 5;

x += 3; // x = x + 3 → 8
x -= 2; // 6
x *= 2; // 12
x /= 3; // 4
x %= 3; // 1


// Increment/Decrement
int x = 5;

x++; // 6
x--; // 5
--x: // 4


// Ternary Operator
int age = 18;

(age >= 18) ? printf("Adult") : printf("Not adult");
//short 
if (age >= 18)
    printf("Adult");
else
    printf("Not adult");


//Size Operator
int x;
printf("%lu\n", sizeof(x)); // usually 4 BYTE!


//Bitwise operator
int a = 5;  // 0101
int b = 3;  // 0011

printf("%d\n", a & b); // 1
printf("%d\n", a | b); // 7
printf("%d\n", a ^ b); // 6
printf("%d\n", a << 1); // 10
printf("%d\n", a >> 1); // 2

