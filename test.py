import os
import numpy as np

def main():
  for f in os.listdir("."):
    if len(f) > 4 and f[-4:] == ".npy":
      print(f, np.load(f).dtype)

if __name__ == "__main__":
  main()
