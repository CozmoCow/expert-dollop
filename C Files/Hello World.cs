
using System;

class HelloWorld
{
    static void Main(string[] args)
    {
        double a = double.Parse(Console.ReadLine());
        double b = double.Parse(Console.ReadLine());
        double c = Math.Sqrt(a * a + b * b);
        Console.WriteLine(c);
    }
}