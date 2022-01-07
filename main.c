#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  //atoi atof

    int i, N, sum=0;
    int *a; // argv <-- a

    N=argc-1;
    a=(int*) malloc (sizeof(int)*N);

    for (i=1; i<argc; i++){

      //printf("argv %d = %s\n", i, argv[i]);
      //printf("argv %d = %d\n", i, atoi(argv[i]));
      a[i-1]=atoi(argv[i]);
      if (a[i-1]%2!=0){

        printf("argv %d = %d\n", i, a[i-1]);
        sum+=a[i-1];
      }
      

    }
    printf("SUM = %d\n", sum);

}
