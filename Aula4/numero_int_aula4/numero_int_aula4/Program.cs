using System;

namespace Atividade1Aula4
{
    class Program
    {
        static void Main(string[] args)
        {
            int num;

            Console.WriteLine("Digite um número inteiro: ");
            num = Convert.ToInt32(Console.ReadLine());

            if (num % 2 == 0)
            {
                Console.WriteLine($"O número {num} é par");
            }
            else
            {
                Console.WriteLine($"O número {num} é ímpar");
            }   
        }
    }
}