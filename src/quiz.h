#ifndef QUIZ_H
#define QUIZ_H

#include <vector>
#include <string>
#include "question.h"

class Quiz {
private:
    std::vector<Question> questions;  // Список вопросов
    int score;                        // Количество правильных ответов

public:
    Quiz() : score(0) {}

    // Загрузка вопросов из файла
    bool loadQuestions(const std::string& filename);

    // Начало теста
    void start();

    // Получение количества правильных ответов
    int getScore() const { return score; }

    // Общее количество вопросов
    int getTotalQuestions() const { return questions.size(); }
};

#endif

