import java.util.Scanner;

public class Ex02 {
  public static void main(String[] args) {
    // TODO Auto-generated method stub
    Scanner scanner = new Scanner(System.in);

    System.out.println("Insira a primeira quantidade: ");
    int firstQuantity = scanner.nextInt();

    System.out.println("Insira a segunda quantidade: ");
    int secondQuantity = scanner.nextInt();

    System.out.println("Insira a terceira quantidade: ");
    int thirdQuantity = scanner.nextInt();

    System.out.println("Insira o primeiro valor: ");
    float firstValue = scanner.nextFloat();

    System.out.println("Insira o segundo valor: ");
    float secondValue = scanner.nextFloat();

    System.out.println("Insira o terceiro valor: ");
    float thirdValue = scanner.nextFloat();

    float result = firstQuantity * firstValue + secondQuantity * secondValue + thirdQuantity * thirdValue;

    System.out.println("O valor final é: " + result);

  }

}