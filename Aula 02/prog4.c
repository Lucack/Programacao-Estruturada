#include <stdio.h>


int main()
{
    printf("Digite valores positivos ou -1 para sair:\n");
    int num=0;
    
    double sum = 0;
    double count=0;

    do {
        double result;

        scanf("%d", &num);
        if (num != -1){
            sum += num;
        count++;
        
        } else {
            result = sum/count;
            printf("A média é: %f", result );

        }
        
        
        //printf("%d %d %d %f\n",count, num, sum,result);
        
      
        
    } while (num != -1);
    

    
}