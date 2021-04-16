/**
 * @file main.c
 * @author arpitha s kori
 * @brief This is the main file
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "hostel.h"

int main(){
    
    int ch,num;
    float bill;
    int flag=1;
    printf("\n * WELCOME TO HOSTEL MANAGEMENT SYSTEM * \n");
    printf("\n * Gyanada Hostel, Hubballi * \n");
    while(flag){

    printf("\n Enter choice \n");
    printf("\n1-> Register student details \n2-> Display student details \n3 -> Calculate Bill\n4 -> Display the room and bed availability\n5 -> Display Fee Structure\n6 -> Display Mess Registered Students\n7 -> Exit\n");
    scanf("%d",&ch);
    switch(ch){
            case 1:registerStudent();
                    break;
            case 2: displayStudent(&s);
                    break;
            case 3: calculateBill(&s);
                     break;
            case 4: displayFeeStructure();
                    break;
            case 5: displayMessStudent(&s);
                    break;
            case 6: displayRooms();
                    int r;
                    printf("Enter room number\n");
                    scanf("%d",&r);
                    if(allotBed(&s,r)){
                    printf("room alloted");
                    }
                    else{
                    printf("room is full pls opt a different room");
                    }
                    break;
            case 7: flag=0;
                    printf("EXIT");
                    break;

    }
    }


    return 0;
}