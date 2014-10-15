/*Это калькулятор.
При запуске программы, спрашивает значение оператора (+, -, *, /)
Если значение отличается от предложенных, заканчивает программу.
Спрашивает первое число и второе число.
Если выбран оператор / и второе число равно 0, то выдает ошибку деления на 0.
Если оператор и значения верны, то выводит ответ.
После вывода ответа, программа запускается сначала.
Для остановки и выхода из программы, необходимо при запросе значения оператора, ввести "0".
*/

#include <stdio.h>

int main(void)
{
	float a, b;
	char c;

	while (1) {
		printf ("Оператор (+, -, *, /) или 0 для выхода из программы : ");
		scanf("%c", &c);
		if (c == '0') {
			break;
		}

		if (c == '+' || c == '-' || c == '*' || c == '/') {
			printf ("Введите первое число = ");
			scanf("%f", &a);
			printf ("Введите второе число = ");
			scanf("%f", &b);
			switch (c) {
				case '+':
					printf ("%.2f\n", a + b);
					break;
				case '-':
					printf ("%.2f\n", a - b);
					break;
				case '*':
					printf ("%.2f\n", a * b);
					break;
				case '/':
					if (b != 0) printf ("%.2f\n", a / b);
					else
					printf ("Деление на ноль!\n");
					return 0;
			}
		}

	}

	return 0;
}
