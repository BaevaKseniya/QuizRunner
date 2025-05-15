#include "question.h"
#include <iostream>

// Показать вопрос и варианты
void Question::display() const {
    std::cout << "\n" << text << "\n";
    for (size_t i = 0; i < options.size(); ++i) {
        std::cout << i + 1 << ") " << options[i] << "\n";
    }
}

// Проверить правильность ответа
bool Question::checkAnswer(int answer) const {
    return answer == correctAnswer;
}

