namespace Lab_1._5;
public class Triangle
{
    public double SideA { get; set; }
    public double SideB { get; set; }
    public double SideC { get; set; }

    public bool Init(double a, double b, double c)
    {
        if (a > 0 && b > 0 && c > 0)
        {
            SideA = a;
            SideB = b;
            SideC = c;
            return true;
        }
        else
        {
            return false;
            Console.WriteLine("Хибне значення");
        }

    }
    public void Read()
    {
        double a, b, c;
        do
        {
            Console.WriteLine("Введіть довжину сторони A:");
            a = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Введіть довжину сторони B:");
            b = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Введіть довжину сторони C:");
            c = Convert.ToDouble(Console.ReadLine());
        } while (!Init(a, b, c));
    }
    public void Display()
    {
        Console.WriteLine("Сторона A: " + SideA);
        Console.WriteLine("Сторона B: " + SideB);
        Console.WriteLine("Сторона C: " + SideC);
    }
    public double Perimeter()
    {
        return SideA + SideB + SideC;
    }
    public void CalculateAngles(out double angleA, out double angleB, out double angleC)
    {
        angleA = Math.Round(Math.Acos((SideB * SideB + SideC * SideC - SideA * SideA) / (2 * SideB * SideC)) * (180 / Math.PI), 2);
        angleB = Math.Round(Math.Acos((SideA * SideA + SideC * SideC - SideB * SideB) / (2 * SideA * SideC)) * (180 / Math.PI), 2);
        angleC = Math.Round(180 - angleA - angleB, 2);
    }

    public override string ToString()
    {
        return $"Трикутник зі сторонами: A = {SideA}, B = {SideB}, C = {SideC}";
    }
}