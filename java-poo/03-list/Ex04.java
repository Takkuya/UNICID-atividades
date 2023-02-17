import java.util.Scanner;

public class Ex04 {

  public static void main(String[] args) {
    // TODO Auto-generated method stub
    Scanner scanner = new Scanner(System.in);

    System.out.println("Insira o primeiro valor");
    float firstValue = scanner.nextFloat();

    System.out.println("Insira o segundo valor");
    float secondValue = scanner.nextFloat();

    System.out.println("Insira o terceiro valor");
    float thirdValue = scanner.nextFloat();

    System.out.println("Insira o quarto valor");
    float fourthValue = scanner.nextFloat();

    float average = (firstValue + secondValue + thirdValue + fourthValue) / 4;
    float sum = firstValue + secondValue + thirdValue + fourthValue;

    float firstRest = average % firstValue;
    float secondRest = average % secondValue;
    float thirdRest = average % thirdValue;
    float fourthRest = average % fourthValue;

    System.out.println("A média é:" + average);
    System.out.println("Somatória entre os valores é:" + sum);

    System.out.println("Divisórita da soma sob o primeiro valor é:" + firstRest);
    System.out.println("Divisórita da soma sob o segundo valor é:" + secondRest);
    System.out.println("Divisórita da soma sob o terceiro valor é:" + thirdRest);
    System.out.println("Divisórita da soma sob o quarto valor é:" + fourthRest);

  }

}