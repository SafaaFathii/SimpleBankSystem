#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct BankAccount
{
    char *fullName;
    char *fullAddress;
    long nationalID;
    int age;
    long bankAccountID;
    char *guardien;
    long gNationalID;
    char *accountStatus;
    int balance;
    char *password;
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
    temp->fullName =(char*)malloc(sizeof(char)*(strlen(fullName) + 1));
    strcpy(temp->fullName, fullName);
    //temp->fullName = fullName;
    temp->fullAddress =(char*)malloc(sizeof(char)*(strlen(fullAddress) + 1));
    strcpy(temp->fullAddress, fullAddress);
    //temp->fullAddress = fullAddress;
    temp->nationalID = nationalID;
    temp->age = age;
    temp->bankAccountID = bankAccountID;
    temp->guardien =(char*)malloc(sizeof(char)*(strlen(guardien) + 1));
    strcpy(temp->guardien, guardien);
    //temp->guardien = guardien;
    temp->gNationalID = gNationalID;
    temp->accountStatus =(char*)malloc(sizeof(char)*(strlen(accountStatus) + 1));
    strcpy(temp->accountStatus, accountStatus);
    //temp->accountStatus = accountStatus;
    temp->balance = balance;
    temp->password =(char*)malloc(sizeof(char)*(strlen(password) + 1));
    strcpy(temp->password, password);
    //temp->password = password;
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
    client first = addClient(NULL,"safaaFathii","saadHunnenSt",2025,23,123654,"fathi",15879,"closed",123,"123654");
	printf(" %d",first->nationalID);
    


    return 0;
}