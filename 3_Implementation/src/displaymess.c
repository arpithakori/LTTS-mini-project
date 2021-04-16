/**
 * @file displaymess.c
 * @author arpitha s kori
 * @brief This function display the students who have opted for mess
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "hostel.h"

void displayMessStudent(struct student *s)
{
    for(int k=0;k<count;k++)
    {
        if(s[k].studentMessSubscription.subscriptionToMess)
        {
        printf("\n Student ID = %d",s[k].studentId);
        printf("\n Student Name = %s",s[k].studentName);
        printf("\n Student age = %d",s[k].age);
        printf("\n Student contact number= %d",s[k].studentContact);
        printf("\n Parent contact number = %d",s[k].parentContact);
        printf("\n Student native place = %s",s[k].studentNative);
        printf("\n Number of months = %d",s[k].studentMessSubscription.monthsOfMessSubscription);
        }

    }
}