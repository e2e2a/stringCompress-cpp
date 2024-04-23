# stringCompress Sequence in C++

This repository contains a function that performs basic string compression by using the counts of repeated characters. The function iterates over the input string and for each character, it appends the character to the result string followed by the count of that character in the contiguous segment.

## Example
Here's an example of how the `compressString` function can be used:
```cpp
std::string str = "aabcccccaaa";
std::cout << compressString(str) << std::endl; // Output: a2b1c5a3

str = "zzzzzzzz";
std::cout << compressString(str) << std::endl; // Output: z8

str = "abc";
std::cout << compressString(str) << std::endl; // Output: a1b1c1

```
In these examples, the function compresses the input strings by replacing each contiguous segment of repeated characters with the character followed by the count of the character in that segment.

## Prerequisites

Before you begin, ensure you have the following installed on your local machine:

- A modern C++ compiler
- Git
- Docker

## Getting Started

Follow these steps to get a copy of the project up and running on your local machine for development and testing purposes.

### Clone the Repository

First, clone the repository using the following commands:

```bash
git clone https://github.com/e2e2a/stringCompress-cpp.git
cd stringCompress-cpp
```

## Build and Run the Application

To build the application, use the following command:

```bash
g++ -o stringCompress stringCompress.cpp
```

To run the application, use the following command:

```bash
./stringCompress
```

## Docker

This repository also includes a Dockerfile for building a Docker image of the application. To build the Docker image, use the following command:

```bash
docker build -t stringCompress .
```

To run the Docker image, use the following command:

```bash
docker run -v ${PWD}:/app stringCompress
```

To run the stringCompress.exe:

```bash
docker run -it stringCompress
```
## Continuous Integration with GitHub Actions

This repository uses GitHub Actions for continuous integration. Upon every push to the repository, the GitHub Actions workflow will automatically build the project and create a release with the built executable.

### Setting up GitHub Actions

Before you can use GitHub Actions, you need to update the workflow permissions. Navigate to your project’s `Settings` -> `Actions` -> `General` -> `Workflow permissions` and set it to `Read and write permissions`. This allows GitHub Actions to access workflow environment variables like `$GITHUB_TOKEN`.
