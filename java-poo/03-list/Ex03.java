import java.util.Scanner;

public class Ex03 {
  public static void main(String[] args) {
    // TODO Auto-generated method stub

    Scanner scanner = new Scanner(System.in);

    System.out.println("Insira a largura: ");
    float width = scanner.nextFloat();

    System.out.println("Insira o comprimento: ");
    float length = scanner.nextFloat();

    float totalArea = length * width;

    System.out.print("A área total existente é: " + totalArea);
  }

}