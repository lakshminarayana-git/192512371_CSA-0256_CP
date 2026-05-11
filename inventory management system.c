#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

void addProduct();
void viewProducts();
void searchProduct();
void updateProduct();
void deleteProduct();
void generateBill();

int main()
{
    int choice;

    while (1)
    {
        printf("\n=====================================");
        printf("\n INVENTORY MANAGEMENT SYSTEM");
        printf("\n=====================================");
        printf("\n1. Add Product");
        printf("\n2. View Products");
        printf("\n3. Search Product");
        printf("\n4. Update Product");
        printf("\n5. Delete Product");
        printf("\n6. Generate Bill");
        printf("\n7. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addProduct();
            break;

        case 2:
            viewProducts();
            break;

        case 3:
            searchProduct();
            break;

        case 4:
            updateProduct();
            break;

        case 5:
            deleteProduct();
            break;

        case 6:
            generateBill();
            break;

        case 7:
            printf("\nExiting Program...\n");
            exit(0);

        default:
            printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}

void addProduct()
{
    FILE *fp;
    struct Product p;

    fp = fopen("products.txt", "ab");

    printf("\nEnter Product ID: ");
    scanf("%d", &p.id);

    printf("Enter Product Name: ");
    scanf("%s", p.name);

    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);

    printf("Enter Price: ");
    scanf("%f", &p.price);

    fwrite(&p, sizeof(p), 1, fp);

    fclose(fp);

    printf("\nProduct Added Successfully!\n");
}

void viewProducts()
{
    FILE *fp;
    struct Product p;

    fp = fopen("products.txt", "rb");

    if (fp == NULL)
    {
        printf("\nNo Products Found!\n");
        return;
    }

    printf("\n========================================");
    printf("\nID\tName\tQty\tPrice");
    printf("\n========================================\n");

    while (fread(&p, sizeof(p), 1, fp))
    {
        printf("%d\t%s\t%d\t%.2f\n",
               p.id, p.name, p.quantity, p.price);
    }

    fclose(fp);
}

void searchProduct()
{
    FILE *fp;
    struct Product p;
    int id, found = 0;

    fp = fopen("products.txt", "rb");

    printf("\nEnter Product ID to Search: ");
    scanf("%d", &id);

    while (fread(&p, sizeof(p), 1, fp))
    {
        if (p.id == id)
        {
            printf("\nProduct Found!");
            printf("\nID: %d", p.id);
            printf("\nName: %s", p.name);
            printf("\nQuantity: %d", p.quantity);
            printf("\nPrice: %.2f\n", p.price);

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nProduct Not Found!\n");
    }

    fclose(fp);
}

void updateProduct()
{
    FILE *fp;
    FILE *temp;

    struct Product p;
    int id, found = 0;

    fp = fopen("products.txt", "rb");
    temp = fopen("temp.txt", "wb");

    printf("\nEnter Product ID to Update: ");
    scanf("%d", &id);

    while (fread(&p, sizeof(p), 1, fp))
    {
        if (p.id == id)
        {
            printf("\nEnter New Quantity: ");
            scanf("%d", &p.quantity);

            printf("Enter New Price: ");
            scanf("%f", &p.price);

            found = 1;
        }

        fwrite(&p, sizeof(p), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("products.txt");
    rename("temp.txt", "products.txt");

    if (found)
        printf("\nProduct Updated Successfully!\n");
    else
        printf("\nProduct Not Found!\n");
}

void deleteProduct()
{
    FILE *fp;
    FILE *temp;

    struct Product p;
    int id, found = 0;

    fp = fopen("products.txt", "rb");
    temp = fopen("temp.txt", "wb");

    printf("\nEnter Product ID to Delete: ");
    scanf("%d", &id);

    while (fread(&p, sizeof(p), 1, fp))
    {
        if (p.id == id)
        {
            found = 1;
            continue;
        }

        fwrite(&p, sizeof(p), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("products.txt");
    rename("temp.txt", "products.txt");

    if (found)
        printf("\nProduct Deleted Successfully!\n");
    else
        printf("\nProduct Not Found!\n");
}

void generateBill()
{
    FILE *fp;
    FILE *temp;

    struct Product p;

    int id, qty, found = 0;
    float total;

    fp = fopen("products.txt", "rb");
    temp = fopen("temp.txt", "wb");

    printf("\nEnter Product ID: ");
    scanf("%d", &id);

    printf("Enter Purchase Quantity: ");
    scanf("%d", &qty);

    while (fread(&p, sizeof(p), 1, fp))
    {
        if (p.id == id)
        {
            found = 1;

            if (p.quantity >= qty)
            {
                total = qty * p.price;

                p.quantity -= qty;

                printf("\n========== BILL ==========");
                printf("\nProduct Name : %s", p.name);
                printf("\nPrice        : %.2f", p.price);
                printf("\nQuantity     : %d", qty);
                printf("\nTotal Amount : %.2f", total);
                printf("\n==========================\n");
            }
            else
            {
                printf("\nInsufficient Stock!\n");
            }
        }

        fwrite(&p, sizeof(p), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("products.txt");
    rename("temp.txt", "products.txt");

    if (!found)
    {
        printf("\nProduct Not Found!\n");
    }
}
