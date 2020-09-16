def check_winner(c,r):
    c_new = int(c%9)
    if(c_new==0):
        c_fucku=int(c/9)
    else:
        c_fucku=int(c/9)+1;
    r_new = int(r%9)
    if(r_new==0):
        r_fucku=int(r/9)
    else:
        r_fucku=int(r/9)+1;
        
    if(c_fucku>=r_fucku):
        return 1, r_fucku
    else:
        return 0, c_fucku

if __name__ =='__main__':
    t = int(input())
    answers = []
    for i in range(t):
        c,r = map(int,input().split())
        answers.append((check_winner(c,r)))
    for (c,r) in answers:
        print(c,r)
