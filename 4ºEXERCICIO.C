int main(){
   
    char nivel;
    float salary, aumento;

    scanf("%c", &nivel);
    scanf("%f", &salary);
    
    switch (nivel){
        case 'a':
            aumento = salary * 0.05;
            break;
        case 'b':
            aumento = salary * 0.07;
            break;
        case 'c':
            aumento = salary * 0.08;
            break;
    }
    
    printf("R$ %.2f\n", salary + aumento);

    return 0;
    }
