# Max Subarray Sum (Kadane’s Algorithm)

This project demonstrates an implementation of the maximum subarray sum problem using **Kadane’s Algorithm**, packaged in a templated header for use with any arithmetic type (e.g., `int`, `float`, `double`).

---

## Project Structure

* **`max_sub_arr.hpp`**
  Contains a templated function `max_sum_sub_array` that computes the maximum sum of any contiguous subarray within a given `std::vector<T>`, where `T` must be an arithmetic type.

* **`main_max_sum_suba.cpp`**
  Example driver program: initializes a `std::vector<float>`, calls `max_sum_sub_array`, and prints the result.

* **`makefile`**
  Build script that compiles and links the project (producing the executable `main_sub_sum`).

---

## Requirements

* A C++ compiler with **C++17** support (e.g., `g++`, `clang++`).
* GNU Make (for using the provided `makefile`).

---

## Compilation and Build

### Using Makefile (recommended)

1. Open a terminal and navigate to the project directory:

   ```bash
   cd /path/to/max_subarray_sum
   ```

2. Run:

   ```bash
   make
   ```

   This will produce an executable named `main_sub_sum`.

3. To clean up object files and the executable:

   ```bash
   make clean
   ```

### Manual Compilation

If you don’t have Make installed, you can compile manually:

```bash
# Compile header-only template and driver
g++ -std=c++17 -O2 main_max_sum_suba.cpp -o main_sub_sum
```

---

## Usage

Once compiled, run the executable:

```bash
./main_sub_sum
```

**Example output:**

```
[-2.01 1.123 2.21223 -3.1234 ]
Max Sum from the template is :3.33523
```

Feel free to modify the array in `main_max_sum_suba.cpp` or pass in different test cases by editing the `array` initializer. You can test with:

* Different arithmetic types (`int`, `double`, etc.),
* Vectors of varying lengths,
* Edge cases (all negative values, all positive values, mixed).

---

## Testing and Validation

* **Logic check**: Ensure that the output matches the expected maximum subarray sum for your test vectors.
* **Performance**: The algorithm runs in **O(n)** time and **O(1)** extra space.
* **Template behavior**: Try instantiating with different `T` types (e.g., `int` or `double`) to confirm type flexibility.

---

## Contributing

Contributions, bug reports, and improvements are welcome! Please:

1. Fork this repository.
2. Create a feature branch (`git checkout -b feature-name`).
3. Commit your changes (`git commit -m "Add new feature"`).
4. Push to the branch (`git push origin feature-name`).
5. Open a Pull Request.

---

## License

This project is released under the MIT License. Feel free to use, modify, and distribute.

---

*Happy coding!*
