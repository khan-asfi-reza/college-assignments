import os
import pathlib

path = pathlib.Path().resolve()

files = os.listdir(path)

files = [file for file in files if file.endswith(".c")]
files = sorted(files)
print(files)

with open("submission.txt", "w") as file:
    text = f"// Khan Asfi Reza \n//ID: 2321616642\n"
    for c_file in files:
        read = open(c_file, "r")
        text += read.read()
        read.close()
        text += "\n\n\n//-----------------------------\n\n"
    file.write(text)
