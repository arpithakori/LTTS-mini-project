#include<stdio.h>

static int count=0;
int rooms[3]={0};
const int beds_in_room = 3;

struct Mess{
	int subscriptionToMess;
	int monthsOfMessSubscription;
};

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

void displayFeeStructure(){
    printf("\n * FEE STRUCTURE OF THE HOSTEL *\n");
    printf("\n");
    printf("\n Details of the hostel room \n");
    printf("\n There are 9 bedrooms all are 2 sharing rooms \n");
    printf("\n Room fees : 30,000 anually \n");
    printf("\n !!!!! No late payments allowed and No EMI !!!!! \n");
    printf("\n Details of Mess \n");
    printf("\n Mess is in the ground floor \n");
    printf("\n Mess Fees : 50,000 anually \n");
    printf("\n !!!!! No outsiders allowed !!!!! \n");


}

int isBedEmpty(int roomno){
    if(rooms[roomno]<beds_in_room){
        return 1;
    }
    else{
        return 0;
    }
}

int allotBed(struct student *s, int rno){
    if(isBedEmpty(rno)){
        s->roomno=rno;
        rooms[rno]++;
        return 1;
    }
    return 0;

}

void displayRooms(){
    int i;
    for(i=0;i<3;i++){
        printf("\t Room %d : %d",i,rooms[i]);
    }

}

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
