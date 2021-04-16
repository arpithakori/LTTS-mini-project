/**
 * @file calculatebill.c
 * @author arpitha s kori
 * @brief This function calculates the bill of the students
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "hostel.h"

void calculateBill(struct student *s){
    int stu;
    printf("MENU");
    printf("\n1-> Calculate for all students \n2-> Calculate for single student\n");
    scanf("%d",&stu);
    if(stu==1)
    {
         for(int i=0;i<count;i++)
         {
             float totalCost=50000.0; // assuming Rs.50000 as yearly hostel fees
             if(s[i].studentMessSubscription.subscriptionToMess)
                {
                  totalCost+=(3000 * s[i].studentMessSubscription.monthsOfMessSubscription);
                  printf("\nTotal bill of student ID %d = %f",s[i].studentId,totalCost);
                }
             else
                {
                    float totalCost=50000.0;
                    printf("\nTotal bill of student ID %d = %f",s[i].studentId,totalCost);
                }
         }

    }

    if (stu==2)
    {
        int id;
        printf("\nEnter student ID\n");
        scanf("%d",&id);
        for(int j=0;j<count;j++)
        {
            if(s[j].studentId == id)
            {
                float totalCost=50000.0; // assuming Rs.50000 as yearly hostel fees
                if(s[j].studentMessSubscription.subscriptionToMess)
                    {
                         float totalCost=50000.0;
                          totalCost+=(3000 * s[j].studentMessSubscription.monthsOfMessSubscription);
                          printf("\nTotal bill of student ID %d = %f",s[j].studentId,totalCost);
                    }
                else
                    {
                          float totalCost=50000.0;
                          printf("\nTotal bill of student ID %d = %f",s[j].studentId,totalCost);

                    }
            }
        }
    }



}
