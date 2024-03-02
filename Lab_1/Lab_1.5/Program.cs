using Lab_1._5;

class Program
{
    static void Main(string[] args)
    {
        // Встановлюємо кодування консолі на UTF-8
        Console.OutputEncoding = System.Text.Encoding.UTF8;

        Triangle triangle = new Triangle();

        triangle.Read();

        Console.WriteLine("\nІнформація про трикутник:");
        triangle.Display();
        Console.WriteLine("Периметр трикутника: " + triangle.Perimeter());

        double angleA, angleB, angleC;
        triangle.CalculateAngles(out angleA, out angleB, out angleC);
        Console.WriteLine($"Кути трикутника: A = {angleA}, B = {angleB}, C = {angleC}");

        Console.WriteLine("\nПеретворення у рядок:");
        Console.WriteLine(triangle.ToString());

        Equilateral equilateral = new Equilateral();

        equilateral.Read();

        equilateral.CalculateArea();

        equilateral.Display();

        Console.WriteLine(equilateral.ToString());
    }
}

