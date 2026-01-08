#include <iostream>
#include <cstdlib>

int game(int maxnum){

    int arvaus;
    int numero;

    int arvaustenmaara=0;

    numero = std::rand() % maxnum+1;

    while(1){
        arvaustenmaara++;

        std::cout << "arvaa luku 1-20" << std::endl;
        std::cin >> arvaus;

        if(arvaus == numero){
            std::cout << "oikein" << std::endl;
            break;
        }

        else if(arvaus > numero){
            std::cout << "liian iso" << std::endl;
        }

        else if(arvaus < numero){
            std::cout << "liian pieni" << std::endl;
        }
    }

    std::cout << "arvasit " << arvaustenmaara << " kertaa" << std::endl;

    return 0;

}

int main()
{
    game(40);
}
