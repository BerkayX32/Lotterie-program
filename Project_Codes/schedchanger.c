#include <linux/schedull.h>
#include <stdio.h>
#include <unistd.h>
main(){
printf("0 for lottery, else for default: ");
int choice2;
scanf("%d",&choice2);
schedull(choice2);
if(choice2==0){
printf("\nLottery scheduler active\n");
}
else{
printf("\nDefault scheduler active\n");
}
}
