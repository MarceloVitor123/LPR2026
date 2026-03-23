using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Atividade2Aula4
    {
        class Program
        {
            static void Main(string[] args)
            {


                Console.WriteLine("Escolha uma classe 1-Guerreira, 2-Mago ou 3-Arqueira: ");
                int classe = int.Parse(Console.ReadLine());

                switch (classe)
                {
                    case 1:
                        Console.WriteLine("Você escolheu a classe Guerreira");
                        Console.WriteLine("Suas habilidades são: ataque pesado e defesa total");
                        break;

                    case 2:
                        Console.WriteLine("Você escolheu a classe Mago");
                        Console.WriteLine("Suas habilidades são: bola de fogo e escudo de gelo");
                        break;

                    case 3:
                        Console.WriteLine("Você escolheu a classe Arqueira");
                        Console.WriteLine("Suas habilidades são: flecha precisa e disparo triplo");
                        break;

                    default:
                        Console.WriteLine("Caso invalido");
                        break;
                }
            }
        }
    }

