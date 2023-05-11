#include <stdio.h>


// define a structure student data type

typedef struct student {
int id;
int grade;
} Student;
void inputData(Student a[]);
void printData(Student a[]);
int main() {
// array of 10 students
Student x[10];
Student y;
inputData(x);
printData(x);

}
// read info of 2 students
void inputData(Student a[]){
for (int i = 0; i <= 1; i++)
{
printf("Enter student id:\n");
scanf("%d", &a[i].id);
printf("Enter student grade:\n");
scanf("%d", &a[i].grade);
}
}

// write a function to print 2 students in X
void printData(Student a[]){
for (int i = 0; i <= 1; i++) {
printf("Student %d:\n", i);
printf("id %d\n", a[i].id);
printf("grade %d\n", a[i].grade);
}



}