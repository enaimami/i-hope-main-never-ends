class Plant:
    def __init__(
                self, name: str, height: float, age: int, growth_rate: float
            ) -> None:
        self._name = name
        self._height = 0.0
        self._age_in_days = 0
        self._growth_rate = growth_rate

        self.set_height(height)
        self.set_age(age)

    def show(self) -> None:
        rounded_heigh = round(self._height, 1)
        print(f"{self._name}: {rounded_heigh}cm, {self._age_in_days} days old")

    def set_height(self, height: float) -> None:
        if (height < 0):
            print(f"{self._name}: Error, height can't be negative")
            print("Height update rejected")
            return
        self._height = height

    def set_age(self, age: int) -> None:
        if (age < 0):
            print(f"{self._name}: Error, age can't be negative")
            print("Age update rejected")
            return
        self._age_in_days = age

    def get_age(self) -> int:
        return (self._age_in_days)

    def get_height(self) -> float:
        return (self._height)


class Flower(Plant):
    def __init__(
        self, name: str, height: float, age: int, growth_rate: float,
        color: str
    ) -> None:
        super().__init__(name, height, age, growth_rate)
        self._color: str = color
        self._did_bloomed: bool = False

    def bloom(self):
        self._did_bloomed = True

    def show(self) -> None:
        super().show()
        print(f"Color : {self._color}")
        if self._did_bloomed:
            print(f"{self._name} is blooming beatifully!")
        else:
            print("{self._name} has not bloomed yet")

class Tree(Plant):
    print("tree")


class Vegetable(Plant):
    print("vegies")
