#include <stdio.h>

int main() {
    typedef struct student{
        char name, surname;
        int group_num;
        struct exam{
            int day, year;
            char month;
        }; //day, month, year;
    }student, exam;
    char name[50], surname[50], month[50];
    int group, day, year;
    struct student stu_info;
    struct exam ex_info;
    stu_info.name = name;
    stu_info.surname = surname;
    stu_info.group_num = group;
    ex_info.day = day;
    ex_info.month = month;
    ex_info.year = year;
    printf("Enter name, surname and student's group: ");
    scanf("%s %s %d", &name, &surname, &group);
    printf("Enter date of exam: ");
    scanf("%d %s %d", &day, &month, &year);
    printf("Student info: %s %s. Group: %d. \nStudent's exam: %d.%s.%d",
           &name, &surname, group, day, &month, year);


    return 0;
};