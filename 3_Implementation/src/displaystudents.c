/**
 * @file displaystudents.c
 * @author arpitha s kori
 * @brief This function displays the students who have registered to hostel
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "hostel.h"

void displayStudent(struct student *s){
    for(int i=0;i<count;i++)
    {
       printf("\n Student ID = %d",s[i].studentId);
        printf("\n Student Name = %s",s[i].studentName);
        printf("\n Student age = %d",s[i].age);
        printf("\n Student contact number= %d",s[i].studentContact);
        printf("\n Parent contact number = %d",s[i].parentContact);
        printf("\n Student native place = %s",s[i].studentNative);
        if(s[i].studentMessSubscription.subscriptionToMess){
            printf("\n Subscription to mess = Yes");
        }else{
            printf("\n Subscription to mess = No");
        }
    }

}