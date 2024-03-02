using System.Drawing;

namespace Lab_1._5;

[TestFixture]
public class Tests
{
    [Test]
    public void Init_ValidArguments_ReturnsTrue()
    {

        // Arrange
        int a = 1, b = 1, c = 1;

        Triangle triangle = new();
        // Act
        var result = triangle.Init(a, b, c);

        // Assert
        Assert.IsTrue(result);
    }

    [Test]
    public void Init_FirstValueGreaterThanSecond_ReturnsFalse()
    {
        // Arrange
        int a = -1, b = 1, c = 1;
        Triangle triangle = new();

        // Act
        var result = triangle.Init(a, b, c);

        // Assert
        Assert.IsFalse(result);
    }
}
