/**
 * @file hostel.h
 * @author arpitha s kori
 * @brief This is a hostel management system
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __FUNCTION_H__
#define __FUNCTION_H__

#include "stdio.h"

static int count=0;
int rooms[3]={0};
const int beds_in_room = 3;

/**
 * @brief This is the structure containing the Mess detials of the hostel
 * 
 */
struct Mess{
	int subscriptionToMess;
	int monthsOfMessSubscription;
};

/**
 * @brief The structure is of students where all the student details are to be considered while registering and other functions
 * 
 */
struct student{
	int studentId;
	char studentName[25];
	int age;
	int roomno;
	int parentContact;
	int studentContact;
	char studentNative[20];
	struct Mess studentMessSubscription;
}s[100];

/**
 * @brief This is a function to register the students
 * 
 */
void registerStudent();

/**
 * @brief This function displays the students who have opted for mess
 * 
 * @param s 
 */
void displayMessStudent(struct student *s);

/**
 * @brief This is the function to display student details
 * 
 * @param s 
 */
void displayStudent(struct student *s);

/**
 * @brief This is the function to calculate the bill
 * 
 * @param s 
 */
void calculateBill(struct student *s);

/**
 * @brief This function displays the fee structure of hostel
 * 
 */
void displayFeeStructure();

/**
 * @brief This checks if the beds are empty in hostel
 * 
 * @param roomno 
 * @return int 
 */
int isBedEmpty(int roomno);

/**
 * @brief This function allots bed for the students
 * 
 * @param s 
 * @param rno 
 * @return int 
 */
int allotBed(struct student *s, int rno);

/**
 * @brief This function displays the available rooms 
 * 
 */
void displayRooms();
#endif