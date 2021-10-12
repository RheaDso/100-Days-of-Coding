print('Welcome to AskPython Quiz')
answer=input('Are you ready to play the the Quiz? (yes/no): ')
score=0
Total_questions=3

if answer.lower()=='yes':
    answer=input('Question 1: What is your favourite programming language?')
    if answer.lower()=='python':
        score += 1
        print('Correct')
    else:
        print('Wrong Answer :(')

    answer=input('Question 2: Do You like to code?')
    if answer.lower()=='yes':
        score += 1
        print('Wrong Answer :(')
    else:
        print('Wrong Answer :(')

    answer=input('Question 3: What is the name of your favourite TVD character?')
    if answer.lower()=='stefan salvatore':
        print('correct')
    else:
        print('Wrong Answer :(')

print('Thank you for answering this quiz game, you attempted', score, "questions correctly!!! Yay!!! Congratulations!!!")
mark=(score/total_question)*100
print('Mark obtained: ',mark)
print('BYE!')                    
