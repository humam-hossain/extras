# Output:
# Pasta Plate Count: 0
# =======================
# Pasta Type: Chicken
# Shape: Farfalle
# Cal: 250 g
# Fat: 11 g
# Protein: 40 g
# Carbohydrate: 10 g
# ------------------------------------
# Pasta Type: Beef
# Shape: Pipe Rigate
# Cal: 150 g
# Fat: 10.5 g
# Protein: 10 g
# Carbohydrate: 10 g
# ------------------------------------
# Pasta Type: Mushrooms
# Shape: Spaghetti
# Cal: 500 g
# Fat: 50 g
# Protein: 20 g
# Carbohydrate: 10 g
# =======================
# Pasta Plate Count: 3

class Pasta:
    pasta_plate_count = 0

    def __init__(self, type):
        self.type = type
        Pasta.pasta_plate_count += 1

    def set_ingredients(self, shape, cal, fat, protein, carbohydrate):
        self.shape = shape
        self.cal = cal
        self.fat = fat
        self.protein = protein
        self.carbohydrate = carbohydrate

    def display_all_info(self):
        print(f"Pasta Type: {self.type}")
        print(f"Shape: {self.shape}")
        print(f"Cal: {self.cal} g")
        print(f"Fat: {self.fat} g")
        print(f"Protein: {self.protein} g")
        print(f"Carbohydrate: {self.carbohydrate} g")


print("Pasta Plate Count:", Pasta.pasta_plate_count)
print("=======================")
s1 = Pasta("Chicken")
s1.set_ingredients("Farfalle",250, 11, 40, 10)
s1.display_all_info()
print("------------------------------------")
s2 = Pasta("Beef")
s2.set_ingredients("Pipe Rigate",150, 10.5, 10, 10)
s2.display_all_info()
print("------------------------------------")
s3 = Pasta("Mushrooms")
s3.set_ingredients("Spaghetti",500, 50, 20, 10)
s3.display_all_info()
print("=======================")
print("Pasta Plate Count:", Pasta.pasta_plate_count)