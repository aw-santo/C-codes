#include <stdio.h>
#include <string.h>
struct TravelAgencyManager
{
    char Name[34];
    char Driving_License_No[45];
    char Route[47];
    int Kms;
};

int main()
{
    struct TravelAgencyManager D1, D2, D3;
    printf("Enter the details of driver 1:\n");
    
    printf("Enter the name of first driver:\n");
    scanf("%s", &D1.Name);
    
    printf("Enter the DL no. of first driver:\n");
    scanf("%s", &D1.Driving_License_No);
    
    printf("Enter the Route of first driver:\n");
    scanf("%s", &D1.Route);
    
    printf("Enter the Kms of first driver:\n");
    scanf("%d", &D1.Kms);
    
    
    printf("Enter the details of driver 2:\n");
    
    printf("Enter the name of second driver:\n");
    scanf("%s", &D2.Name);
    
    printf("Enter the DL no. of second driver:\n");
    scanf("%s", &D2.Driving_License_No);
    
    printf("Enter the Route of second driver:\n");
    scanf("%s", &D2.Route);
    
    printf("Enter the Kms of second driver:\n");
    scanf("%d", &D2.Kms);
    
    
    printf("Enter the details of driver 3:\n");
    
    printf("Enter the name of third driver:\n");
    scanf("%s", &D3.Name);
    
    printf("Enter the DL no. of third driver:\n");
    scanf("%s", &D3.Driving_License_No);
    
    printf("Enter the Route of third driver:\n");
    scanf("%s", &D3.Route);
    
    printf("Enter the Kms of third driver:\n");
    scanf("%d", &D3.Kms);
    

    printf("******Printing Infos of these drivers:******\n");
    printf("For diver 1:\nName is %s\n",D1.Name);
    printf("DL no. is %s\n",D1.Driving_License_No);
    printf("Route is %s\n",D1.Route);
    printf("Kms is %d\n\n",D1.Kms);
    
    
    printf("For diver 2:\nName is %s\n",D2.Name);
    printf("DL no. is %s\n",D2.Driving_License_No);
    printf("Route is %s\n",D2.Route);
    printf("Kms is %d\n\n",D2.Kms);
    
    
    printf("For diver 3:\nName is %s\n",D3.Name);
    printf("DL no. is %s\n",D3.Driving_License_No);
    printf("Route is %s\n",D3.Route);
    printf("Kms is %d\n",D3.Kms);
    return 0;
}