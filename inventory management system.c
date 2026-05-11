#include<stdio.h>
#include<string.h>

struct Product
{
    int id;
    char name[20];
    int quantity;
    float price;
};

int main()
{
    struct Product p[10];
    int n = 0, i, choice, searchId;
    float total;

    printf("===== INVENTORY MANAGEMENT SYSTEM =====\n");

    while(1)
    {
        printf("\n\n===== MENU =====");
        printf("\n1. Add Products");
        printf("\n2. Display Products");
        printf("\n3. Search Product");
        printf("\n4. Update Product");
        printf("\n5. Delete Product");
        printf("\n6. Billing");
        printf("\n7. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            // ADD PRODUCTS
            case 1:

                printf("\nHow Many Products to Add: ");
                scanf("%d", &n);

                for(i=0; i<n; i++)
                {
                    printf("\nEnter Product %d Details\n", i+1);

                    printf("Product ID: ");
                    scanf("%d", &p[i].id);

                    printf("Product Name: ");
                    scanf("%s", p[i].name);

                    printf("Quantity: ");
                    scanf("%d", &p[i].quantity);

                    printf("Price: ");
                    scanf("%f", &p[i].price);
                }

                printf("\nProducts Added Successfully!");
                break;

            // DISPLAY PRODUCTS
            case 2:

                printf("\nID\t  NAME\tQTY\tPRICE\n");

                for(i=0; i<n; i++)
                {
                    printf("%d\t%s\t%d\t%.2f\n",
                           p[i].id,
                           p[i].name,
                           p[i].quantity,
                           p[i].price);
                }

                break;

            // SEARCH PRODUCT
            case 3:

                printf("\nEnter Product ID to Search: ");
                scanf("%d", &searchId);

                for(i=0; i<n; i++)
                {
                    if(p[i].id == searchId)
                    {
                        printf("\nProduct Found");
                        printf("\nName: %s", p[i].name);
                        printf("\nQuantity: %d", p[i].quantity);
                        printf("\nPrice: %.2f\n", p[i].price);
                    }
                }

                break;

            // UPDATE PRODUCT
            case 4:

                printf("\nEnter Product ID to Update: ");
                scanf("%d", &searchId);

                for(i=0; i<n; i++)
                {
                    if(p[i].id == searchId)
                    {
                        printf("\nEnter New Product Name: ");
                        scanf("%s", p[i].name);

                        printf("Enter New Quantity: ");
                        scanf("%d", &p[i].quantity);

                        printf("Enter New Price: ");
                        scanf("%f", &p[i].price);

                        printf("\nProduct Updated Successfully!");
                    }
                }

                break;

            // DELETE PRODUCT
            case 5:

                printf("\nEnter Product ID to Delete: ");
                scanf("%d", &searchId);

                for(i=0; i<n; i++)
                {
                    if(p[i].id == searchId)
                    {
                        int j;

                        for(j=i; j<n-1; j++)
                        {
                            p[j] = p[j+1];
                        }

                        n--;

                        printf("\nProduct Deleted Successfully!");
                        break;
                    }
                }

                break;

            // BILLING
            case 6:

                printf("\nEnter Product ID: ");
                scanf("%d", &searchId);

                for(i=0; i<n; i++)
                {
                    if(p[i].id == searchId)
                    {
                        int qty;

                        printf("Enter Quantity: ");
                        scanf("%d", &qty);

                        if(qty <= p[i].quantity)
                        {
                            total = qty * p[i].price;

                            p[i].quantity = p[i].quantity - qty;

                            printf("\n===== BILL =====");
                            printf("\nProduct: %s", p[i].name);
                            printf("\nPrice: %.2f", p[i].price);
                            printf("\nQuantity: %d", qty);
                            printf("\nTotal Amount: %.2f\n", total);
                        }
                        else
                        {
                            printf("\nInsufficient Stock!");
                        }
                    }
                }

                break;

            // EXIT
            case 7:

                printf("\nProgram Ended");
                return 0;

            default:

                printf("\nInvalid Choice");
        }
    }

    return 0;
}
