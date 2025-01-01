import re
import os
import sys

if len(sys.argv) != 2:
    print("Usage: python script.py <filename>")
    exit(1)

file = sys.argv[1]

if os.path.exists(file):
    with open(file, "r") as f:
        for line in f:
            match = re.search("Avance|Recule|Tourne gauche|Tourne droite", line)

            if match:
                only_numbers = int(re.sub("[^0-9]", "", line))
                command = match.group()

                if command == "Avance":
                    print(f"t.forward({only_numbers})")
                elif command == "Recule":
                    print(f"t.backward({only_numbers})")
                elif command == "Tourne gauche":
                    print(f"t.left({only_numbers})")
                elif command == "Tourne droite":
                    print(f"t.right({only_numbers})")

else:
    print("File not found:", file)
    exit(1)
exit(0)
