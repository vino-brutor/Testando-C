//#include stdio.h;


const float pi = 3.1415;

int resultado;

//comentáriooooo 

void main(){
    printf("olá mundo");
    int x = 1, i = 8;
    printf(x + i);
    return 0;
}

void teste(){
    int idade;
    char sexo;

    printf("\ninsira seu sexo e idade:");
    scanf("%c, %s", &sexo, &idade);

}

void perimetro(){
    double raio, perim;

    printf("\nQual o raio da circufêrencia?");
    scanf("%lf", &raio);
    perim = 2*pi*raio;
    printf("\n O perímetro da circufêrencia é: %lf", perim);
}