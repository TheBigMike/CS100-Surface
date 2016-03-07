//Michael Hall Project 2 washorwear.c file
//This file is what will do all of the input and output
//with the user and will decide weather to wash or wear.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "scanner.h"

void washorwear();
int smelltest();
int staintest();
int timesworn();
int clothestype();
int shirttest();
int tshirttest();
int niceshirttest();
int sweatshirttest();
int pantstest();
int jeanstest();
int otherpantstest();
int othertest();
int socktest();
int otherothertest();

void washorwear()
{
	printf("What type of clothes are you considering? ");
	char *x = readToken(stdin);
	if (strcmp(x, "shirt") == 0)
		shirttest();
	else if (strcmp(x, "pants") == 0)
		pantstest();
	else if (strcmp(x, "other") == 0)
		othertest();
}

int smelltest()
{
	printf("Does it smell fine, marginal, or bad? ");
	char *x = readToken(stdin);
	if (strcmp(x, "fine") == 0)
		return 1;
	else if (strcmp(x, "marginal") == 0)
		return 2;
	else if (strcmp(x, "bad") == 0)
		return 3;
	return 0;
}

int staintest()
{
	printf("How many stains does it have on it? ");
	char *x = readToken(stdin);
	if (strcmp(x, "none") == 0)
		return 1;
	else if (strcmp(x, "small") == 0)
		return 2;
	else if (strcmp(x, "lots") == 0)
		return 3;
	return 0;
}

int timesworn()
{
	printf("How many times has it been worn since being washed? ");
	char *x = readToken(stdin);
	int y = atoi(x);
	return y;
}

int shirttest()
{
	printf("What kind of shirt is it? ");
	char *x = readToken(stdin);
	if (strcmp(x, "t-shirt") == 0)
		tshirttest();
	else if (strcmp(x, "nice") == 0)
		niceshirttest();
	else if (strcmp(x, "sweatshirt") == 0)
		sweatshirttest();
	return 0;
}

int tshirttest()
{
	int smell, stain;
	smell = smelltest();
	if (smell == 1 || 2)
		stain = staintest();
	if (stain == 1 || 2)
	{
		printf("wear it");
		return 0;
	}
	else if (stain == 3)
	{
		printf("wash it");
		return 0;
	}
	else if (smell == 3)
	{
		printf("wash it");
		return 0;
	}
	return 0;
}

int niceshirttest()
{
	int stain = staintest();
	if (stain == 1)
	{
		printf("wear it");
		return 0;
	}
	else if (stain == 2 || 3)
	{
		printf("wash it");
		return 0;
	}
	return 0;
}

int sweatshirttest()
{
	int stain, smell;
	int worn = timesworn();
	if (worn < 3)
		stain = staintest();
	if (stain == 1 || 2)
	{
		printf("wear it");
		return 0;
	}
	if (stain == 3)
	{
		printf("wash it");
		return 0;
	}
	else if (worn >= 3)
		smell = smelltest();
	if (smell == 1)
	{
		printf("wear it");
		return 0;
	}
	else if (smell == 2 || 3)
	{
		printf("wash it");
		return 0;
	}
	return 0;
}

int pantstest()
{
	printf("What kind of pants are they? ");
	char *x = readToken(stdin);
	if (strcmp(x, "jeans") == 0)
		jeanstest();
	else if (strcmp(x, "other") == 0)
		otherpantstest();
	return 0;
}

int jeanstest()
{
	int worn = timesworn(), smell, stain;
	if (worn < 5)
	{
		printf("wear it");
		return 0;
	}
	else if (worn >= 5)
		smell = smelltest();
	if (smell == 1 || 2)
		stain = staintest();
	if (stain == 1 || 2)
	{
		printf("wear it");
		return 0;
	}
	else if (stain == 3)
	{
		printf("wash it");
		return 0;
	}
	else if (smell == 3)
	{
		printf("wash it");
		return 0;
	}
	return 0;
}

int otherpantstest()
{
	int stain = staintest();
	if (stain == 1)
	{
		printf("wear it");
		return 0;
	}
	else if (stain == 2 || 3)
	{
		printf("wash it");
		return 0;
	}
	return 0;
}

int othertest()
{
	printf("Is it socks or other? ");
	char *x = readToken(stdin);
	if (strcmp(x, "socks") == 0)
		socktest();
	else if (strcmp(x, "other") == 0)
		otherothertest();
	return 0;
}

int socktest()
{
	int worn = timesworn(), smell;
	if (worn == 0)
	{
		printf("wear it");
		return 0;
	}
	else if (worn >= 1)
		smell = smelltest();
	if (smell == 1)
	{
		printf("wear it");
		return 0;
	}
	else if (smell == 2 || 3)
	{
		printf("wash it");
		return 0;
	}
	return 0;
}

int otherothertest()
{
	int worn = timesworn(), smell, stain;
	if (worn == 1)
		stain = staintest();
	if (stain == 1)
	{
		printf("wear it");
		return 0;
	}
	else if (stain == 2 || 3)
	{
		printf("wash it");
		return 0;
	}
	else if (worn > 1)
		smell = smelltest();
	if (smell == 1 || 2)
	{
		printf("wear it");
		return 0;
	}
	else if (smell == 3)
	{
		printf("wash it");
		return 0;
	}
	return 0;
}