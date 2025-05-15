#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <vector>

class Question {
private:
    std::string text;               // Текст вопроса
    std::vector<std::string> options; // Варианты ответа
    int correctAnswer;              // Номер правильного ответа (1-4)

public:
    Question(const std::string& t, const std::vector<std::string>& opts, int correct)
        : text(t), options(opts), correctAnswer(correct) {}

    void display() const;                  // Показать вопрос
    bool checkAnswer(int answer) const;    // Проверить ответ
    int getCorrectAnswer() const { return correctAnswer; }
};

#endif

