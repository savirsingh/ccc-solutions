# code by savir singh
# 13/15 marks

statement = list(input())

for index, x in enumerate(statement):
    if x == "+":
        statement[index] = " tighten "
        statement.insert(index+2, "\n")
    elif x == "-":
        statement[index] = " loosen "
        statement.insert(index+2, "\n")

    print(statement[index], end='')
