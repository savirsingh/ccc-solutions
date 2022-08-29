# code by savir singh

def check_work(list1):
    global answers
    global correct
    for k in range(len(list1)):
        if list1[k] == answers[k]:
            correct += 1

n = int(input())
choices = []
answers = []
correct = 0

for i in range(n):
    r = input()
    choices.append(r)

for j in range(n):
    r = input()
    answers.append(r)

check_work(choices)

print(correct)
