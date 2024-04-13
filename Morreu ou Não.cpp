#include <stdio.h>
#include <stdlib.h>

struct Personagem {
    char nome[50];
    int ataque;
    int defesa;
    int vida;
        
    //Crie um método que determina se o personagem morreu ou não após receber o golpe.

    int sobreviveu(struct Personagem *personagem, int dano) {
    int dano_real = dano - personagem->defesa;
    if (dano_real > 0) {
        personagem->vida -= dano_real;
    }
    return personagem->vida > 0;
    }
};

int main(){
    Personagem personagem;

    int dano;

    scanf("%s", &personagem.nome);
    scanf("%d", &personagem.ataque);
    scanf("%d", &personagem.defesa);
    scanf("%d", &personagem.vida);

    scanf("%d", &dano);

    if(personagem.sobreviveu(dano)){
        printf("%s sobreviveu!!!", personagem.nome);
    }else{
        printf("%s morreu :(", personagem.nome);
    }
    return 0;
}