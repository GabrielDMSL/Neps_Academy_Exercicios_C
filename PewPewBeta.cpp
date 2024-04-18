#include <iostream>
#include <locale.h>

class Enemy {
    int id;
    int x;
    int y;
    bool alive;

public:
    Enemy(int id, int x, int y, bool alive) {
        this->id = id;
        this->x = x;
        this->y = y;
        this->alive = alive;
    }

    bool was_hit(int x, int y) {
        if (this->x == x && this->y == y && this->alive) {
            this->alive = false;
            return true;
        }
        return false;
    }
};

class Phase {
    Enemy** enemies;
    int quantity_enemies;
    int points;
    int ammunition;

public:
    Phase(int quantity_enemies, int ammunition) {
        this->enemies = new Enemy*[quantity_enemies];
        this->quantity_enemies = quantity_enemies;
        this->points = 0;
        this->ammunition = ammunition;
    }

    void initialize_enemies() {
        for (int i = 0; i < this->quantity_enemies; i++) {
            int x, y;
            std::cin >> x >> y;
            this->enemies[i] = new Enemy(i, x, y, true);
        }
    }

    void play(int T) {
        for (int i = 0; i < T; i++) {
            if (this->ammunition > 0) {
                int x, y;
                std::cin >> x >> y;
                for (int j = 0; j < this->quantity_enemies; j++) {
                    if (this->enemies[j]->was_hit(x, y)) {
                        this->points += 10;
                    }
                }
                this->ammunition--;
            }
        }
    }

    void print_report() {
        std::cout << "Relatorio da Fase" << std::endl;
        std::cout << "Pontuacao: " << this->points << std::endl;
        std::cout << "Municao: " << this->ammunition << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "");
    int N, M;
    std::cin >> N >> M;
    Phase phase(N, M);
    phase.initialize_enemies();
    int T;
    std::cin >> T;
    phase.play(T);
    phase.print_report();
    return 0;
}


