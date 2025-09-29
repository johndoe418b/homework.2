#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    // стена
    float A = 12.0;   // длина стены
    float B = 3.0;    // высота стены
    float K = 500.0;  // цена рулона

    // рулон
    const float ROLL_LENGTH = 12.0;
    const float ROLL_WIDTH = 1.0;
    const float ROLL_AREA = ROLL_LENGTH * ROLL_WIDTH;

    // Площадь стены
    float wall_area = A * B;

    // Количество рулонов
    int rolls_needed = wall_area / ROLL_AREA;

    // Общая стоимость
    float total_cost = rolls_needed * K;

    // Вывод
    printf("РАСЧЕТ СТОИМОСТИ ОБОЕВ\n");
    printf("=============================\n\n");

    printf("УСЛОВИЯ:\n");
    printf("- Размер стены: %.2f м x %.2f м = %.2f м\n", A, B, wall_area);
    printf("- Размер рулона: %.2f м x %.2f м = %.2f м\n", ROLL_LENGTH, ROLL_WIDTH, ROLL_AREA);
    printf("- Цена одного рулона: %.2f руб.\n\n", K);

    printf("РАСЧЕТ:\n");
    printf("- Требуется рулонов: %.2f / %.2f = %d шт.\n", wall_area, ROLL_AREA, rolls_needed);
    printf("- Общая стоимость: %d * %.2f = %.2f руб.\n", rolls_needed, K, total_cost);

    printf("=============================\n");
    printf("ИТОГО: %.2f руб.\n", total_cost);

    return 0;
}
