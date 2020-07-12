#include<stdio.h>
int main()
{
	 int menu;
	 printf("Enter your menu: ");
	 scanf("%d",&menu);
	 switch(menu)
	 {
	 	case 1:
			 {
			 	printf("Food item - Pizza\n");
			 	printf("Price - Rs 239\n");
			 	break;
			 }
		case 2:
			 {
			 	printf("Food item - Burger\n");
			 	printf("Price - Rs 129\n");
			 	break;
			 }
		case 3:
			 {
			 	printf("Food item - Pasta\n");
			 	printf("Price - Rs 179\n");
			 	break;
			 }
		case 4:
			 {
			 	printf("Food item - French\n");
			 	printf("Price - Rs 99\n");
			 	break;
			 }
		case 5:
			 {
			 	printf("Food item - Sandwich\n");
			 	printf("Price - Rs 149\n");
			 	break;
			 }
		default :	printf("There is no such menu like %d Please enter a valid menu between 1 to 5\n",menu);
	 }

	return 0;
}
