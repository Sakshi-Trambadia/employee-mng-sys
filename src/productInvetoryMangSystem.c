#include<stdio.h>
#include<conio.h>

//-----PRODUCT INVENTORY MANAGMENT SYSTEM---------
//AUTHOR:- SAKSHI TRAMBADIA
//DOC:- 21-01-2026

struct product{
    int pid;
    char name[50];
    char category[30];
    int quantity;
    float price;
    int active;
};

#define SIZE 1000
struct product precords[SIZE];
int i=0;
int id=1;
struct product precords[SIZE];


void addProduct()

{
	struct product p;
	if(i==SIZE)
	{
		printf("\nProduct List are full.");
		return;
	}

	p.pid = id;
	//flushall();
	printf("\nEnter Name of product : ");
	scanf("%c",&p.name);
	printf("\nEnter category of product : ");
	scanf("%c",&p.category);
	printf("\nEnter qunatity of product : ");
	scanf("%d",&p.quantity);
    printf("\nEnter the price of product: ");
    scanf("%f",&p.price);


	//p.active = 1;

	// s-- data---ready
	precords[i]  = p;

	i++;
	id++;
	printf("\nProduct record are succssfully Inserted ...!");
}

void displayAllProduct()
{
   int j;
	if(j == 0)
	{
		printf("\nList of Product records are empty");
		return ;
	}
	for(i=0;j<i;j++)
	{
		if(precords[j].active == 1)
		{
			printStudent(precords[j]);
		}
	}
}

void searchProductById(){
    
	int k,pid,flag=1;
	printf("\nEnter pid Which you want to Search product record: ");
	scanf("%d",&id);

	for(k=0;k<i;k++)
	{
		if(precords[k].pid== pid)
		{
			printStudent(precords[k]);
			flag=0;
			break;
		}
	}
	if(flag)
	{
		printf("\nproduct pid : %d is not found in product records.",pid);
	}

}

void sortProductByPrice(){



	struct product temp;
	int i,j;
	if(i == 0)
	{
		printf("\nList of Product records are empty");
		return ;
	}
	for(i=0;i<id;i++)
	{
		for(j=(i+1);j<id;j++)
		{
			// sorting By price wise
			if(precords[i].price < precords[j].price)
			{
				temp = precords[i];
				precords[i] = precords[j];
				precords[j] = temp;
			}
		}
	}
	printf("\nProduct records are successfully sorted by price wise.");
	displayProuct();
    }


 void updateProductById(){
 
    
	int i,pid,flag=1;
	printf("\nEnter pid Which you want to Update product record: ");
	scanf("%d",&pid);
	for(i=0;i<id;i++)
	{
		if(precords[i].pid == pid)
		{
			// update-->name std marks
			//flushall();
			printf("\nEnter Name : ");
			scanf("%c",&precords[i].name);
			printf("\nEnter quantity  : ");
			scanf("%d",&precords[i].quantity);
			printf("\nEnter category : ");
			scanf("%c",&precords[i].category);
            printf("\nEnter price : ");
			scanf("%f",&precords[i].price);
			flag=0;
			printf("\nProduct pid : %d is Updated from list.",precords[i].pid);
			break;
		}
	}
	if(flag)
	{
		printf("\nProduct pid : %d is not found in Product records.",pid);
	}
}

 

 void deleteProucttbyId()
{
	int i,pid,flag=1;
	printf("\nEnter pid Which you want to Delete product record: ");
	scanf("%d",&pid);

	for(i=0;i<id;i++)
	{
		if(precords[i].pid == pid)
		{
			precords[i].active = 0;
			printf("\nProductt Rno : %d is deleted from list.",precords[i].pid);
			flag=0;
			break;
		}
	}
	if(flag)
	{
		printf("\n product pid : %d is not found in product records.",pid);
	}
}

void main()
{
	
    int i;
    int pass;
    int user;

    for(i = 1; i <= 3; i++)
    {
    
        printf("\nEnter username(no) : ");
        scanf("%d", &user);

        printf("Enter password (number): ");
        scanf("%d", &pass);

        if(user == 111 && pass == 222)
        {
            printf("\nLogin Successful");
            break;
        }
        else
        {
            printf("\nWrong username or password");
        }

        if(i == 3)
        {
            printf("\nAccess Denied");
        }
    }




    
    int choice;
	//clrscr();

	do
	{
		printf("\nEnter below Choice : ");
		printf("\n1) Add Product ");
		printf("\n2) Display all products");
		printf("\n3) Search product By Id");
		printf("\n4) Sort product by price ");
		printf("\n5) Update product by Id");
		printf("\n6) Delete product by id");
		printf("\n7) Exit product Application");
		scanf("%d",&choice);
    

		switch(choice)
		{
			case 1: addProduct();
				break;
        
			case 2: displayAllProducts();
				break;

			case 3: searchProductById();
				break;

			case 4: sortProductByPrice();
				break;

			case 5: updateProductById();
				break;

			case 6: deleteProductById();
				break;

			case 7: printf("\nProduct Application Exit");
				//delay(1000);
				//exit(1);
				break;
        }

    }while(choice!=7);

	getch();

}
    
