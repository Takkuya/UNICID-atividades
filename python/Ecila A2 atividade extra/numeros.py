lista = []

def typedNum():
    while True:
        userNum = int(input("Digite um número inteiro: "))
        # add the numbers that the user typed into the list
        lista.append(userNum)

        if userNum == 0:
            # remove last element, 0
            lista.pop()

            return lista

# show typed numbers
print(f"Os números digitados foram: {typedNum()}")

# sum numbers and average numbers function
def sumNumAndAverage(list):
  
    count = 0
    for x in list:
        # sum numbers
        count += x
        # average of numbers
        media = count / len(list) 
    print("Resultado da soma é: ", count)
    print("Resultado da média é: ", media)
    
sumNumAndAverage(lista)

