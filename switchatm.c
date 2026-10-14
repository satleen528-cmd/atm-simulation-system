# include <stdio.h>
void checkbalance(float *balance){
    printf("your  current balance is %f",*balance);
}
void deposit(float  *balance,float amount){
    *balance=*balance+amount;
    printf("the balance amt after the deposit %f",*balance);
}
void withdraw(float *balance,float amount){
    if (amount>*balance){
        printf("insufficient balance!!!");
    }
    else{
        *balance=*balance-amount;
        printf("the balance amount %f",*balance);
    }
}
int main(){
    float balance=10000.00;
    float amount;
    char  ch;
    printf("type 1 for balance");
    printf("type 2 for deposit");
    printf("type 3 for withdraw");
    printf("type 4 to  exit");
    scanf(" %c",&ch);
    switch(ch){
        case '1':{
            checkbalance(&balance);
            break;
        }
        case '2':{
            printf("enter the amount to deposit");
            scanf("%f",&amount);
            deposit(&balance,amount);
            break;
        }
        case '3':{
            printf("enter the amount to withdraw");
            scanf("%f",&amount);
            withdraw(&balance,amount);
            break;
        }
        case '4':{
            printf("thanks for using my  ATM!!");
            break;
        }
        default:{
            printf("enter the appropriate number");
            break;
        }
    }
    return 0;
}