#include <stdio.h>

void birthday_test(int date1, int date2);

struct date {
	int month;
	int day;
	int year;
};

main()
{
	struct date today = {4, 18, 2021};

	printf("Today's date (with predefined struct) is: %d/%d/%d\n", today.month, today.day, today.year);

	printf("////////////////////////////////////////////////////////////////////////////////\n");

	/// /////////////////////////////////////////////////////////////////////////////

	int user_day, user_month, user_year, birthday_day, birthday_month, birthday_year;

	printf("Enter today's month: \n");
	scanf("%d", &user_month);

	printf("Enter today's day: \n");
	scanf("%d", &user_day);

	printf("Enter today's year: \n");
	scanf("%d", &user_year);

	struct date user_today = { user_month, user_day, user_year };

	printf("Today's date (with user input struct) is: %d/%d/%d\n", user_today.month, user_today.day, user_today.year);

	printf("////////////////////////////////////////////////////////////////////////////////\n");

	////////////////////////////////////////////////////////////////////////////////

	printf("Enter your birthday's month: \n");
	scanf("%d", &birthday_month);

	printf("Enter your birthday's day: \n");
	scanf("%d", &birthday_day);

	printf("Enter birthday's year: \n");
	scanf("%d", &birthday_year);
	
	struct date birthday = { birthday_month, birthday_day, birthday_year };

	printf("Your Birthday is: %d/%d/%d\n", birthday.month, birthday.day, birthday.year);

	printf("////////////////////////////////////////////////////////////////////////////////\n");

	birthday_test(user_today, birthday);
}

void birthday_test(struct date today, struct date birthday)
{
	if (birthday.month == today.month) //need to incorporate year, because if it is month 1 but one year past, then their birthday could have happened already
	{
		if (birthday.day == today.day)
		{
			printf("0");
		}

		if (birthday.day > today.day)
		{
			printf("1");
		}

		if (birthday.day < today.day)
		{
			printf("-1");
		}

	}

	if (birthday.month < today.month)
		printf("-1");

	if (birthday.month > today.month)
		printf("1");

}


