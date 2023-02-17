import java.util.Random;
import java.util.Scanner;

public class Ex04 {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("Insira o valor mínimo: ");
    int min = scanner.nextInt();

    System.out.println("Insira o valor máximo: ");
    int max = scanner.nextInt();

    Random random = new Random();
    int randomNumber = random.nextInt(max - min + 1) + min;

    System.out.println("O número aleatório gerado é: " + randomNumber);
  }
}