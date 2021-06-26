import numpy as np
import matplotlib.pylab as plt
import math


def sigmoid(x):
    return 1 / (1 + np.exp(-x))

def node(x, w):
    input_result = 0
    for a, b in zip(x, w):
        input_result += a * b

    return sigmoid(input_result)

def main():
    x = [1, 0.5]
    w = [[0.1, 0.2], [0.1, 0.2]]
    result = 0
    
    print(f'result: {result} -> {round(result, 4)}')

main()