def ft_harvest_total() -> None:
    harvests = [
        int(input("Day 1 harvest: ")),
        int(input("Day 2 harvest: ")),
        int(input("Day 3 harvest: "))
    ]
    print(f"Total harvest: {harvests[0] + harvests[1] + harvests[2]}")
