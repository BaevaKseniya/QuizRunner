#include <gtest/gtest.h>
#include "../src/quiz.h"

// Проверяем загрузку вопросов
TEST(QuizTest, LoadQuestions) {
    Quiz quiz;
    EXPECT_TRUE(quiz.loadQuestions("test_questions.txt"));
    EXPECT_EQ(quiz.getTotalQuestions(), 3);
}

// Проверяем проверку ответа
TEST(QuestionTest, CheckAnswer) {
    Question q("2 + 2?", {"1", "2", "4", "5"}, 3);
    EXPECT_TRUE(q.checkAnswer(3));
    EXPECT_FALSE(q.checkAnswer(2));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
