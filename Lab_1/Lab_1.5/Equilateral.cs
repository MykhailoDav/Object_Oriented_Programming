
namespace Lab_1._5
{
    public class Equilateral
    {
        public double Area { get; set; }
        Triangle? triangle = new();

        public bool Init(Triangle triangle)
        {
            if (triangle.SideA == triangle.SideB && triangle.SideB == triangle.SideC)
            {
                this.triangle = triangle;
                return true;
            }
            else { Console.WriteLine("Сторони мають бути рівними"); return false;  }

        }
        public void CalculateArea()
        {
            double s = triangle.Perimeter() / 2; // Півпериметр трикутника
            Area = Math.Sqrt(s * (s - triangle.SideA) * (s - triangle.SideB) * (s - triangle.SideC)); // Формула Герона
        }
        public void Read()
        {
            do
            {
                Console.WriteLine("\nВведіть сторони рівностороннього трикутника:");
                triangle.Read();
            } while (!Init(triangle));
        }
        public void Display()
        {
            Console.WriteLine("Рівносторонній трикутник:");
            triangle.Display();
            Console.WriteLine("Площа: " + Area);
        }
        public override string ToString()
        {
            return "Рівносторонній трикутник:\n" + triangle.ToString() + "\nПлоща: " + Area;
        }
    }
}
