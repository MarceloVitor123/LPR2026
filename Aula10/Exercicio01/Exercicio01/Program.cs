using System;

namespace MeuPrograma
{
     class Retangulo
    {
       public double b, h; //atributo

       public void calcArea(){  //método
        double area = b * h;
       }

       public void calPerimetro(){
        double perimetro = (2 * b) + (2 * h); //método
       }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Retangulo retangulo = new Retangulo();

            Console.WriteLine("Digite a largura do retangulo: "); //largura = b
            retangulo.b = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Digite a altura do retangulo: "); //altura = h
            retangulo.h = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine($"A área do retangulo é: {area} e o seu perímetro é: {perimetro}");
        }
    }
}
