# High-Performance MP3 Tag Reader (ID3v2)

![Language](https://img.shields.io/badge/Language-Embedded%20C-blue)
![Standard](https://img.shields.io/badge/Standard-C99-green)
![Architecture](https://img.shields.io/badge/Architecture-Modular-orange)

A robust, memory-efficient C application designed to parse and extract **ID3v2 metadata** (Title, Artist, Album, Year, etc.) from MP3 audio files. This project demonstrates low-level file handling, pointer arithmetic, and dynamic memory management essential for embedded multimedia systems.

## 🧠 System Architecture

![System Architecture](architecture.png)

## 📋 Key Features

* **ID3v2 Parsing:** specifically handles the complex ID3v2 frame structure found in modern audio files.
* **Memory Efficient:** Uses dynamic allocation to handle variable-length metadata tags without memory leaks.
* **Modular Design:** Separates file handling, parsing logic, and display logic for easy integration into larger embedded projects.
* **Data Logging:** (Optional) Exports extracted metadata to CSV for dataset creation.

## 🛠️ Technical Implementation

This project was built to simulate a **Metadata Parser** component in an embedded audio player.
* **File I/O:** Uses `fopen`, `fread`, `fseek` to navigate binary file structures.
* **Pointers:** Extensive use of char pointers to manipulate string data buffers.
* **Structs:** Custom `MP3Tag` structure to organize parsed data.

## 🚀 How to Run

1.  **Compile the code:**
    ```bash
    gcc main.c mp3_reader.c -o mp3_reader
    2.  **Run with an MP3 file:**
    ```bash
    ./mp3_reader song.mp3
    
## 📂 Project Structure

* `main.c`: Application entry point.
* `mp3_reader.c`: Core parsing logic implementation.
* `mp3_reader.h`: Header file with function prototypes and struct definitions.
* `types.h`: Custom data types for cross-platform compatibility.

---

### **Your Action Plan:**
1.  **Upload the Architecture Diagram.**
2.  **Update the README.**
3.  **Add the CSV feature** (even 5 lines of code) and push it. This small change lets you talk about "Data Collection" in your AI interviews.
