/**
 * @file displayrooms.c
 * @author arpitha s kori
 * @brief This function displays the rooms available
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "hostel.h"

void displayRooms(){
    int i;
    for(i=0;i<3;i++){
        printf("\t Room %d : %d",i,rooms[i]);
    }

}