#include <stdio.h>
int main()
{ int per;
printf("Enter number");
scanf("%d",&per);
 if(per>80)
 {
     printf("\n A grade");
 }if(per<80&&per>=70)
 {
     printf("\n B grade");}
     if(per<70&&per>=60)
 {
     printf("\n C grade");}
     if(per<60&&per>=45)
 {
     printf("\n D grade");}
    if (per<45)
 {
     printf("\n FAIL");}
 return 0;
}
