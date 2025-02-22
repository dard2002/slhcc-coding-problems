# Fix the below program - find the problem(s) and fix them
# Program should print the apple's color based on the Color enum class - should output Color.RED as it's a red apple

class Color(Enum):
    RED = 0,
    GREEN = 1
    
class Apple:
    def __init__(self, color):
        self.color = color

apple = Apple(Color.RED)
    