// Result and Percentage Calculator using Structure
#include<stdio.h>
int per(int a,int b,int c, int d, int e)
{
    float p = (a+b+c+d+e)/5;
    return p;
}
struct student
{
    char name[20];
    int std;
    int eng,math,sci,his,geo;
    float per;
};
int main()
{
    float p;
    struct student st;
    printf("Welcome to Percentage Calculator\n");
    printf("Enter Name: ");
    scanf("%s",&st.name);
    printf("Enter Standard: ");
    scanf("%d",&st.std);
    printf("Enter Marks Scored: \n");
    printf("Enter Marks in English:  ");
    scanf("%d",&st.eng);
    printf("Enter Marks in Mathamatics: ");
    scanf("%d",&st.math);
    printf("Enter Marks in Science: ");
    scanf("%d",&st.sci);
    printf("Enter Marks in History: ");
    scanf("%d",&st.his);
    printf("Enter Marks in Geography: ");
    scanf("%d",&st.geo);
    p = per(st.eng,st.math,st.sci,st.his,st.geo);

    printf("Percentage Score : %f",p);

}