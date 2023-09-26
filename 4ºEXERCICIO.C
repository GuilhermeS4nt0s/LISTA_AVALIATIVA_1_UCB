int main(){
   
    char nivel;
    float salario, aumento;

    scanf("%c", &nivel);
    scanf("%f", &salario);
    
    switch (nivel){
        case 'a':
            aumento = salario * 0.05;
            break;
        case 'b':
            aumento = salario * 0.07;
            break;
        case 'c':
            aumento = salario * 0.08;
            break;
    }
    
    printf("R$ %.2f\n", salario + aumento);

    return 0;
    }
