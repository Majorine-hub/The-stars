



#include<stdio.h>
#include<string.h>


int main(){

    // Arrays declaration
    char wild[5][10];
    char domestic[5][10];
    char merged[10][10];

    //Accept input for wild animals

    for(int i=0; i<5; i++){
        printf("Please enter wild animal No.%d : ", (i+1));
        scanf("%s", &wild[i]);
    }

    // accepting wild animals from the user
    for(int i=0; i<5; i++){
        printf("Please enter domestic animal No.%d : ", (i+1));
        scanf("%s", &domestic[i]);
    }

  // copying from wild to merged
    for(int i=0; i<5; i++){
        strcpy(merged[i], wild[i]);
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
