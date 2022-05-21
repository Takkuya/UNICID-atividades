userNum = int(input("Digite um número qualquer: "))

def findOddNum(num): 
    for x in range(1, num + 1):
        if x % 2 != 0:
            print(f"{x}, ", end=" ")
            
findOddNum(userNum)