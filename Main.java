import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int minutos;
	    double valorpago;
		
	    System.out.print("Digite a quantidade de minutos: ");
	    minutos = sc.nextInt();
	    
	    valorpago = 50.00;
	    
	    if (minutos > 100) {
	        valorpago = valorpago + 2.00 * (minutos - 100);
	      }

	    System.out.println("Valor a pagar: R$ " + String.format("%.2f", valorpago));
	    
	    sc.close();
	    
	}

}
