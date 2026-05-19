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


def run_security_system() -> None:
    print("=== Garden Security System ===")

    rose = Plant("Rose", 15.0, 10, 1.0)
    print(
            f"Plant created: {rose._name}: "
            f"{rose.get_height()}cm, "
            f"{rose.get_age()} days old"
        )

    rose.set_height(25)
    print("Height updated: 25cm")

    rose.set_age(30)
    print("Age updated: 30 days")

    rose.set_height(-5)
    rose.set_age(-1)

    print("Current state: ", end="")
    rose.show()


if __name__ == "__main__":
    run_security_system()
