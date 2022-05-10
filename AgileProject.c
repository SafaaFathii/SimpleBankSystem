#include <stdio.h>
#include <string.h>
struct BankAccount
{
    char fullName[50];
    char fullAddress[50];
    long nationalID;
    int age;
    long bankAccountID;
    char guardien[50];
    long gNationalID;
    char accountStatus[50];
    int balance;
    char password[50];
    struct BankAccount *next;
}account;

typedef struct BankAccount *client;

//Create new Client
client createClient(){
    client temp; 
    temp = (client)malloc(sizeof(struct BankAccount));
    temp->next = NULL;
    return temp;
}

//Add new Client to list
client addClient(client head,char *fullName,char *fullAddress, long nationalID, int age,long bankAccountID,char *guardien,long gNationalID,char *accountStatus,int balance,char *password){
    client temp,p;
    temp = createClient();
    temp->fullName = fullName;
    temp->fullAddress = fullAddress;
    temp->nationalID = nationalID
    temp->age = age
    temp->bankAccountID = bankAccountID
    temp->guardien = guardien
    temp->gNationalID = gNationalID
    temp->accountStatus = accountStatus
    temp->balance = balance
    temp->password = password
    if(head == NULL){
        head = temp;  
    }
    else{
        p  = head;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = temp;
    }
    return head;
}


int main()
{
    printf("Add new account");
    


    return 0;
}