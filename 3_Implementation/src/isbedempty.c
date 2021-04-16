/**
 * @file isbedempty.c
 * @author arpitha s kori
 * @brief This checks if the bed is empty or not
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "hostel.h"

int isBedEmpty(int roomno){
    if(rooms[roomno]<beds_in_room){
        return 1;
    }
    else{
        return 0;
    }
}