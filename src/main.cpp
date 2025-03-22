#include <iostream>
#include "quiz.h"

int main() {
    Quiz quiz;

    // Загрузка теста из файла
    if (!quiz.loadQuestions("questions.txt")) {
        std::cerr << "Ошибка: Не удалось загрузить вопросы.\n";
        return 1;
    }

    // Начало тестирования
    quiz.start();

    // Итоги теста
    std::cout << "\nРезультат: " << quiz.getScore() << " правильных ответов из " 
              << quiz.getTotalQuestions() << std::endl;

    return 0;
}
