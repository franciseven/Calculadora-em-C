//UTILIZAÇÃO DE ALGUMAS BIBLIOTECAS DA LINGUAGEM C
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14159265359

int main(void) {

    //DECLARAÇÃO DE VARIÁVEIS
    float resultado1[3], resultado2[1], resultado3[1], numero2[1], numero3[1], numero4[1];
    char operacao;

    //DECLARAÇÃO DA LINGUAGEM DO PROGRAMA COMO PORTUGUÊS
    setlocale(LC_ALL, "Portuguese");

    //PRIMEIRO NÚMERO DIGITADO PELO USUÁRIO
    printf("Numero: ");
    scanf("%f", &resultado1[0]);

    //LAÇO DE REPETIÇÃO COM O MENU ATÉ O USUÁRIO DECIDIR SAIR
    while (operacao != 's') {

        printf("\nNumero: %f\n", resultado1[0]);
        printf("\nDigite 0 para Somar\n");
        printf("Digite 1 para Subtrair\n");
        printf("Digite 2 para Multiplicar\n");
        printf("Digite 3 para Dividir\n");
        printf("Digite 4 para Exponenciar\n");
        printf("Digite 5 para ver a Raiz Quadrada\n");
        printf("Digite 6 para ver o Fatorial\n");
        printf("Digite 7 para ver as Raizes Reais de uma Equacao do Segundo Grau\n");
        printf("Digite 8 para ver as Raizes Reais de uma Equacao do Terceiro Grau\n");
        printf("Digite 9 para Limpar\n");
        printf("Digite s para Sair\n\n");
        scanf(" %c", &operacao);

        //DESVIO CONDICIONAL CASO O USUÁRIO ESCOLHA A OPÇÃO DE SOMA
        if (operacao == '0') {
            printf("\n\n%f + ", resultado1[0]);
            scanf("%f", &numero2[0]);
            float soma(float num1, float num2);
            resultado2[0] = soma(resultado1[0], numero2[0]);
            resultado1[0] = resultado2[0]; 
        }

        //DESVIO CONDICIONAL CASO O USUÁRIO ESCOLHA A OPÇÃO DE SUBTRAÇÃO
        else if (operacao == '1') {
            printf("\n\n%f - ", resultado1[0]);
            scanf("%f", &numero2[0]);
            float subtrai(float num1, float num2);
            resultado2[0] = subtrai(resultado1[0], numero2[0]);
            resultado1[0] = resultado2[0];
        }

        //DESVIO CONDICIONAL CASO O USUÁRIO ESCOLHA A OPÇÃO DE MULTIPLICAÇÃO
        else if (operacao == '2') {
            printf("\n\n%f x ", resultado1[0]);
            scanf("%f", &numero2[0]);
            float multiplica(float num1, float num2);
            resultado2[0] = multiplica(resultado1[0], numero2[0]);
            resultado1[0] = resultado2[0];
        }

        //DESVIO CONDICIONAL CASO O USUÁRIO ESCOLHA A OPÇÃO DE DIVISÃO
        else if (operacao == '3') {
            printf("\n\n%f / ", resultado1[0]);
            scanf("%f", &numero2[0]);
            float divide(float num1, float num2);
            resultado2[0] = divide(resultado1[0], numero2[0]);
            resultado1[0] = resultado2[0];
        }

        //DESVIO CONDICIONAL CASO O USUÁRIO ESCOLHA A OPÇÃO DE EXPONENCIAÇÃO
        else if (operacao == '4') {
            printf("\n\n%f ^ ", resultado1[0]);
            scanf("%f", &numero2[0]);
            float potencia(float num1, float num2);
            resultado2[0] = potencia(resultado1[0], numero2[0]);
            resultado1[0] = resultado2[0];
        }

        //DESVIO CONDICIONAL CASO O USUÁRIO ESCOLHA A OPÇÃO DE RAÍZ QUADRADA
        else if (operacao == '5') {
            float raiz_quadrada(float numero);
            resultado2[0] = raiz_quadrada(resultado1[0]);
            resultado1[0] = resultado2[0];
        }

        //DESVIO CONDICIONAL CASO O USUÁRIO ESCOLHA A OPÇÃO DE FATORIAL
        else if (operacao == '6') {
            float fatorial(float resultado);
            resultado2[0] = fatorial(resultado1[0]);
            resultado1[0] = resultado2[0];
        }

        //DESVIO CONDICIONAL CASO O USUÁRIO ESCOLHA A OPÇÃO DE VER AS RAÍZES DE UMA EQUAÇÃO DO SEGUNDO GRAU
        else if (operacao == '7') {
            float raizes_segundo_grau(float a, float b, float c);
            printf("Digite um valor para A: ");
            scanf("%f", &resultado1[1]);
            printf("Digite um valor para B: ");
            scanf("%f", &numero2[0]);
            printf("Digite um valor para C: ");
            scanf("%f", &numero3[0]);
            resultado2[0] = raizes_segundo_grau(resultado1[1], numero2[0], numero3[0]);
            printf("", resultado2[0]);
        }

        //DESVIO CONDICIONAL CASO O USUÁRIO ESCOLHA A OPÇÃO DE VER AS RAÍZES DE UMA EQUAÇÃO DO TERCEIRO GRAU
        else if(operacao == '8') {
            float terceirograu(float a, float b, float c, float d);

            printf("Digite um valor para A: ");
            scanf("%f", &resultado1[1]);
            printf("Digite um valor para B: ");
            scanf("%f", &numero2[0]);
            printf("Digite um valor para C: ");
            scanf("%f", &numero3[0]);
            printf("Digite um valor para D: ");
            scanf("%f", &numero4[0]);

            resultado2[0] = terceirograu(resultado1[1], numero2[0], numero3[0], numero4[0]);
            printf("", resultado2[0]);
        }

        //DESVIO CONDICIONAL CASO O USUÁRIO ESCOLHA A OPÇÃO DE LIMPAR
        else if (operacao == '9') {
            resultado1[0] = 0;
            }

            //DESVIO CONDICIONAL CASO O USUÁRIO ESCOLHA A OPÇÃO DE SAIR
            else if(operacao == 's' || operacao == 'S') {
            printf("\n\nFIM");
            exit(0);
        }

        //DESVIO CONDICIONAL CASO O USUÁRIO ESCOLHA ALGUMA OPÇÃO QUE ESTEJA FORA DO MENU
        else if(operacao < 48 || operacao > 57 && operacao != 83 || operacao > 57 && operacao != 115) {
            printf("\nDigite um valor valido\n");
        }
    }

return 0;

}

