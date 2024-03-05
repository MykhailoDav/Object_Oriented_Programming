using Lab_1._6;

class Program
{
    static void Main(string[] args)
    {
        // Встановлюємо кодування консолі на UTF-8
        Console.OutputEncoding = System.Text.Encoding.UTF8;

        Equilateral equilateral = new();

        equilateral.Read();

        double angleA, angleB, angleC;
        equilateral.triangle.CalculateAngles(out angleA, out angleB, out angleC);
        Console.WriteLine($"Кути трикутника: A = {angleA}, B = {angleB}, C = {angleC}");

        equilateral.CalculateArea();

        equilateral.Display();

        Console.WriteLine(equilateral.ToString());
    }
}

