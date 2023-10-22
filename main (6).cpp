#include <iostream>
#include <cmath>// підключення бібліотеки математичних функцій
using namespace std;
int main() {   
//Integer20:З початку доби минуло N секунд (N - ціле). Знайти кількість повних
//годин, що минули з початку доби.
int N; // Кількість секунд з початку дня.
int hours; //Кількість повного годинника.
std::cout << "Введіть кількість секунд N: ";
std::cin >> N;
// Розраховуємо кількість повних годин.
hours = N / 3600; // 1 година = 3600 секунд.
std::cout << "Кількість повних годин: " << hours << std::endl;

//Boolean19: Дано три цілих числа: A, B, C. Перевірити істинність висловлювання: «Серед
//трьох даних цілих чисел є хоча б одна пара взаємно протилежних».
int A, B, C;
std::cout << "Введіть три цілі числа (A, B, C): ";
std::cin >> A >> B >> C;
// Перевіряємо висловлювання: «Серед трьох даних цілих чисел є хоча б одна пара взаємно протилежних».
bool isOppositePairExist = (A == -B) || (A == -C) || (B == -C);
if (isOppositePairExist) {
std::cout << "Серед трьох даних цілих чисел є хоч одна пара взаємно протилежних." << std::endl;
} else {
std::cout << "Серед трьох цих цілих чисел немає пари взаємно протилежних." << std::endl;
}

// y = ... (tab.3 N12)
double x;
double y;
std::cout << "Введіть значення x: ";
std::cin >> x;
double expression1 = 2 * x * x + 5 * x - 31.15;
double expression2 = x - 2.5;
double expression3 = sin(x * x * x) + (1.0 / 3) * log10(std::abs(x * x - 2.5));
double part1 = tan(std::abs(expression1));
double part2 = log10(std::abs(expression2)) / (3 * cbrt(expression3));
y = part1 + part2;
std::cout << "Значення y: " << y << std::endl;
return 0;
}


