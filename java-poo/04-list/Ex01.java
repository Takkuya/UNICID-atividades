import java.util.Scanner;

public class Ex01 {
  public static void main(String[] args) {

    Scanner scanner = new Scanner(System.in);

    int firstValue, secondValue, thirdValue;

    System.out.println("Insira o primeiro valor inteiro: ");
    firstValue = scanner.nextInt();

    System.out.println("Insira o segundo valor inteiro: ");
    secondValue = scanner.nextInt();

    System.out.println("Insira o terceiro valor inteiro: ");
    thirdValue = scanner.nextInt();

    if (firstValue > secondValue && firstValue > thirdValue) {
      System.out.println("O maior valor é: " + firstValue);
      return;
    }

    if (secondValue > firstValue && secondValue > thirdValue) {
      System.out.println("O maior valor é: " + secondValue);
      return;
    }

    System.out.println("O maior valor é: " + thirdValue);

  }
}
