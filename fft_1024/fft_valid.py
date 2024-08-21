import numpy as np
import re

def read_verilog_output(filename):
    y = np.zeros(1024, dtype=np.complex64)
    with open(filename, 'r') as f:
        for line in f:
            match = re.match(r'y\[\s*(\d+)\]\s*=\s*(-?\d+)\s*\+\s*j\s*(-?\d+)', line)
            if match:
                index = int(match.group(1))
                real = int(match.group(2))
                imag = int(match.group(3))
                y[index] = real + 1j*imag
    return y

# Generate input data (same as Verilog testbench)
x = np.arange(1024, dtype=np.complex64)

# Perform NumPy FFT
y_numpy = np.fft.fft(x)

# Read Verilog output
y_verilog = read_verilog_output('verilog_output.txt')

# Compare results
mse = np.mean(np.abs(y_numpy - y_verilog)**2)
print(f"Mean Squared Error: {mse}")

# Print magnitude and phase for both
print("\nNumPy FFT (first 10 points):")
for i in range(10):
    mag = np.abs(y_numpy[i])
    phase = np.angle(y_numpy[i], deg=True)
    print(f"y[{i:4d}]: magnitude = {mag:.2f}, phase = {phase:.2f} degrees")

print("\nVerilog FFT (first 10 points):")
for i in range(10):
    mag = np.abs(y_verilog[i])
    phase = np.angle(y_verilog[i], deg=True)
    print(f"y[{i:4d}]: magnitude = {mag:.2f}, phase = {phase:.2f} degrees")

# Print last 10 points of Verilog FFT
print("\nVerilog FFT (last 10 points):")
for i in range(1014, 1024):
    mag = np.abs(y_verilog[i])
    phase = np.angle(y_verilog[i], deg=True)
    print(f"y[{i:4d}]: magnitude = {mag:.2f}, phase = {phase:.2f} degrees")
