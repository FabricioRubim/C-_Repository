#include <bits/stdc++.h>
// movimento da camera
    int cam_movementX = 2;
    int cam_movementY = -2;
// movimento do player
    int player_movementX = 2;
    int player_movementY = -2;
// player hp
    int playerHP = 20;
// Player damage
    int playerDamage = 5;
int main(){
    std::string enemy = "Zombie";
    int zombieHP = 10;
    int damageZombie = 2;

    if(playerHP && damageZombie){
        playerHP -= 2;
        playerHP;
        std::cout  << "HP do player " << playerHP << std::endl;
    }
    else{
        std::cout << "Ataque bloqueado";
    }

    if(playerDamage && zombieHP)
    {
        zombieHP -= 2;
        zombieHP;
        std::cout << "HP do zombie " << zombieHP << std::endl;
    }
    else{
        std::cout << "Zombie desviou";
    }
    return 0;
}