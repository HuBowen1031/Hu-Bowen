n = input()
def disassemble(number: int) -> str:
    thisStr = ""
    i = 0
    if (number == 0):
        return "0"
    if (number == 1):
        return "2(0)"
    if (number == 2):
        return "2"
    while (number != 0):
        if (number % 2 == 1 and i != 0):
            thisStr = "2(" + disassemble(i) + ")" + "+" + thisStr
        elif (number % 2 == 1):
            thisStr = "2(" + disassemble(i) + ")" + thisStr
        number //= 2
        i += 1
    print("Built:" + thisStr)
    return thisStr


print(disassemble(int(n)).replace("2(2(0))", "2").replace("+)",")"))