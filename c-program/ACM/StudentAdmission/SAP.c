#include <stdio.h>

void getDetails();
void colleges();
void payFee();

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

    
    colleges();
    getDetails();
    printf("Enter the college id you want to apply for\n");
    scanf("%d", &clgId);
    while(clgId==0)
    {
        printf("correct input");
        break;
    }
    
    printf("");
    
    return 0;
}



void colleges()
{   
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


void getDetails()
{
    char str[20], mail[50];
    int phnum;


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
    fgets(mail, sizeof(mail), stdin);
    printf("===================================\n");


    
}

void payFee(int a)
{

}
