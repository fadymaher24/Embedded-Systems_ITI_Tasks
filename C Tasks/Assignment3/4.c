// Write C code that manage a small school. The school has 3 classes each class
// contains 10 students. Define three arrays for the three classes each one with a
// length of 10. Save a random numbers in all array elements to indicate the
// students grade. The program will calculate and display the following statistics:
// 1- Number of passed students
// 2- Number of Failed students
// 3- Highest grade
// 4- Lowest grade
// 5- Average grade
// Knowing that the total grade is from 100 and the minimum passing grade is 50.

#include <stdio.h>

int passed(int class1[],int class2[],int class3[]);
int failed(int class1[],int class2[],int class3[]);
int highest_grade(int *class1,int *class2,int *class3);
int lowest_grade(int class1[],int class2[],int class3[]);
int average_grade(int class1[],int class2[],int class3[]);



int main()
{
int class1[10] = {50,60,70,80,90,10,100,65,20,10};
int class2[10] = {50,60,70,55,90,100,40,30,20,10};
int class3[10] = {50,60,70,45,90,100,40,30,20,95};
passed(class1,class2,class3);
failed(class1,class2,class3);
highest_grade(class1,class2,class3);
lowest_grade(class1,class2,class3);
average_grade(class1,class2,class3);
    return 0;
}



int passed(int class1[],int class2[],int class3[])
{
    int pass1=0,pass2=0,pass3=0;
    for (int i = 0; i < 10; i++)
    {
        if (class1[i]>=50)
            pass1++;
        if (class2[i]>=50)
            pass2++;
        if (class3[i]>=50)
            pass3++;
    }
    printf("Number of passed students in class 1 is: %d\n",pass1);
    printf("Number of passed students in class 2 is: %d\n",pass2);
    printf("Number of passed students in class 3 is: %d\n",pass3);
    return 0;
}

int failed(int class1[],int class2[],int class3[])
{
    int fail1=0,fail2=0,fail3=0;
    for (int i = 0; i < 10; i++)
    {
        if (class1[i]<50)
            fail1++;
        if (class2[i]<50)
            fail2++;
        if (class3[i]<50)
            fail3++;
    }
    printf("Number of failed students in class 1 is: %d\n",fail1);
    printf("Number of failed students in class 2 is: %d\n",fail2);
    printf("Number of failed students in class 3 is: %d\n",fail3);
    return 0;
}

int highest_grade(int *class1,int *class2,int *class3)
{
    int max1=class1[0],max2=class2[0],max3=class3[0];
    for (int i = 0; i < 10; i++)
    {
        if (max1<class1[i])
            max1=class1[i];
        if (max2<class2[i])
            max2=class2[i];
        if (max3<class3[i])
            max3=class3[i];
    }
    printf("The highest grade in class 1 is: %d\n",max1);
    printf("The highest grade in class 2 is: %d\n",max2);
    printf("The highest grade in class 3 is: %d\n",max3);
    return 0;
}


int lowest_grade(int *class1,int *class2,int *class3)
{
    int min1=class1[0],min2=class2[0],min3=class3[0];
    for (int i = 0; i < 10; i++)
    {
        if (min1>class1[i])
            min1=class1[i];
        if (min2>class2[i])
            min2=class2[i];
        if (min3>class3[i])
            min3=class3[i];
    }
    printf("The lowest grade in class 1 is: %d\n",min1);
    printf("The lowest grade in class 2 is: %d\n",min2);
    printf("The lowest grade in class 3 is: %d\n",min3);
    return 0;
}

int average_grade(int *class1,int *class2,int *class3)
{
   int avg1=0,avg2=0,avg3=0;
   for(int i=0;i<10;i++)
   {
       avg1+=class1[i];
       avg2+=class2[i];
       avg3+=class3[i];
   }
    avg1/=10;
    avg2/=10;
    avg3/=10;
    printf("The average grade in class 1 is: %d\n",avg1);
    printf("The average grade in class 2 is: %d\n",avg2);
    printf("The average grade in class 3 is: %d\n",avg3);
    return 0;
}