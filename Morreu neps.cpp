#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Personagem {
    char nome[50];
    int ataque;
    int defesa;
    int vida;
        
    //Crie um método que determina se o personagem morreu ou não após receber o golpe.

    bool sobreviveu(int danoRecebido){

      int danoReal = danoRecebido - defesa;

      if(danoReal < 0)
        danoReal = 0;

      return (vida - danoReal) > 0;

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
} 