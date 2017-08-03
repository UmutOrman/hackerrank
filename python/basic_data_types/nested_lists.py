folks_grades = []
lowest = 101.00
second_lowest = 102.00 
for _ in range(int(raw_input())):
    name = raw_input()
    score = float(raw_input())
    folks_grades.append([name,score])
    if(score < lowest):
        second_lowest = lowest
        lowest = score
    elif(score > lowest and score < second_lowest):
        second_lowest = score

folks_grades = sorted(folks_grades)
for folk_grade in folks_grades:
    if(folk_grade[1] == second_lowest):
        print folk_grade[0]
