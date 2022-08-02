#include <stdio.h>
struct bank {
    long accn,phno;
    int bal,witdr,depo;
    char name[20];
};
int main()
{
    int n,i,c,w,dep;
    long acn;
    char flag;
    printf("Enter number of customers in bank : ");
    scanf("%d",&n);
    struct bank s[n];
    printf("Enter details of customer\n");
    for(i=0; i<n; i++) {
        printf("Customer %d\n",(i+1));
        printf("Enter account number : ");
        scanf("%ld",&s[i].accn,"\n");
        printf("\nEnter Name : ");
        scanf("%s",s[i].name,"\n");
        printf("\nEnter Phone number : ");
        scanf("%ld",&s[i].phno,"\n");
        printf("\nEnter Balance : ");
        scanf("%d",&s[i].bal,"\n");
    }

    printf("1. Details of customer\n2. Withdraw amount\n3. Deposit amount\nEnter your choice : ");
    scanf("%d",&c);
    switch(c) {
    case 1:
        printf("The details of the customer are\n");
        for(i=0; i<n; i++) {
            printf("Customer %d\n",(i+1));
            printf("Enter account number : ");
            printf("%ld",s[i].accn,"\n");
            printf("\nName : ");
            printf("%s",s[i].name,"\n");
            printf("\nPhone number : ");
            printf("%ld",s[i].phno,"\n");
            printf("\nBalance : ");
            printf("%d",s[i].bal,"\n");
        }
        break;
    case 2:
        printf("Enter account number : ");
        scanf("%ld",&acn);
        printf("Enter withdrawing money : ");
        scanf("%d",&w,"\n");
        for(i=0; i<n; i++) {
            if(s[i].accn==acn) {
                if(s[i].bal>=w) {
                    printf("Withdrawn money : %d\nMoney left in bank : %d",w,(s[i].bal-w));
                } else
                    printf("Over budget");
            }
        }
        break;
    case 3:
        printf("Enter account number : ");
        scanf("%ld",&acn);
        printf("Enter depositing money : ");
        scanf("%d",&dep,"\n");
        for(i=0; i<n; i++) {
            if(s[i].accn==acn) {

                printf("Depositing money : %d\nMoney left in bank : %d",dep,(s[i].bal+dep));

            }
        }
        break;
    default:
        printf("Invalid input sir/madam\n");
    }

    return 0;
}
