



#include<stdio.h>
#include<string.h>


int main(){

  //array declaration to describe the maximum sizes of the arrays 
    char wild[5][10];
    char domestic[5][10];
    char merged[10][10];// this is the array that is going to hold the merged data.. 

    //prompt the user to enter the animals less than the size of the array

    for(int i=0; i<5; i++){   //the loop will run less than 5 times. i<5 helps to limit the number of times the loop runs, i=0 is for initialisation, i++ is to incrememnt i for every successful run  
        printf("Please enter 5 wild animal No.%d : ", (i+1));
        scanf("%s", &wild[i]); //this is to copy the inputs entered by the user as the ith wild animal (wild[i])
    }

   
    for(int i=0; i<5; i++){
        printf("Please enter domestic animal No.%d : ", (i+1));
        scanf("%s", &domestic[i]);
    }

 
    for(int i=0; i<5; i++){
        strcpy(merged[i], wild[i]);//this copies the data from the variable called wild to another variable called merge. strcopy ==> string copy 
    }

     // copying from domestic to merged
    for(int i=0; i<5; i++){
        strcpy(merged[i], domestic[i]);
    }

   //Printing the merged array
    printf("merged array \n");
    for(int i=0; i<10; i++){
        printf("%s\n", merged[i]);
    }

    return 0;
}
