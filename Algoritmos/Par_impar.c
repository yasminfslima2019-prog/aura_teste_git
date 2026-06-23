#include<studio.h>

int epar(int numero){
    if ( numero % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int resultado;

    resultado = epar(5);

    if (resultado == 1){
        printf("Número PAR");
    }else{
        printf("Número Ímpar");
    }
    return 0;
}