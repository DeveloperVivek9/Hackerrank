def swap_case(s):
    return "".join([i.lower() if i.isupper() else i.upper() for i in s])
    #return s.swapcase()

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)