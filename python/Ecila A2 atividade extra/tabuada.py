tabuadaNum = int(input("Digite o número da tabuada: "))
startNum = int(input("Digite o número inicial da tabuada: "))
endNum = int(input("Digite o número final da tabuada: "))

def tabuada(num):
    for x in range(startNum, endNum + 1):
        print(f"{num} X {x} = {num * x}")

tabuada(tabuadaNum)