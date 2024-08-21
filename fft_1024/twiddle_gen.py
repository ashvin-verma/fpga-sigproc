import numpy as np

def generate_twiddle_factors(N, width):
    factors_real = []
    factors_imag = []
    for k in range(N//2):
        twiddle = np.exp(-2j * np.pi * k / N)
        real = int(np.round(np.real(twiddle) * (2**(width-1) - 1)))
        imag = int(np.round(np.imag(twiddle) * (2**(width-1) - 1)))
        factors_real.append(real & ((1 << width) - 1))
        factors_imag.append(imag & ((1 << width) - 1))
    return factors_real, factors_imag

# Generate factors
N = 1024
width = 16
twiddle_factors_real, twiddle_factors_imag = generate_twiddle_factors(N, width)

# Write to files
with open('twiddle_factors_real.mem', 'w') as f:
    for real in twiddle_factors_real:
        f.write(f"{real:04x}\n")

with open('twiddle_factors_imag.mem', 'w') as f:
    for imag in twiddle_factors_imag:
        f.write(f"{imag:04x}\n")

print("Twiddle factors have been written to twiddle_factors_real.mem and twiddle_factors_imag.mem")
