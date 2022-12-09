#include <stdio.h>

void print_array(struct book array[]);

void update(struct book book_array[]);

struct book {
	char title[60];
	int edition;
	float price;
};

main()
{
	struct book bookstore[6] = { {"Anime Ecology", 5, 35.00}, {"Tom and Jerry Visual Novel", 1, 12.00},
	{"Haikyuu", 2, 15.50}, {"Dr. Stone", 1, 20.00} };

	print_array(bookstore);

	update(bookstore);

	printf("\n\n/////////// After Update ////////////\n\n\n");
	print_array(bookstore);
}

void print_array(struct book book_array[])
{

	for (int i = 0; i < sizeof(book_array); i++)
	{
		printf("Title: %s \nEdition: %d\nPrice: $%.2f\n", book_array[i].title, book_array[i].edition, book_array[i].price);
		printf("////////////////////\n");
	}
}

void update(struct book book_array[])
{
	for (int i = 0; i < sizeof(book_array); i++)
	{
		book_array[i].edition += 1;
		book_array[i].price += (book_array[i].price / 10);
	}
}
