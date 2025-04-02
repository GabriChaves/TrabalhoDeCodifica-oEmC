#include <stdio.h>

int main(){
    float a;
    int positivo=0, negativo=0;
    
    printf("Insira cinco valores qualquer e aperte ENTER: ");
    
    for(int i=0; i==i; i++){
        if(i==5){
          break;  
        }
        scanf("%f", &a);
        if(a>0){
            positivo++;
        }else{
            negativo++;
        }
    }
    
    printf("Existe %d números negativos!", negativo);
    
    return 0;
}