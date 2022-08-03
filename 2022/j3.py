# code by savir singh

statement = list(input())

for index, x in enumerate(statement):
    if x == "+":
        statement[index] = " tighten "
        statement.insert(index+2, "\n")
    elif x == "-":
        statement[index] = " loosen "
        statement.insert(index+2, "\n")

for state in statement:
    print(state, end='')
