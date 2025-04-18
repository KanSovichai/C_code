//struct is used to store many info for an object
#include<stdio.h>
struct User{
    char UserName[30];
    int age,pass;
};
int main(){
    struct User user1 = {"Kan Sovichai",20,12345};
    printf("User Name: %s\nAge: %d\nPass: %d",user1.UserName,user1.age,user1.pass);
    

    return 0;
}