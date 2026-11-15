import java.util.Locale;
import java.util.Scanner; 

public class Correo {
    public static void main(String[]args) {

    boolean correo_valido = false;
    int MIN_LEN = 5;
    int MAX_LEN = 50;
    String correo = "";
    
    Scanner scanner = new Scanner(System.in).useLocale(Locale.US);

    System.out.println("Ingrese una dirección válida de correo:");
    correo = scanner.nextLine();

    correo_valido = correo.length() >= MIN_LEN && correo.length() <= MAX_LEN && correo.contains("@") && correo.contains(".") && correo.charAt(0) != '@' && correo.charAt(correo.length()-1) != '@' ;

    if (correo_valido) {
        System.out.println("Correo válido");   
    }else {
        System.out.println("Correo inválido"); 
    }
        if (correo.length() < MIN_LEN) {
            System.out.println("Caracteres insuficientes");   
        }
        if (correo.length() > MAX_LEN) {
            System.out.println("Demasiados caracteres");   
        }
        if (!correo.contains("@")) {
            System.out.println("No contiene @");   
        }
        if (!correo.contains(".")) {
            System.out.println("No contiene punto (.)");    
        }
        if (correo.charAt(0) == '@'){
            System.out.println("No puede empezar con @");
        }
        if (correo.charAt(correo.length()-1) == '@'){
            System.out.println("No puede terminar con @");   
        }
    scanner.close();   
    }

}
