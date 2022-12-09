#include <stdio.h>

main()
{
	char s[] = "This is a string.  It contains two sentences.";

	int count;

	printf("\nOriginal string: %s", s);

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == '.')
		{
			s[count + 1] = '\0';
		}
	}
	printf("\nModified string: %s\n", s);

}
