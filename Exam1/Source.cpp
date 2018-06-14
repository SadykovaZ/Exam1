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
				SetConsoleTextAttribute(hConsole, 13);
				printf("Забудьте о музыке\n");
				SetConsoleTextAttribute(hConsole, 15);

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
							SetConsoleTextAttribute(hConsole, 11);
							printf("Альт\n");
							SetConsoleTextAttribute(hConsole, 15);
							
						}

						else if (n == 1)
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("Арфа\n");
							SetConsoleTextAttribute(hConsole, 15);
						}

					}

					else if (n == 1)
					{
						printf("Хотите учить детей? (1=Да или 0=Нет)\n");
						scanf("%d", &n);

						if (n==1)
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("Флейта\n");
							SetConsoleTextAttribute(hConsole, 15);
						}

						else if (n == 0)
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("Скрипка\n");
							SetConsoleTextAttribute(hConsole, 15);
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
							SetConsoleTextAttribute(hConsole, 11);
							printf("Виолончель.\n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else if (n == 0)
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("Домра.\n");
							SetConsoleTextAttribute(hConsole, 15);
						}
					}

					else if (n == 1)
					{
						printf("Хотите играть классику? (1=Да, 0=Нет, 3= Не знаю)\n");
						scanf("%d", &n);

						if (n == 3)
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("Тромбон.\n");
							SetConsoleTextAttribute(hConsole, 15);
						}

						else if (n == 1)
						{
							printf("Готовы работать круглые сутки? (1=Да, 0=Нет)\n");
							scanf("%d", &n);

							if (n == 1)
							{
								SetConsoleTextAttribute(hConsole, 11);
								printf("Гобой.\n");
								SetConsoleTextAttribute(hConsole, 15);
							}

							else if (n == 0)
							{
								printf("Готовы к тому, что будут проблемы с работой, даже если вы круто играете? (1=Да, 0=Нет)\n");
								scanf("%d", &n);

								if (n == 1)
								{
									SetConsoleTextAttribute(hConsole, 11);
									printf("Кларнет.\n");
									SetConsoleTextAttribute(hConsole, 15);
								}

								else if (n == 0)
								{
									SetConsoleTextAttribute(hConsole, 11);
									printf("Валторна.\n");
									SetConsoleTextAttribute(hConsole, 15);
								}
							}
						}

						else if (n == 0)
						{
							printf("А джаз? (1=Да, 0=Нет)\n");
							scanf("%d", &n);

							if (n == 1)
							{
								SetConsoleTextAttribute(hConsole, 11);
								printf("Саксофон.\n");
								SetConsoleTextAttribute(hConsole, 15);
							}

							else if (n == 0)
							{
								printf("У вас есть немецкие корни? (1=Да, 0=Нет)\n");
								scanf("%d", &n);

								if (n == 1)
								{
									SetConsoleTextAttribute(hConsole, 11);
									printf("Труба.\n");
									SetConsoleTextAttribute(hConsole, 15);
								}
								else if (n == 0)
								{
									SetConsoleTextAttribute(hConsole, 11);
									printf("Дудук.\n");
									SetConsoleTextAttribute(hConsole, 15);
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
				SetConsoleTextAttribute(hConsole, 11);
				printf("Фагот.\n");
				SetConsoleTextAttribute(hConsole, 15);
			}

			else if (n == 1)
			{
				printf("Вы парень? (1=Да, 0=Нет)\n");
				scanf("%d", &n);

				if (n == 1)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("Оперный певец.\n");
					SetConsoleTextAttribute(hConsole, 15);
				}

				else if (n == 0)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("Ударные.\n");
					SetConsoleTextAttribute(hConsole, 15);
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
					SetConsoleTextAttribute(hConsole, 11);
					printf("Оперный певец.\n");
					SetConsoleTextAttribute(hConsole, 15);
				}

				else if (n == 0)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("Ударные.\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}

			else if (n == 1)
			{
				printf("Любите выпить? (1=Да, 0=Нет)\n");
				scanf("%d", &n);

				if (n == 1)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("Гитара.\n");
					SetConsoleTextAttribute(hConsole, 15);
				}

				else if (n == 0)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("Фортепиано.\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
		}

		

	}
	goto start;
}