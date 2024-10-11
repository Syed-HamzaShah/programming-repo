from Questions import Questions

quiz_questions = [
 "What is the name of a baby puffin bird?\nA. A puffing\nB. A puffine\nC.A puffint",
 "Only two mammals enjoy spicy foods: humans and\nA. Pangolin\nB. Armadillo\nC. Tree shrew",
 "In 2017, more than 1.2 million people watched online on YouTube a giraffe called April doing what?\nA. To eat ice cream\nB. To give birth\nC. To marry",
 "According to the American writer, life is too short to learn which language?\nA. Arabic\nB. German\nC. Chinese",
 "How many hearts does an octopus have?\nA. 0\nB. 3\nC. 10",
 "Which term refers to a group of pandas?\nA. An embarrassment\nB. A shame\nC. A pity",
 "How many months of the year have 28 days in them?\nA. 1\nB. 5\nC. 12",
 "A snail can sleep for how long?\nA. 3 days\nB. 3 months\nC. 3 years",
 "If you have triskaidekaphobia, you have a fear for what?\nA. Pizza\nB. The number 13\nC. Toilet paper",
 "All pandas in the world belong to which country?\nA. China\nB. The United States\nC. Russia",
]

'''quiz = [
    Class(quiz_questions[0], "A"),
    Class(quiz_questions[1], "C"),
    Class(quiz_questions[2], "B"),
    Class(quiz_questions[3], "B"),
    Class(quiz_questions[4], "B"),
    Class(quiz_questions[5], "A"),
    Class(quiz_questions[6], "C"),
    Class(quiz_questions[7], "C"),
    Class(quiz_questions[8], "B"),
    Class(quiz_questions[9], "A"),
]

def run_test(quiz):
    score = 0
    ans = input(quiz.a)
    if ans == quiz.b:
        score += 1
    print("You got " + str(score) + "/" + str(len(quiz)) + "Correct")'''

Quiz =[
    Questions(quiz_questions[0],"A"),
    Questions(quiz_questions[1],"A"),
    Questions(quiz_questions[2],"A"),
    Questions(quiz_questions[3],"A"),
    Questions(quiz_questions[4],"A"),
    Questions(quiz_questions[5],"A"),
    Questions(quiz_questions[6],"A"),
    Questions(quiz_questions[7],"A"),
    Questions(quiz_questions[8],"A"),
    Questions(quiz_questions[9],"A"),
]

def run_test(quiz):
    score = 0
    for i in Quiz:
        ans = input(quiz.a)
        if ans == quiz.b:
            score += 1
    print("You got " + str(score) + "/" + str(len(Quiz)) + "Correct")

run_test(Quiz)