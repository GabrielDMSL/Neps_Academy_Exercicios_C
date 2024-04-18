#include <stdio.h>

class Horario{
public:
    int horas, minutos, segundos;

    Horario(){}

    Horario(int horas, int minutos, int segundos ){
        this->horas = horas;
        this->minutos = minutos;
        this->segundos = segundos;
    }

    //TODO: Implementar o operador de adição.
    Horario operator + (Horario b){
        Horario c;

      int totalSegundosA = (this->horas*3600) + (this->minutos*60) + (this->segundos);
      int totalSegundosB = (b.horas*3600) + (b.minutos*60) + (b.segundos);
      int totalSegundosC = totalSegundosA + totalSegundosB;

      c.horas = (totalSegundosC / 3600) % 24;
      c.minutos = (totalSegundosC / 60) % 60;
      c.segundos = (totalSegundosC) % 60;

      return c;
    }

    //TODO: Implementar o operador de subtração.
    Horario operator - (Horario b){
        Horario c;

        int totalSegundosA = (this->horas*3600) + (this->minutos*60) + (this->segundos);
        int totalSegundosB = (b.horas*3600) + (b.minutos*60) + (b.segundos);
        int totalSegundosC = totalSegundosA - totalSegundosB;
        
        if(totalSegundosC < 0)
        totalSegundosC = (3600*23 + 60*59 + 60) - (-1 * totalSegundosC);

        c.horas = (totalSegundosC / 3600) % 24;
        c.minutos = (totalSegundosC / 60) % 60;
        c.segundos = (totalSegundosC) % 60;

      return c;
    }

};


int main(){
    Horario a, b, c;
    char op;

    scanf("%d:%d:%d", &a.horas, &a.minutos, &a.segundos);
    scanf("%d:%d:%d", &b.horas, &b.minutos, &b.segundos);
    scanf(" %c", &op);

    if(op == 'A'){
        c = a + b;
    } else if(op == 'S'){
        c = a - b;
    }

    printf("%02d:%02d:%02d\n", c.horas, c.minutos, c.segundos);

}
