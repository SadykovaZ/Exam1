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
	printf("������ ����� ���������������� ����������? (1=�� ��� 0=���)\n");
	int n=0;
	scanf("%d", &n);

	if (n == 1)
	{

		printf("�� ������? (1=�� ��� 0=���)\n");
		scanf("%d", &n);

		if (n==0)
		{
			printf("������ ������? (1=�� ��� 0=���)\n");
			scanf("%d", &n);

			if (n == 1)
			{
				printf("�������� � ������\n");
			}

			else if (n == 0)
			{
				next:
				printf("������ ����������? (1=�� ��� 0=���)\n");
				scanf("%d", &n);

				if (n==0)
				{
					printf("������ ���������� �� 8 ����� � ����? (1=�� ��� 0=���)\n");
					scanf("%d", &n);

					if (n==0)
					{
						printf("���� ������? (1=�� ��� 0=���)\n");
						scanf("%d", &n);

						if (n==0)
						{
							printf("����\n");
							
						}

						else if (n == 1)
						{
							printf("����\n");
						}

					}

					else if (n == 1)
					{
						printf("������ ����� �����? (1=�� ��� 0=���)\n");
						scanf("%d", &n);

						if (n==1)
						{
							printf("������\n");
						}

						else if (n == 0)
						{
							printf("�������\n");
						}
					}
				}
				else if (n==1)
				{
					printf("����� ����? (1=�� ��� 0=���)\n");
					scanf("%d", &n);

					if (n==0)
					{
						printf("�� ��������� ������? (1=�� ��� 0=���)\n");
						scanf("%d", &n);

						if (n == 1)
						{
							printf("����������.\n");
						}
						else if (n == 0)
						{
							printf("�����.\n");
						}
					}

					else if (n == 1)
					{
						printf("������ ������ ��������? (1=��, 0=���, 3= �� ����)\n");
						scanf("%d", &n);

						if (n == 3)
						{
							printf("�������.\n");
						}

						else if (n == 1)
						{
							printf("������ �������� ������� �����? (1=��, 0=���)\n");
							scanf("%d", &n);

							if (n == 1)
							{
								printf("�����.\n");
							}

							else if (n == 0)
							{
								printf("������ � ����, ��� ����� �������� � �������, ���� ���� �� ����� �������? (1=��, 0=���)\n");
								scanf("%d", &n);

								if (n == 1)
								{
									printf("�������.\n");
								}

								else if (n == 0)
								{
									printf("��������.\n");
								}
							}
						}

						else if (n == 0)
						{
							printf("� ����? (1=��, 0=���)\n");
							scanf("%d", &n);

							if (n == 1)
							{
								printf("��������.\n");
							}

							else if (n == 0)
							{
								printf("� ��� ���� �������� �����? (1=��, 0=���)\n");
								scanf("%d", &n);

								if (n == 1)
								{
									printf("�����.\n");
								}
								else if (n == 0)
								{
									printf("�����.\n");
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
		printf("������ ����������� � ���������? (1=��, 0=���)\n");
		scanf("%d", &n);

		if (n == 0)
		{
			printf("������ ����������� � �������? (1=��, 0=���)\n");
			scanf("%d", &n);

			if (n == 0)
			{
				printf("�����.\n");
			}

			else if (n == 1)
			{
				printf("�� ������? (1=��, 0=���)\n");
				scanf("%d", &n);

				if (n == 1)
				{
					printf("������� �����.\n");
				}

				else if (n == 0)
				{
					printf("�������.\n");
				}
			}
		}

		else if (n == 1)
		{
			printf("������ ��������? (1=��, 0=���)\n");
			scanf("%d", &n);

			if (n == 0)
			{
				printf("�� ������? (1=��, 0=���)\n");
				scanf("%d", &n);

				if (n == 1)
				{
					printf("������� �����.\n");
				}

				else if (n == 0)
				{
					printf("�������.\n");
				}
			}

			else if (n == 1)
			{
				printf("������ ������? (1=��, 0=���)\n");
				scanf("%d", &n);

				if (n == 1)
				{
					printf("������.\n");
				}

				else if (n == 0)
				{
					printf("����������.\n");
				}
			}
		}

		
	}
	goto start;
}