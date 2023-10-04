#include <stdio.h>

int main()
{
struct student
{
    int id;
    char name[20];
    int grades[];
}; 

int grades ={90, 80, 70, 60, 50, 40, 30, 20, 10, 0};
struct student student1 = {12345, "John", grades[0], grades[1], grades[2], grades[3]};
struct student student2 = {22345, "Mary", grades[4], grades[5], grades[6], grades[7]};
struct student student3 = {32345, "Peter", grades[8], grades[9], grades[0], grades[1]};
struct student student4 = {42345, "Mark", grades[2], grades[3], grades[4], grades[5]};
struct student student5 = {52345, "Jane", grades[6], grades[7], grades[8], grades[9]};
struct student student6 = {62345, "Tom", grades[0], grades[1], grades[2], grades[3]};
struct student student7 = {72345, "Mona", grades[4], grades[5], grades[6], grades[7]};
struct student student8 = {82345, "Omar", grades[8], grades[9], grades[0], grades[1]};
struct student student9 = {92345, "Mohammed", grades[2], grades[3], grades[4], grades[5]};
struct student student10 = {102345, "Ali", grades[6], grades[7], grades[8], grades[9]};

int ids;
printf("Enter Your ID:\n");
scanf("%d", &ids);

if (ids == student1.id)
{
    printf("Your Name is: %s\n", student1.name);
    printf("Your Grades are: %d, %d, %d, %d\n", student1.grades[0], student1.grades[1], student1.grades[2], student1.grades[3]);
}
else if (ids == student2.id)
{
    printf("Your Name is: %s\n", student2.name);
    printf("Your Grades are: %d, %d, %d, %d\n", student2.grades[0], student2.grades[1], student2.grades[2], student2.grades[3]);
}
else if (ids == student3.id)
{ 
    printf("Your Name is: %s\n", student3.name);
    printf("Your Grades are: %d, %d, %d, %d\n", student3.grades[0], student3.grades[1], student3.grades[2], student3.grades[3]);
}
else if (ids == student4.id)
{
    printf("Your Name is: %s\n", student4.name);
    printf("Your Grades are: %d, %d, %d, %d\n", student4.grades[0], student4.grades[1], student4.grades[2], student4.grades[3]);
}
else if (ids == student5.id)
{
    printf("Your Name is: %s\n", student5.name);
    printf("Your Grades are: %d, %d, %d, %d\n", student5.grades[0], student5.grades[1], student5.grades[2], student5.grades[3]);
}
else if (ids == student6.id)
{
    printf("Your Name is: %s\n", student6.name);
    printf("Your Grades are: %d, %d, %d, %d\n", student6.grades[0], student6.grades[1], student6.grades[2], student6.grades[3]);
}
else if (ids == student7.id)
{
    printf("Your Name is: %s\n", student7.name);
    printf("Your Grades are: %d, %d, %d, %d\n", student7.grades[0], student7.grades[1], student7.grades[2], student7.grades[3]);
}
else if (ids == student8.id)
{
    printf("Your Name is: %s\n", student8.name);
    printf("Your Grades are: %d, %d, %d, %d\n", student8.grades[0], student8.grades[1], student8.grades[2], student8.grades[3]);
}
else if (ids == student9.id)
{
    printf("Your Name is: %s\n", student9.name);
    printf("Your Grades are: %d, %d, %d, %d\n", student9.grades[0], student9.grades[1], student9.grades[2], student9.grades[3]);
}
else if (ids == student10.id)
{
    printf("Your Name is: %s\n", student10.name);
    printf("Your Grades are: %d, %d, %d, %d\n", student10.grades[0], student10.grades[1], student10.grades[2], student10.grades[3]);
}
else
{
    printf("Your ID is not found\n");
}

    return 0;
}