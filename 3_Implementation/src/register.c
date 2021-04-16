/**
 * @file register.c
 * @author arpitha s kori
 * @brief This function registers the student details
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "hostel.h"

void registerStudent(){

        printf("\n Enter studentID: ");
        scanf("%d",&s[count].studentId);
        printf("\n Enter student name: ");
        scanf("%s",s[count].studentName);
        printf("\n Enter age: ");
        scanf("%d",&s[count].age);
        printf("\n Enter room number \n");
        scanf("%d",&s[count].roomno);
        printf("\n Enter student contact number: ");
        scanf("%d",&s[count].studentContact);
        printf("\n Enter parent contact number: ");
        scanf("%d",&s[count].parentContact);
        printf("\n Enter the Native place of the student: ");
        scanf("%s",s[count].studentNative);
        int messChoice;
        printf("\n Subscription to Mess? (Press 1 for YES, and 0 for NO) : \n");
        scanf("%d",&messChoice);
        if(messChoice==1){
            s[count].studentMessSubscription.subscriptionToMess=1;
    }
        else{
            s[count].studentMessSubscription.subscriptionToMess=0;
    }
        if(s[count].studentMessSubscription.subscriptionToMess){
            printf("\n How many months do you want to subscribe for mess ? \n");
            scanf("%d",&s[count].studentMessSubscription.monthsOfMessSubscription);
    }
    count++;


}

