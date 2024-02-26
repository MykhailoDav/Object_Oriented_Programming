using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_1_4;
public class Rectangle
{
    public int X { get; private set; }
    public int Y { get; private set; }
    public int Width { get; private set; }
    public int Height { get; private set; }
    public Rectangle()
    {

    }
    public Rectangle(int x, int y, int width, int height)
    {
        X = x;
        Y = y;
        Width = width;
        Height = height;
    }
    public bool Init(int x, int y, int width, int height)
    {
        if (width > 0 && height > 0)
        {
            X = x;
            Y = y;
            Width = width;
            Height = height;
            return true;
        }
        else
        {
            Console.WriteLine("Помилка: ширина та висота повинні бути більше 0.");
            return false;
        }
    }

    public void Read()
    {
        int newX, newY, newWidth, newHeight;
        do
        {
            Console.WriteLine();

            Console.Write("Введіть координату X: ");
            newX = int.Parse(Console.ReadLine());

            Console.Write("Введіть координату Y: ");
            newY = int.Parse(Console.ReadLine());

            Console.Write("Введіть ширину: ");
            newWidth = int.Parse(Console.ReadLine());

            Console.Write("Введіть висоту: ");
            newHeight = int.Parse(Console.ReadLine());
        }
        while (!Init(newX, newY, newWidth, newHeight));
    }

    public void Display(string name)
    {
        Console.WriteLine($"\nПрямокутник {name}:");
        Console.WriteLine($"Координата X = {X}");
        Console.WriteLine($"Координата Y = {Y}");
        Console.WriteLine($"Ширина = {Width}");
        Console.WriteLine($"Висота = {Height}");
    }
    public void Move(int deltaX, int deltaY)
    {
        X += deltaX;
        Y += deltaY;
    }

    public void Resize(int newWidth, int newHeight)
    {
        do
        {
            Width = newWidth;
            Height = newHeight;
        }
        while (!Init(X, Y, newWidth, newHeight));
    }

    public Rectangle GetBoundingRectangle(Rectangle other)
    {

        int minX = Math.Min(X, other.X);
        int minY = Math.Min(Y, other.Y);
        int maxX = Math.Max(X + Width, other.X + other.Width);
        int maxY = Math.Max(Y + Height, other.Y + other.Height);

        int newWidth = maxX - minX;
        int newHeight = maxY - minY;
        return new Rectangle(minX, minY, newWidth, newHeight);
    }

    public Rectangle GetIntersection(Rectangle other)
    {
        int minX = Math.Max(X, other.X);
        int minY = Math.Max(Y, other.Y);
        int maxX = Math.Min(X + Width, other.X + other.Width);
        int maxY = Math.Min(Y + Height, other.Y + other.Height);

        if (maxX < minX || maxY < minY)
        {
            return null;
        }
        else
        {
            int newWidth = maxX - minX;
            int newHeight = maxY - minY;
            return new Rectangle(minX, minY, newWidth, newHeight);
        }
    }
    public string toString()
    {
        string result = $"Координата Х: {X}\nКоордината У:{Y}\nШирина: {Width}\nВисота: {Height}";
        return result;
    }
}
