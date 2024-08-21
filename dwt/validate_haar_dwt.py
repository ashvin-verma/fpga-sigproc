import numpy as np

# Load the output from the Verilog testbench
with open('haar_dwt_tb.vcd', 'r') as f:
    verilog_output = f.readlines()

# Parse the Verilog output to extract the approximation and detail coefficients
approx_coeff = None
detail_coeff = None
for line in verilog_output:
    if 'dout_a' in line:
        approx_coeff = int(line.split('=')[1].strip())
    elif 'dout_d' in line:
        detail_coeff = int(line.split('=')[1].strip())

# Verify the output
print(f'Approximation coefficient: {approx_coeff}')
print(f'Detail coefficient: {detail_coeff}')

# You can add more validation logic here, such as comparing the output
# with expected values or performing additional processing