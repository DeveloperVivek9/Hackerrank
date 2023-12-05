if __name__ == '__main__':
    l=list()
    for _ in range(int(input())):
        name = input()
        score = float(input())
        l.append([name,score])
    v=sorted(list(set(x[1] for x in l)))[1]
    for name in sorted([x[0] for x in l if x[1]==v]):
        print(name)
