//structures of c
#include <string.h>
#include <stdio.h>
struct student {
    char name[7];
    char email[23];
    char reg_no[16];
    int phone_no;
    int ID_no;
    int marks;
    float height;
};

int main() {
    struct student student1;
    
    strcpy(student1.name, "manaseh");
    strcpy(student1.email, "kinyuamanaseh@gmail.com");
    strcpy(student1.reg_no, "CT101/G/25053/24");
    student1.phone_no = 757253688;  // Removed leading 0 as phone_no is int
    student1.ID_no = 42490583;
    student1.marks = 80;
    student1.height = 1.9;
    
    printf("Name: %s \n", student1.name);
    printf("Email: %s \n", student1.email);
    printf("REG no: %s \n", student1.reg_no);
    printf("Phone No: %d \n", student1.phone_no);
    printf("ID No: %d \n", student1.ID_no);
    printf("Marks: %d \n", student1.marks);
    printf("Height: %.1f \n", student1.height);
    
    return 0;
}
