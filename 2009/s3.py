# code by savir singh
# solution to CCC '09 S3 (Olympiads HW)
# full marks but not the proper way :(

def check_common(l1, l2):
    for i in range(len(l2)):
        if l2[i] in l1:
            return True
    return False

friends = {1: [6], 2: [6], 3: [4, 5, 6, 15], 4: [3, 5, 6], 5: [3, 4, 6], 6: [1, 2, 3, 4, 5, 7], 7: [6, 8], 8: [7, 9], 9: [8, 10, 12], 10: [9, 11], 11: [10, 12],
           12: [9, 11, 13], 13: [12, 14, 15], 14: [13], 15: [3, 13], 16: [17, 18], 17: [16, 18], 18: [16, 17]}

while True:
    command = input()
    if command=='q':
        break
    elif command=='i':
        x = int(input()) #x=20
        y = int(input()) #y=10
        if y not in friends and x not in friends: # y in friends (condition not true)
            friends[y] = [x]
            friends[x] = [y]
        elif x not in friends: # x not in friends (condition true)
            friends[y].append(x) # friends[10] add 20
            friends[x] = [y] # make new friend 20, and add 10
        elif y not in friends: # condition ignored
            friends[x].append(y)
            friends[y] = [x]
        elif y not in friends[x]: # condition ignored
            friends[x].append(y)
            friends[y].append(x)
    elif command=='d':
        x = int(input())
        y = int(input())
        if y in friends[x]: 
            friends[x].remove(y)
            friends[y].remove(x)
    elif command=='n':
        x = int(input())
        print(len(friends[x]))
    elif command=='f':
        x = int(input())
        x_friends = friends[x]
        final = []
        for i in range(len(x_friends)):
            for j in range(len(friends[x_friends[i]])):
                if friends[x_friends[i]][j]!=x and friends[x_friends[i]][j] not in x_friends:
                    final.append(friends[x_friends[i]][j])
        print(len(set(final)))
    elif command=='s':
        x = int(input())
        y = int(input())
        x_friends = friends[x]
        try:
            y_friends = friends[y]
        except:
            print("Not connected")
            continue
        if y in x_friends:
            print(1)
            continue
        elif check_common(x_friends, y_friends):
            print(2)
            continue
        else:
            final = []
            final2 = []
            final3 = []
            final4 = []
            final5 = []
            for i in range(len(x_friends)):
                for j in range(len(friends[x_friends[i]])):
                    if friends[x_friends[i]][j]!=x and friends[x_friends[i]][j] not in x_friends:
                        final.append(friends[x_friends[i]][j])
            for i in range(len(y_friends)):
                for j in range(len(friends[y_friends[i]])):
                    if friends[y_friends[i]][j]!=y and friends[y_friends[i]][j] not in y_friends:
                        final2.append(friends[y_friends[i]][j])
            for i in range(len(final2)):
                for j in range(len(friends[final2[i]])):
                    if friends[final2[i]][j]!=y and friends[final2[i]][j] not in y_friends:
                        final3.append(friends[final2[i]][j])
            for i in range(len(final)):
                for j in range(len(friends[final[i]])):
                    if friends[final[i]][j]!=y and friends[final[i]][j] not in y_friends:
                        final4.append(friends[final[i]][j])
            for i in range(len(final4)):
                for j in range(len(friends[final4[i]])):
                    if friends[final4[i]][j]!=y and friends[final4[i]][j] not in y_friends:
                        final5.append(friends[final4[i]][j])
            if check_common(final2, x_friends):
                print(3)
                continue
            if (check_common(final, final2)):
                print(4)
                continue
            elif check_common(final, final3):
                print(5)
                continue
            elif check_common(final4, final3):
                print(6)
                continue
            elif check_common(final5, final3):
                print(7)
                continue
