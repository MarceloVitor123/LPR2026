using System;

namespace Atividade1
{
    class Program
    {
        static void Main(string[] args)
        {
            double r, area;
            double pi = 3.14159;

            Console.WriteLine("Digite o raio do círculo: ");
            r = Convert.ToDouble(Console.ReadLine());
            area = pi * Math.Pow(r, 2);

            if (r < 0)
            {
                Console.WriteLine("Caso inválido");
            }
            else
            {
                Console.WriteLine($"A área do círculo é: {area:F4} u.m.");
            }
        }
    }
}