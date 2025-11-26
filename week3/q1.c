#include<stdio.h>
int main(){
int n;
int positivecount=0;
int negativecount=0;
int zerocount=0;
char choice;
do{
printf("enter the digits:");
scanf("%d", &n);

if(n>0){
positivecount++;

}
else if(n<0){
negativecount++;

}
else{
    zerocount++;
}


printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
}
while(choice == 'y' || choice=='Y');
printf("\nCount of Positive numbers: %d\n", positivecount);
    printf("Count of Negative numbers: %d\n", negativecount);
    printf("Count of Zeroes: %d\n", zerocount);
    



    return 0;
}