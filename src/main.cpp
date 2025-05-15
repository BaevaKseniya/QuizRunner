#include <iostream>
#include "quiz.h"

int main() {
    Quiz quiz;

    
    if (!quiz.loadQuestions("questions.txt")) {
        std::cerr << "Ошибка: Не удалось загрузить вопросы.\n";
        return 1;
    }

    
    quiz.start();

    
    std::cout << "\nРезультат: " << quiz.getScore() << " правильных ответов из " 
              << quiz.getTotalQuestions() << std::endl;

    return 0;
}


