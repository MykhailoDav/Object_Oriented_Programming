namespace Lab_1_4;

[TestFixture]
public class Tests
{
    [Test]
    public void Init_ValidArguments_ReturnsTrue()
    {

        // Arrange
        int x = 1, y=1, Width= 1, Height = 1;

        Rectangle rectangle = new(1,1,1,1);
        // Act
        var result = rectangle.Init(x, y, Width, Height);

        // Assert
        Assert.IsTrue(result);
    }

    [Test]
    public void Init_FirstValueGreaterThanSecond_ReturnsFalse()
    {
        // Arrange
        int newX = 1, newY = 1, newWidth = -1, newHeight = 1;
        var rectangle = new Rectangle();

        // Act
        var result = rectangle.Init(newX, newY, newWidth, newHeight);

        // Assert
        Assert.IsFalse(result);
    }
}
