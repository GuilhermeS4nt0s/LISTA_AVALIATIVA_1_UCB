int main(){
   
    char nivel;
    float salary, aumento;

    scanf("%c", &nivel);
    scanf("%f", &salary);
    
    switch (nivel){
        case 'a':
            aumento = salary  + (salary * 0.05);
            printf("R$ %.2f\n", aumento);
            break;
        case 'b':
            aumento = salary  + (salary * 0.07);
            printf("R$ %.2f\n", aumento);
            break;
        case 'c':
            aumento = salary + (salary * 0.08);
            printf("R$ %.2f\n", aumento);
            break;
    }
    
    

    return 0;
    }
