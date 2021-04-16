/**
 * @file allotbed.c
 * @author arpitha s kori
 * @brief This function allots the bed for students
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "hostel.h"

int allotBed(struct student *s, int rno){
    if(isBedEmpty(rno)){
        s->roomno=rno;
        rooms[rno]++;
        return 1;
    }
    return 0;

}