#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Personagem
{
    char nome[50];
    int ataque;
    int defesa;
    int vida;


    bool sobreviveu(int danoRecebido)
    {

        if (danoRecebido < defesa)
        {
            return false;
        }

        int danoReal = danoRecebido - defesa;

        return (vida - danoReal) > 0;

    }
};

int main()
{
    Personagem personagem;

    int dano;

    scanf("%s", &personagem.nome);
    scanf("%d", &personagem.ataque);
    scanf("%d", &personagem.defesa);
    scanf("%d", &personagem.vida);

    scanf("%d", &dano);

    if (personagem.sobreviveu(dano))
    {
        printf("%s sobreviveu!!!", personagem.nome);
    }
    else
    {
        printf("%s morreu :(", personagem.nome);
    }
}