// ALIER PECH EMMANUEL M24B23/039 
//my inventory list
 
#include <stdio.h>

int main() {
   char *item[4]={"water","soda","eggs","bananas"};
   int price[4]={500,1000,700,300};
   int quantity[4]={10,5,24,15};
 //displaying any item in the array  
   printf("%s\n",item[0]);
    printf("%s\n",item[1]);
     printf("%s\n",item[2]);
      printf("%s\n",item[3]);
 //displaying the price and quantity of an item  
   for(int x = 0;x <= 4;x++){
       if(item[x]=="eggs")
      { printf("your price is %d\nand your quantity is %d\nfor the %s\n",price[2],quantity[2],item[2]);}
 
   }
   //updating an item(soda)
  int qut = 8;
  printf("your new quantity is %d for %s\n",qut,item[1]);
  
 //calculating th total price of an item basing on the quantity(bananas)
   int total = price[3] * quantity[3];
   printf("your total price for %s is %d\n",item[3],total);
 //total value of the inventory
   int total_inventory = (price[0] * quantity[0]) + (price[1] * quantity[1]) + (price[2] * quantity[2]) +(price[3] * quantity[3]);
   printf("your total value of the entire inventory is %d",item[0],item[1],item[2],item[3],total_inventory);

    return 0;
}