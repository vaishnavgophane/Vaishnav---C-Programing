#include<stdio.h>
// Lets Assume a Student has 5 Subjectes and calculate percentage he scored.
int main()
{
    float eng,math,sci,csci,geo;
    float per=0.00;
    printf("Marks in English: ");
    scanf("%f",&eng);
    printf("Marks in Mathamatics: ");
    scanf("%f",&math);
    printf("Marks in Science: ");
    scanf("%f",&sci);
    printf("Marks in Computer Science: ");
    scanf("%f",&csci);
    printf("Marks in Geography: ");
    scanf("%f",&geo);
    per = (eng+math+sci+csci+geo)/5;
    printf("Total Percentage Scored: %f",per);
}

