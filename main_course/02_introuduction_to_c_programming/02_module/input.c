#include <stdio.h>

int main() {

    int marks_english;
    int marks_math;
    float temparature;
    
    printf("Enter marks of English : ");
    scanf("%d", &marks_english);

    printf("Enter marks of Math : ");
    scanf("%d", &marks_math);

    printf("Enter temparature : ");
    scanf("%f", &temparature);

    int total_marks = marks_english + marks_math;

    printf("Total marks %d", total_marks);

}