// 3) Suppose you are hired by a software company to create a student registry of 100 students.
// a) Write a structure called Student that has 4 members: 
    // an integer StudentID, a character array Name of length 50, a float CGPA and a character array Major of length 20. 
// b) Write a function called HighestGPA that takes an array of structures as an input parameter. 
    // The function then prints the information of the student(s) with highest CGPA.

#include <stdio.h>

struct Student
{
    int StudentID;
    char Name[50];
    float CGPA;
    char Major[20];
};

void HighestGPA(struct Student std[]){
    int i, max, max_i;
    
    max = std[0].CGPA;

    for(i=1; i<100; i++){
        if(std[i].CGPA > max){
            max = std[i].CGPA;
        }
    }

    for(i=0; i<100; i++){
        if(std[i].CGPA == max){
            printf("StudentId:%d\nName:%s\nCGPA:%f\nMajor:%s\n\n", std[i].StudentID, std[i].Name, std[i].CGPA, std[i].Major);
        }
    }
}

int main()
{
    struct Student std[100];

    return 0;
}