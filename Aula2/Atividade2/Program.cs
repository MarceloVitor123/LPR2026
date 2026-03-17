using System;

namespace Atividade2
{
    class Program
    {
        static void Main(string[] args)
        {
            int A, B, C, D;

            Console.WriteLine("Digite o primeiro número: ");
            A = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Digite o segundo número: ");
            B = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Digite o terceiro número: ");
            C = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Digite o quarto número: ");
            D = Convert.ToInt32(Console.ReadLine());

            float result = (A * B) - (C * D);

            Console.WriteLine($"A diferença do produto A e B pelo produto C e D é: {result}");
        }
    }
}