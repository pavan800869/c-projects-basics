#include<stdio.h>
#include<string.h>

void colleges();
int payFee();


int main()
{   
    int fee, clgId;
    int phnum, rank;

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
    colleges();
    char arr[11][30]= {"1 BVRIT","2 CMR",
                "3 Gokaraju Rangaraju ","4 IIIT ","5 MLR ",
                "6 MGIT",
                "7 Malla Reddy College",
                "8 Muffakham Jah College",
                "9 VNR Vignana Jyothi",
                "10 Anurag University",
                "11 KMIT"};
    
    printf("===================================\n");
    printf("Enter your Eamcet Rank: ");
    scanf("%d", &rank);
    int rn = rank;
    int num = phnum;
    printf("===================================\n");
    if(rn<=100000)
    {
        fee = payFee();
    
        
            printf("=============================================================================\n");
            printf("|!|                 College Admission Approval Letter                        \n");
            printf("=============================================================================\n");
            printf("|!|                                                                          \n");
            printf("|!| Date: 26/02/2022                   EAMCET rank:%d\n", &rn);
            printf("|!|                                                                          \n");
            printf("|!|                                                                          \n");
            printf("|!| Name: %s\n", str);
            printf("|!|                                                                          \n");
            printf("|!| Phone Number: %d\n", &num);
            printf("|!|                                                                          \n");
            printf("|!| E-mail: %s\n", mail);
            printf("|!|                                                                          \n");
            printf("|!| \n");
            printf("|!|                                                                          \n");
            printf("|!|                                                                          \n");
            printf("|!|                                                                          \n");
            printf("|!|                                                                          \n");
            printf("|!|                  Submit the Documents in the college                     \n");
            printf("|!|                                                                          \n");
            printf("=============================================================================\n");
            printf("|!|                              THANK YOU                                   \n");
            printf("=============================================================================\n");

    } 
    else{
        printf("Sorry! you are not eligible for online college admission process. Please go to the college and discuss with our representative\n");
    }      
        
      
    
    return 0;
}


void colleges()
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
  
    printf("\n====================================================\n");
   





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
        
    }
    else if(fee>=50000 && fee<=100000){

        printf("Please pay the remaining balance offline %d", 100000-fee);
        
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
    

}

