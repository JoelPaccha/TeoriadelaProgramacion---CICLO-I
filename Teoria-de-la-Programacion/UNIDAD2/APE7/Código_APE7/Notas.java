import java.util.Scanner;
import java.util.Locale;

public class Notas {
    public static void main(String[]args) {
        Locale.setDefault(Locale.US);
        float VALOR_INDIVIDUAL = 0.30f;
        float VALOR_GRUPAL = 0.30f;
        float VALOR_FINAL = 0.40f;
        float NOTA_APROBACION = 7.00f;
        float Evaluacion_individual, Trabajo_grupal, Evaluacion_final, nota_final = 0.0f ;

        Scanner scanner = new Scanner(System.in).useLocale(Locale.US);

        System.out.println("Ingrese la nota de Evaluación individual:");
        Evaluacion_individual = scanner.nextFloat();
        System.out.println("Ingrese la nota de Valor Grupal:");
        Trabajo_grupal = scanner.nextFloat();
        System.out.println("Ingrese la nota de Evaluación Final:");
        Evaluacion_final = scanner.nextFloat();

        if (Evaluacion_individual < 0 || Evaluacion_individual > 10 || Trabajo_grupal < 0 || Trabajo_grupal > 10 || Evaluacion_final < 0 || Evaluacion_final > 10) {
            System.out.println("Notas inválidas, vuelva a ingresar");
        }else{
            nota_final = (Evaluacion_individual * VALOR_INDIVIDUAL) + (Trabajo_grupal * VALOR_GRUPAL) + (Evaluacion_final * VALOR_FINAL) ;
        
            if (nota_final >= NOTA_APROBACION){
                System.out.printf("El estudiante aprobó con una nota final de: %.2f%n" , nota_final);
            }else{
                System.out.printf("El estudiante reprobó con una final de: %.2f%n" , nota_final);
            }
            if (nota_final >= 0.00 & nota_final <= 4.99) {
                System.out.println("Deficiente");
                System.out.println("El estudiante requiere refuerzo académico");
    
            } else if (nota_final >= 5.00 & nota_final <= 6.99) {
                System.out.println("Regular");
                System.out.println("El estudiante requiere refuerzo académico");

            } else if (nota_final >= 7.00 & nota_final <= 7.99) {
                System.out.println("Bueno");
                System.out.println("El estudiante requiere refuerzo académico");

            } else if (nota_final >= 8.00 & nota_final <= 8.99) {
                System.out.println("Muy bueno") ;

            } else if (nota_final >= 9.00 & nota_final <= 10.00) {
                System.out.println("Excelente");
                System.out.println("¡Felicitaciones! Rendimiento Sobresaliente");
            }

            }    
            
            scanner.close();
    }
}