#include<stdio.h>
int main(){
    int soldier_ally, tank_ally, plane_ally, missile_ally; 
    int soldier_enemy, tank_enemy, plane_enemy, missile_enemy; 
    int soldier_boost, tank_boost, plane_boost, missile_boost;
    scanf("%i %i %i %i", &soldier_ally, &tank_ally, &plane_ally, &missile_ally);
    scanf("%i %i %i %i", &soldier_enemy, &tank_enemy, &plane_enemy, &missile_enemy);
    scanf("%i %i %i %i", &soldier_boost, &tank_boost, &plane_boost, &missile_boost);
    int soldier_enemy_final = (soldier_enemy+soldier_boost), tank_enemy_final = (tank_enemy+tank_boost), plane_enemy_final = (plane_enemy+plane_boost), missile_enemy_final = (missile_enemy+missile_boost);    
    if ((soldier_ally>soldier_enemy_final && tank_ally>tank_enemy_final && plane_ally>plane_enemy_final && missile_ally>missile_enemy_final) 
    || (soldier_ally>soldier_enemy_final && tank_ally>tank_enemy_final && plane_ally>plane_enemy_final) 
    || (soldier_ally>soldier_enemy_final && tank_ally>tank_enemy_final && missile_ally>missile_enemy_final)
    || (soldier_ally>soldier_enemy_final && plane_ally>plane_enemy_final && missile_ally>missile_enemy_final)
    || (tank_ally>tank_enemy_final && plane_ally>plane_enemy_final && missile_ally>missile_enemy_final))
    {
        printf("Avancar");
    }
    else if ((soldier_ally<soldier_enemy_final && tank_ally<tank_enemy_final && plane_ally<plane_enemy_final && missile_ally<missile_enemy_final) 
    || (soldier_ally<soldier_enemy_final && tank_ally<tank_enemy_final && plane_ally<plane_enemy_final) 
    || (soldier_ally<soldier_enemy_final && tank_ally<tank_enemy_final && missile_ally<missile_enemy_final)
    || (soldier_ally<soldier_enemy_final && plane_ally<plane_enemy_final && missile_ally<missile_enemy_final)
    || (tank_ally<tank_enemy_final && plane_ally<plane_enemy_final && missile_ally<missile_enemy_final))
    {
        printf("Recuar");
    }
    else printf("Permanecer");
    return 0;
}