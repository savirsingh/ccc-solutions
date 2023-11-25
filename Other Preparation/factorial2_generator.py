# code by savir singh
# generator for https://dmoj.ca/problem/factorial2

def calc(prev, pre, n):
    fac=prev
    for i in range(pre + 1, n + 1):
        fac = (fac * i) % mod
    return fac

mod = 4294967291
n = 200000
prev = 1
pre = 0

f=open('stri.txt', 'a', encoding='utf-8')
m=open('rem.txt', 'a', encoding='utf-8')
w=open('par.txt', 'a', encoding='utf-8')


for i in range(1, 21476):
    a = calc(prev, pre, n * i)
    print(a)
    #takes forever to run
    #this is just to know where we're at:
    if i == 100:
        print("100")
    if i == 500:
        print("500")
    if i == 1000:
        print("1000")
    if i == 2000:
        print("2000")
    if i == 5000:
        print(5000)
    if i == 10000:
        print(10000)
    if i == 15000:
        print(15000)
    if i == 20000:
        print(20000)
    b = a / 4
    c = a % 4
    prev = a
    pre = n * i
    try:
        f.write(str(chr(int(int(b) / 55000))))
        m.write(str(chr((int(b) % 55000))))
        w.write(str(c))
    except:
        #debug
        print(i)
        print(b)
        print(int(b/55000))
        print(int(b % 55000))
        print("fail")


f.close()
m.close()
w.close()
