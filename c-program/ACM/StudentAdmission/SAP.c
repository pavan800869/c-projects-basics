#include<stdio.h>
#include<string.h>

int colleges();
int payFee();
int displayFull(int id, char clgname, char name[20], int number[10], char mail[100], int fee);

int main()
{   
    int fee, clgId;

    printf("=======================Welcome to College Admission Portal==============================\n");
    printf("(|                                                                                      |)\n");
    printf("(|                                                                                      |)\n");
    printf("============These are the steps you need to follow to complete your application===========\n");
    printf("(|                                                                                      |)\n");
    printf("(|         1) Search for colleges                                                       |)\n");
    printf("(|                                                                                      |)\n");
    printf("(|         2) Enter Your Personal Details                                               |)\n");
    printf("(|                                                                                      |)\n");
    printf("(|         3) Apply for the colleges according to your rank and percentage              |)\n");
    printf("(|                                                                                      |)\n");
    printf("(|         4) Pay the fee                                                               |)\n");
    printf("(|                                                                                      |)\n");
    printf("(|         5) Get accepted and join the college                                         |)\n");
    printf("(|                                                                                      |)\n");
    printf("(|                                                                                      |)\n");
    printf("(|                                                                                      |)\n");
    printf("(|                                                                                      |)\n");
    printf("(|                                                                                      |)\n");
    printf("(|                                                                                      |)\n");
    printf("==========================================================================================\n");
    printf("(                                     Thank You                                          )\n");
    printf("==========================================================================================\n");

    
    char str[20], mail[100];
    int phnum[10];

    
    printf("===================================\n");
    printf("Enter Your Full Name: ");
    fgets(str, sizeof(str), stdin);
    printf("===================================\n");
    printf("\n");
    printf("\n");
    printf("===================================\n");
    printf("Enter your phone number: ");
    scanf("%d", &phnum);
    printf("===================================\n");
    printf("\n");
    printf("\n");
    printf("===================================\n");
    printf("Enter Your Email: ");
    scanf("%s", mail);
    printf("===================================\n");
    int clg =  colleges();
    char arr[11][30]= {"1 BVRIT","2 CMR",
                "3 Gokaraju Rangaraju ","4 IIIT ","5 MLR ",
                "6 MGIT",
                "7 Malla Reddy College",
                "8 Muffakham Jah College",
                "9 VNR Vignana Jyothi",
                "10 Anurag University",
                "11 KMIT"};
    char clgName = arr[clg-1];
    fee = payFee();

    if(clg<12)
    {
        payFee();
        switch (clg)
        {
        case 1:
            int d = displayFull(clg, clgName, str[20], phnum[10], mail[100], fee);
            printf("%d", &d);
            break;
        
        default:
            
            break;
        }
    }
    else{
        printf("Please Enter a Valid Id.");
    }
    
    return 0;
}

int displayFull(int clgId, char clgName, char name[20], int number[10], char mail[100], int fee)
{
    printf("=============================================================================\n");
    printf("|!|                 College Admission Approval Letter                        \n");
    printf("=============================================================================\n");
    printf("|!|                                                                          \n");
    printf("|!|                                   %s                                     \n", clgName);
    printf("|!|                                                                          \n");
    printf("|!|                                                                          \n");
    printf("|!|          Name: %s                                                        \n", name);
    printf("|!|                                                                          \n");
    printf("|!|          Phone Number: %d                                                \n", &number);
    printf("|!|                                                                          \n");
    printf("|!|          E-mail: %s                                                      \n", mail);
    printf("|!|                                                                          \n");
    printf("|!|                                                                          \n");
    printf("|!|                                                                          \n");
    printf("|!|                                                                          \n");
    printf("|!|                                                                          \n");
    printf("|!|                                                                          \n");
    printf("|!|                                                                          \n");
    printf("|!|                                                                          \n");
    printf("=============================================================================\n");
    printf("|!|                                                                          \n");
    printf("|!|                                                                          \n");
    printf("=============================================================================\n");
}

int colleges()
{   
    int clgId;

    char arr[11][30]= {"1 BVRIT","2 CMR",
                "3 Gokaraju Rangaraju ","4 IIIT ","5 MLR ",
                "6 MGIT",
                "7 Malla Reddy College",
                "8 Muffakham Jah College",
                "9 VNR Vignana Jyothi",
                "10 Anurag University",
                "11 KMIT"};
    printf("====================================================\n");
    for(int i = 0; i<=11; i++)
    {
        printf("||%s\n", arr[i]);
    }
    
    printf("====================================================\n");
    printf("\n");
    printf("\n");
    printf("====================================================\n");
    printf("Enter the college id you want to apply for\n");
    scanf("%d", &clgId);
    printf("\n%2s", clgId);
    printf("\n====================================================\n");
    return clgId ;


    printf("Pavan kumar");


    // printf("BVRIT Hyderabad College of Engineering for Women\n");
    // printf("CMR College of Engineering and Technology\n");
    // printf("Gokaraju Rangaraju Institute of Engineering and Technology\n");
    // printf("IIIT Hyderabad\n");
    // printf("MLR Institute of Technology\n");
    // printf("Mahatma Gandhi Institute of Technology\n");
    // printf("Malla Reddy College of Engineering and Technology\n");
    // printf("Muffakham Jah College of Engineering and Technology\n");
    // printf("VNR Vignana Jyothi Institute of Engineering and Technology\n");
    // printf("(KMIT) KESHAV MEMORIAL INSTITUTE OF TECHNOLOGY KESHAV MEMORIAL INSTITUTE OF TECHNOLOGY\n")

}


int payFee()
{
    int fee, bln;
    printf("===========================This is a Payment Portal===============================\n");
    printf("\n");
    printf("Initially pay 100000 first online and then pay remaining offline after joining your college\n");
    
    payagain: printf("Please enter the fee amount\n");
    scanf("%d", &fee);
    if (fee<50000)
    {
        printf("Please pay atleast 50000/- to continue your application\n");
        goto payagain;
    }
    else if(fee>=50000 && fee<=100000){
        bln = 100000-fee;
        printf("Please pay the remaining balance offline %d\n", &bln);
    }
    else{
        printf("online payment limit has exceeded, please pay the amount less than 100000\n");
        goto payagain;
    }
    for(int i = 0; i<= 20; i++)
    {
        printf("*\n");
    }
    printf("Yes! Your payment is successfull.\n");
    return bln;

}