//FUNÇÃO QUE REALIZA O CÁLCULO DA SOMA
float soma (float num1, float num2) {
    float resultado = num1 + num2;
    return resultado;
}

//FUNÇÃO QUE REALIZA O CÁLCULO DA SUBTRAÇÃO
float subtrai (float num1, float num2) {
    float resultado = num1 - num2;
    return resultado;
}

//FUNÇÃO QUE REALIZA O CÁLCULO DA MULTIPLICAÇÃO
float multiplica (float num1, float num2) {
    float resultado = num1 * num2;
    return resultado;
}

//FUNÇÃO QUE REALIZA O CÁLCULO DA DIVISÃO
float divide (float num1, float num2) {
    if(num2 != 0) {
        float resultado = num1 / num2;
        return resultado;
    }

    else if(num2 == 0) {
        float resultado = printf("\nEntrada Invalida\n");
        return resultado = 0;
    }
}

//FUNÇÃO QUE REALIZA O CÁLCULO DA EXPONENCIAÇÃO
float potencia (float num1, float num2) {
    float a, b, resultado;
    if(num2 == 0) {
        resultado = 1;
        return resultado;
    }
    else if (num2 < 0) {
        resultado = 1 / potencia(num1, num2*-1);
        return resultado;
    }
    else {
        for(a = 2, b = num1; a <= num2; a++, num1*=b) {}
        resultado = num1;
        return resultado;
    }
}

//FUNÇÃO QUE REALIZA O CÁLCULO DA RAÍZ QUADRADA
float raiz_quadrada (float numero) {
    float sqrt, temp, resultado;
    sqrt = numero / 2;
    temp = 0;
    
    if(numero > 0) {
        
        while(sqrt != temp) {
            temp = sqrt;
            sqrt = (numero/temp + temp) / 2;
        }
        resultado = sqrt;

        return resultado;
    }

    else if(numero == 0 || numero < 0) {
        return resultado = 0;
    }
}

//FUNÇÃO QUE REALIZA O CÁLCULO DA FATORAÇÃO
float fatorial (float resultado) {
    float contagem, fatorial;
    contagem = resultado;
    fatorial = 1;
    
    if(resultado > 0) {
        while(contagem > 0) {
            fatorial*=contagem;
            contagem--;
        }
        return fatorial;
    }

    else if(resultado < 0) {
        resultado = printf("\nEntrada Invalida\n");
        return resultado = 0;
    }

    else if(resultado == 0) {
        return resultado = 1;
    }
}

