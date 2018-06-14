#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <Windows.h>
#include <iostream>

using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	start:
	printf("Хотите стать профессиональным музыкантом? (1=Да или 0=Нет)\n");
	int n=0;
	scanf("%d", &n);

	if (n == 1)
	{

		printf("Вы богаты? (1=Да или 0=Нет)\n");
		scanf("%d", &n);

		if (n==0)
		{
			printf("Любите деньги? (1=Да или 0=Нет)\n");
			scanf("%d", &n);

			if (n == 1)
			{
				printf("Забудьте о музыке\n");
			}

			else if (n == 0)
			{
				next:
				printf("Любите отрываться? (1=Да или 0=Нет)\n");
				scanf("%d", &n);

				if (n==0)
				{
					printf("Готовы заниматься по 8 часов в день? (1=Да или 0=Нет)\n");
					scanf("%d", &n);

					if (n==0)
					{
						printf("Ноты знаете? (1=Да или 0=Нет)\n");
						scanf("%d", &n);

						if (n==0)
						{
							printf("Альт\n");
							
						}

						else if (n == 1)
						{
							printf("Арфа\n");
						}

					}

					else if (n == 1)
					{
						printf("Хотите учить детей? (1=Да или 0=Нет)\n");
						scanf("%d", &n);

						if (n==1)
						{
							printf("Флейта\n");
						}

						else if (n == 0)
						{
							printf("Скрипка\n");
						}
					}
				}
				else if (n==1)
				{
					printf("Пьете пиво? (1=Да или 0=Нет)\n");
					scanf("%d", &n);

					if (n==0)
					{
						printf("Вы страстная натура? (1=Да или 0=Нет)\n");
						scanf("%d", &n);

						if (n == 1)
						{
							printf("Виолончель.\n");
						}
						else if (n == 0)
						{
							printf("Домра.\n");
						}
					}

					else if (n == 1)
					{
						printf("Хотите играть классику? (1=Да, 0=Нет, 3= Не знаю)\n");
						scanf("%d", &n);

						if (n == 3)
						{
							printf("Тромбон.\n");
						}

						else if (n == 1)
						{
							printf("Готовы работать круглые сутки? (1=Да, 0=Нет)\n");
							scanf("%d", &n);

							if (n == 1)
							{
								printf("Гобой.\n");
							}

							else if (n == 0)
							{
								printf("Готовы к тому, что будут проблемы с работой, даже если вы круто играете? (1=Да, 0=Нет)\n");
								scanf("%d", &n);

								if (n == 1)
								{
									printf("Кларнет.\n");
								}

								else if (n == 0)
								{
									printf("Валторна.\n");
								}
							}
						}

						else if (n == 0)
						{
							printf("А джаз? (1=Да, 0=Нет)\n");
							scanf("%d", &n);

							if (n == 1)
							{
								printf("Саксофон.\n");
							}

							else if (n == 0)
							{
								printf("У вас есть немецкие корни? (1=Да, 0=Нет)\n");
								scanf("%d", &n);

								if (n == 1)
								{
									printf("Труба.\n");
								}
								else if (n == 0)
								{
									printf("Дудук.\n");
								}
							}
						}
					}
				}
			}




		}

		else if (n == 1)
		{
			goto next;
		}

		
	}

	else if (n == 0)
	{
		printf("Хотите встречаться с девушками? (1=Да, 0=Нет)\n");
		scanf("%d", &n);

		if (n == 0)
		{
			printf("Хотите встречаться с парнями? (1=Да, 0=Нет)\n");
			scanf("%d", &n);

			if (n == 0)
			{
				printf("Фагот.\n");
			}

			else if (n == 1)
			{
				printf("Вы парень? (1=Да, 0=Нет)\n");
				scanf("%d", &n);

				if (n == 1)
				{
					printf("Оперный певец.\n");
				}

				else if (n == 0)
				{
					printf("Ударные.\n");
				}
			}
		}

		else if (n == 1)
		{
			printf("Любите глупышек? (1=Да, 0=Нет)\n");
			scanf("%d", &n);

			if (n == 0)
			{
				printf("Вы парень? (1=Да, 0=Нет)\n");
				scanf("%d", &n);

				if (n == 1)
				{
					printf("Оперный певец.\n");
				}

				else if (n == 0)
				{
					printf("Ударные.\n");
				}
			}

			else if (n == 1)
			{
				printf("Любите выпить? (1=Да, 0=Нет)\n");
				scanf("%d", &n);

				if (n == 1)
				{
					printf("Гитара.\n");
				}

				else if (n == 0)
				{
					printf("Фортепиано.\n");
				}
			}
		}

		
	}
	goto start;
}