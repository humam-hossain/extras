// 4.(25 pts)Write a structure Product with the following attributes:pName(string), 
// quantity(integer),costprice(float), sellingprice(float).  Now answer the following questions:

// (a)(5 pts)Create an array of structureof arbitrary size and populate the array.  
    // All the information mustbe user inputs.
// (b)(10 pts)Write a function that will takenameandarray of structureas parameter and 
    // return the totalprofit that the shop will incur from that product.  
    // Here,total profit= quantity×(sellingprice -costprice).
// (c)(10 pts)Write a function that takes the structure array as input and 
    // returns a structure variablebest-Productthat contains the product that incurs the most profit.

#include <stdio.h>
#include <string.h>

struct Product
{
    char pName[100];
    int quantity;
    float cost_price;
    float selling_price;
};

float total_profit(char name[], struct Product parr[])
{
    float profit;

    for(int i=0; i<5; i++){
        if(parr[i].pName == name){
            profit = parr[i].quantity * (parr[i].selling_price - parr[i].cost_price);
            break;
        }
    }

    return profit;
}

struct Product b_product(struct Product parr[])
{
    struct Product best_product;
    float best_profit = parr[0].quantity * (parr[0].selling_price - parr[0].cost_price);
    int best_i=0;

    for(int i=1; i<5; i++){
        if(best_profit < (parr[i].quantity * (parr[i].selling_price - parr[i].cost_price))){
            best_profit = parr[i].quantity * (parr[i].selling_price - parr[i].cost_price);
            best_i = i;
        }
    }

    strcpy(best_product.pName, parr[best_i].pName);
    best_product.quantity = parr[best_i].quantity;
    best_product.cost_price = parr[best_i].cost_price;
    best_product.selling_price = parr[best_i].selling_price;

    return best_product;
}

int main()
{
    struct Product parr[5];
    char temp;

    for(int i=0; i<5; i++){
        printf("\n\nProduct Name: ");
        if(i != 0){
            scanf("%c", &temp);
        }
        gets(parr[i].pName);

        printf("Quantity: ");
        scanf("%d", &parr[i].quantity);

        printf("Cost Price: ");
        scanf("%f", &parr[i].cost_price);

        printf("Selling Price: ");
        scanf("%f", &parr[i].selling_price);
    }

    return 0;
}