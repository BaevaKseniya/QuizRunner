#include "quiz.h"
#include <iostream>
#include <fstream>
#include <sstream>

// Загрузка вопросов из файла
bool Quiz::loadQuestions(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) return false;

    std::string line, questionText;
    std::vector<std::string> options;
    int correctAnswer;

    while (getline(file, line)) {
        std::istringstream iss(line);
        getline(iss, questionText, ';');

        std::string option;
        for (int i = 0; i < 4; ++i) {
            getline(iss, option, ';');
            options.push_back(option);
        }

        iss >> correctAnswer;
        questions.emplace_back(questionText, options, correctAnswer);
        options.clear();
    }

    return true;
}

// Запуск теста
void Quiz::start() {
    int userAnswer;
    for (size_t i = 0; i < questions.size(); ++i) {
        questions[i].display();
        std::cout << "Ваш ответ (1-4): ";
        std::cin >> userAnswer;

        if (questions[i].checkAnswer(userAnswer)) {
            std::cout << "✅ Верно!\n";
            ++score;
        } else {
            std::cout << "❌ Неверно! Правильный ответ: " 
                      << questions[i].getCorrectAnswer() << "\n";
        }
    }
}

