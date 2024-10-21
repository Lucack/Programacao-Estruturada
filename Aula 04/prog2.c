#include <stdio.h>
#include <math.h>

float calculaDistancia(float Px1, float Px2, float Py1, float Py2);

int main()
{
    float x1, y1, x2, y2;
    printf("Digite as coordenadas X e Y do ponto 1:\n");

    scanf("%f %f", &x1, &y1);
    printf("Digite as coordenadas X e Y do ponto 2:\n");
    scanf("%f %f", &x2, &y2);

    printf("A distancia entre os pontos eh: %.2f.", calculaDistancia(x1,x2,y1,y2));

    // chamada ou invocação da função
}

float calculaDistancia(float Px1, float Px2, float Py1, float Py2){
    float difx = Px1 - Px2;
    float dify = Py1 - Py2;
    float dist = sqrt(pow(difx,2)+pow(dify,2));
    return dist;

     //Código da Função
}
