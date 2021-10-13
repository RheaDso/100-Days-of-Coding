
print('WELCOME')
answer=input('Are you ready to play the quiz??')
score=0
Total_questions=5

if answer.lower()=='yes':
    answer=input('Question 1: Which state is DBIT located in??')
    if answer.lower()=='maharashtra':
        score += 1
        print('Correct!')
    else:
        print('Woops!')

    answer=input('Question 2: Does DBIT have a ground?')
    if answer.lower()=='yes':
        score += 1
        print('Correct!')
    else:
        print('Woops!')

    answer=input('Question 3: Where is Inorbit Mall located?') 
    if answer.lower()=='malad':
        score += 1
        print('Correct!')
    else:
        print('Woops!')

    answer=input('Question 4: Are you in Engineering?')
    if answer.lower()=='yes':
        score += 1
        print('Yay!')
    else:
        print('Okay!')

    answer=input('Question 5: Are you in SE?')
    if answer.lower()=='yes':
        score += 1
        print('Yay!')
    else:
        print('Woops!')                    
else: 
    print('End')
