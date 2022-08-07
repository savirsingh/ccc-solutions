# code by savir singh
# surprisingly gives 15/15, no TLE, no nonsense

try:
    in1 = input().split(" ")
    coorlist = []
    outputlist = []

    c = int(in1[0])
    r = int(in1[1])

    while True:
        input1 = input().split(" ")
        xcoor = int(input1[0])
        ycoor = int(input1[1])
        if xcoor==0 and ycoor==0:
            break
        else:
            hello = [xcoor, ycoor]
            coorlist.append(hello)

    if coorlist[0][0] > c:
        coorlist[0] = [c, coorlist[0][1]]
    if coorlist[0][1] > r:
        coorlist[0] = [coorlist[0][0], r]
    if coorlist[0][0] < 0:
        coorlist[0] = [0, coorlist[0][1]]
    if coorlist[0][1] < 0:
        coorlist[0] = [coorlist[0][0], 0]
    outputlist.append(coorlist[0])

    for i in range(len(coorlist)-1):
        try:
            sum1 = [coorlist[i][0]+coorlist[i+1][0], coorlist[i][1]+coorlist[i+1][1]]
            if sum1[0]<0:
                sum1[0] = 0
            if sum1[1]<0:
                sum1[1] = 0
            if sum1[0]>c:
                sum1[0] = c
            if sum1[1]>r:
                sum1[1] = r
            outputlist.append(sum1)
            coorlist[i+1] = sum1

        except IndexError:
            pass
            
    for output in outputlist:
        print(str(output).replace('[', '').replace(']', '').replace(',', ''))

except IndexError:
    pass
