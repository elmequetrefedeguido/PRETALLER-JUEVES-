#include<stdio.h>

void main(){
    int n,num,pares = 0,impares = 0,ceros = 0, primos = 0,divs = 0,aux,i,j,dig;

    printf("Ingrese los numeros a procesar: ");
    scanf("%i",&n);

    for(i=1;i<=n;i++){
        printf("Ingrese el numero %i: ",i);
        scanf("%i",&num);

        aux = num;
        do{
            dig = aux%10;
            aux = aux/10;
            ceros = (dig == 0) ? ceros+1:ceros;
        }while(aux != 0);

        if( (num%2) == 0){
            pares++;
        }else{
            impares++;
        }

        for(j=1;j <= num;j++){
            divs = (num%j)==0 ? divs+1:divs;
        }

        if(divs == 2){
            primos++;
        }

        divs = 0;
        printf("\n");
    }

    printf("Numeros pares: %i \n\nNumeros impares: %i \n\nNumeros primos: %i \n\nCeros: %i \n\n",pares,impares,primos,ceros);
}
