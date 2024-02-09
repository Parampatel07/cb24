// Write a programe to findout bmi of user
// weight in kg / (meter * meter)
#include <stdio.h>

float footToMeter(int foot)
{
     return foot / 3.281;
}
float inchToMeter(int inch)
{
     return inch / 39.37;
}
float getAddition(int foot, int inch)
{
     float answer = 0;
     answer = footToMeter(foot) + inchToMeter(inch);
     return answer;
}
float getBmi(int foot, int inch, float weight)
{
     return weight / (getAddition(foot, inch) * getAddition(foot, inch));
}
void main()
{
     float weight = 0;
     int foot = 0;
     int inch = 0;
     float bmi = 0;
     printf("Enter value of weight ");
     scanf("%f", &weight);
     printf("Enter value of foot ");
     scanf("%d", &foot);
     printf("Enter value of inch ");
     scanf("%d", &inch);

     bmi = getBmi(foot, inch, weight);
     printf("The value of bmi is %f ", bmi);
}