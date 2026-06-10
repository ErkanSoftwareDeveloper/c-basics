// basics Struct Declaration
struct Student {
    char name[50];
    int age;
    float grade;
};


// creating and using struct variables
struct Student s1;

strcpy(s1.name, "John");
s1.age = 20;
s1.grade = 85.5f;

printf("%s %d %.1f\n", s1.name, s1.age, s1.grade);


// struct initialization
struct Student s2 = {"Alice", 22, 92.0f};


// Using typedef
typedef struct {
    char name[50];
    int age;
} Person;

Person p1 = {"Bob", 30};



// Nested Structs
struct Address {
    char city[50];
    char country[50];
};

struct Employee {
    char name[50];
    struct Address address;
};



// Array of Structs
struct Student students[3] = {
    {"John", 20, 85.5},
    {"Alice", 22, 90.0},
    {"Bob", 21, 78.5}
};



// Passing Struct to Function
void printStudent(struct Student s) {
    printf("%s %d %.1f\n", s.name, s.age, s.grade);
}


// Passing Struct by Reference
void updateGrade(struct Student *s, float grade) {
    s->grade = grade;
}


// Returning a Struct
struct Student createStudent() {
    struct Student s = {"Mike", 19, 88.0};
    return s;
}



// Pointer to Struct
struct Student s = {"Tom", 23, 91.0};
struct Student *ptr = &s;

printf("%s\n", ptr->name);


// Dynamic Memory Allocation
struct Student *s = malloc(sizeof(struct Student));

strcpy(s->name, "David");
s->age = 24;
s->grade = 95.0f;

free(s);



// Self-Referential Struct (Linked List Foundation)
struct Node {
    int data;
    struct Node *next;
};


// Struct vs Union
union Data {
    int i;
    float f;
    char str[20];
};



// Real-World Example
typedef struct {
    int id;
    char title[100];
    float price;
} Product;