//FUNÇÃO QUE REALIZA O CÁLCULO DA EXPONENCIAÇÃO DE UM NÚMERO POSITIVO E NEGATIVO COM EXPOENTE FRACIONÁRIO
float potencia_exata(float base, float numerador_expoente, float denominador_expoente) {
    float c, p, x, y, z, resultado;
    x = 1;
    z = numerador_expoente;

    if(base < 0) {
        base = base * -1;
        while (z > 0) {
            z = z - 1;
            x = x * base;
        }
        p = 0;
        y = 0;
        while (y < x) {
            p = p + 0.000001;
            c = 0;
            y = 1;
            while (c < denominador_expoente) {
                c = c + 1;
                y = y * p;
            }
        }
        resultado = p * -1;
    }
    else if(base > 0) {
        while (z > 0) {
            z = z - 1;
            x = x * base;
        }
        p = 0;
        y = 0;
        while (y < x) {
            p = p + 0.000001;
            c = 0;
            y = 1;
            while (c < denominador_expoente) {
                c = c + 1;
                y = y * p;
            }
        }
        resultado = p;
    }
    
    else if(base == 0) {
        resultado = 0;
    }

    return resultado;
}

//FUNÇÃO QUE REALIZA O CÁLCULO DA RAÍZ CÚBICA
float raiz_cubica(float numero) {
    float resultado;
    resultado = potencia_exata(numero, 1, 3);
    return resultado;
}

//FUNÇÃO QUE REALIZA O CÁLCULO DO VALOR ABSOLUTO
float valor_absoluto(float numero) {
    float resultado;
    if(numero < 0) {
        resultado = numero * -1;
    }
    else {
        resultado = numero;
    }

    return resultado;
}

//FUNÇÃO QUE REALIZA O CÁLCULO PARA EXIBIR AS RAÍZES DE UMA EQUAÇÃO DO SEGUNDO GRAU
float raizes_segundo_grau (float a, float b, float c) {
    float delta, x1, x2, get1, get2;

    delta = b * b - 4 * a * c;
    x1 = (-b + raiz_quadrada(delta)) / (2 * a);
    x2 = (-b - raiz_quadrada(delta)) / (2 * a);
    if (delta > 0) {
        get1 = printf("\na primeira raiz vale %.2f\n", x1);
        get2 = printf("a segunda raiz vale %.2f\n\n", x2);
        return get1 && get2;
    }

    if (delta == 0) {
        get1 = printf("\na unica raiz vale %.2f\n\n", x1);
        return get1;
    }

    if (delta < 0) {
        get1 = printf("\nnao existe raiz real para essa equacao\n\n");
        return get1;
    }
}

//FUNÇÃO QUE REALIZA O CÁLCULO PARA EXIBIR AS RAÍZES DE UMA EQUAÇÃO DO TERCEIRO GRAU
float terceirograu(float a, float b, float c, float d) {
    static float res[5];
    float A, B, C, q, r, y1, rho, theta, delta, delta2;
    float imPart, realPart, gets1, gets2, gets3;
    A = b / a;
    B = c / a;
    C = d / a;
    r = B - A * A / 3;
    q = C + 2 * A * A * A / 27 - A * B / 3;
    delta = q * q / 4 + r * r * r / 27;
    if (delta >= 0) {
        y1 = raiz_cubica(-q / 2 + raiz_quadrada(delta)) + raiz_cubica(-q / 2 - raiz_quadrada(delta));
        res[0] = (y1 - A / 3);
        delta2 = -3 * y1 * y1 - 4 * r;

        if (delta2 >= 0) {
            res[1] = -y1 + raiz_quadrada(delta2) /2 -A / 3;
            res[2] = -y1 - raiz_quadrada(delta2) /2 -A / 3;
        }
        else {
            realPart = (-1 * y1) / 2;
            res[3] = imPart =

            raiz_quadrada(valor_absoluto(delta2)) / 2.0;
            res[1]= (realPart - (A / 3));
            res[2] = (realPart - (A / 3));
        }
    }
    else {
        rho = raiz_quadrada((q * q / 4) + (delta));
        theta = acos((-1 * q) / (2 * rho));
        res[0] = (2 * (raiz_cubica(rho)) / cos(theta / 3)) -

        (A / 3);

        res[1] = (2 * (raiz_cubica(rho)) * (cos((theta + 2) *

        PI) / 3)) - (A / 3);

        res[2] = (2 * (raiz_cubica(rho)) * (cos((theta + 4) *

        PI) / 3)) - (A / 3);
    }

    gets1 = printf("\nAs raizes disponiveis para essa equacao valem: %f\n\n", *res);
    return gets1;
}