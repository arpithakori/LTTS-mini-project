# Requirements
## Introduction
“HOSTEL MANAGEMENT SYSTEM” is software developed for managing various activities in the hostel. For the past few years the number of educational institutions are increasing rapidly. Therefore the number of hostels are also increasing for the accommodation of the
students studying in these institutions. And hence there is a lot of strain on the people who are running the hostel and softwares are not usually used in this context. This particular project deals with the problems on managing a hostel and avoids the problems which occur when carried manually

## Research
In most of the places hostel records are maintained manually, where there is a hostel manager who does the task of maintaining a register book where there are columns containg the details of students who have booked rooms and another separate book to maintain the details of the students who have also opted for mess. It becomes very much difficult to manage many such records when the managing staff is very less compared to the students of the hostel.  

## Benefits
Hostel management systems has a set of benefits. Here are few of them:
* Major activities of the manual system is automated, which increases its throughput
* The system is fast, user friendly and interactive
* The information entered is more accurate and clear
* Better data management facility in terms of maintaining files  which are entered in registers manually and stored.
* Reduce the cost of maintenance
## Cost and Features with Time 
The existing online hostel management system costs approximately $9.00 per feature.

## Defining Our System
* Bed allotment  
* Bill generation 
* Local storage of records
* Mess management
  
![Description](https://github.com/arpithakori/LTTS-mini-project/blob/main/1_Requirements/design.png)

### Explanation:
* Hostel Management Application have few inbuilt features like:
    - Registration of student
	- Display student details
	- Display rooms available
	- Display beds available
	- Allot room and beds
	- Calculate fees 
	- Display Fee structure
   

* Since we have assumed that few systems already exists we can say that in future sprints new features could be added.

## SWOT ANALYSIS

![SWOT Analysis](https://github.com/arpithakori/LTTS-mini-project/blob/main/1_Requirements/swot.png)

# 4W&#39;s and 1&#39;H

## Who:
* Hostels of colleges and schools 

## What:
* From the past few years as the education is gaining more importance the number of educational institutes are increasing. The manual management of the hostel records is very tiring and time consuming. 

## When:
* The increase of the educational institutions and the students who travel from different places globally to study.

## Where:
* This issue is in all parts of the world.

## How:
* Any manual wrong entry of the data by the person who is managing the hostel will create a lot of confusion among the institute and students might not get rooms even if there was an empty room.

# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | User shall be able to add new student record | Techincal | Implemented | 
| HR02 | User shall be able to read a student record | Techincal | Implemented |
| HR03 | User shall be able to read all the students record | Techincal | Implemented |
| HR04 | User Shall be able to read the number of rooms available | Technical | Implemented
| HR05 | User shall be able to read the number of beds available | Technical | Implemented
| HR06 | User shall be able to allot rooms and bed to the student | Scenario | Implemented   



##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | New record shall be added by providing all the asked information and the student id should be unique else student record should not be accepted. | HR01 | Implemented |
| LR02 | Reading student data should be possible by printing all the records available | HR02 | Implemented |
